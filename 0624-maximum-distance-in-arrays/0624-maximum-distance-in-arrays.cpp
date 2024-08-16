class Solution {
public:
    int maxDistance(std::vector<std::vector<int>>& arrays) {
    int min1 = arrays[0].front();
    int max1 = arrays[0].back();
    int maxDistance = 0;

    for (int i = 1; i < arrays.size(); i++) {
        int min2 = arrays[i].front();
        int max2 = arrays[i].back();

        maxDistance = std::max(maxDistance, std::max(abs(max2 - min1), abs(max1 - min2)));

        // Update min1 and max1 to include thi array
        min1 = std::min(min1, min2);
        max1 = std::max(max1, max2);
    }

    return maxDistance;
}
};