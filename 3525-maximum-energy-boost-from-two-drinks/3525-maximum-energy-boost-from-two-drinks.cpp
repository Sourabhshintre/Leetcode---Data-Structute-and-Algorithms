class Solution {
public:
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        
        int n = energyDrinkA.size();

        // Special cases for small sizes
        if (n < 3) {
            return max(accumulate(energyDrinkA.begin(), energyDrinkA.end(), 0LL),
                       accumulate(energyDrinkB.begin(), energyDrinkB.end(), 0LL));
        }

        // Initialize DP arrays with long long
        vector<long long> dpA(n, 0), dpB(n, 0);

        // Base case
        dpA[0] = energyDrinkA[0];
        dpB[0] = energyDrinkB[0];

        // Fill DP arrays
        for (int i = 1; i < n; ++i) {
            if (i > 1) {
                dpA[i] = max(dpA[i-1] + static_cast<long long>(energyDrinkA[i]), dpB[i-2] + static_cast<long long>(energyDrinkA[i]));
                dpB[i] = max(dpB[i-1] + static_cast<long long>(energyDrinkB[i]), dpA[i-2] + static_cast<long long>(energyDrinkB[i]));
            } else {
                dpA[i] = max(dpA[i-1] + static_cast<long long>(energyDrinkA[i]), static_cast<long long>(energyDrinkA[i]));
                dpB[i] = max(dpB[i-1] + static_cast<long long>(energyDrinkB[i]), static_cast<long long>(energyDrinkB[i]));
            }
        }

        // Return the maximum of the last hour's choices
        return max(dpA[n-1], dpB[n-1]);
    }
};