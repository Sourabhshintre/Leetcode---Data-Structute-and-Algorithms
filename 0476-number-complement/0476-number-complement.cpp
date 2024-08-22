class Solution {
public:
    int findComplement(int num) {
         std::bitset<32> binary(num);
        std::string binaryString = binary.to_string();
        
       
        int i = 0;
        while (i < binaryString.length() && binaryString[i] != '1') {
            i++;
        }

      
        std::string ans = "";
        for (int j = i; j < binaryString.length(); j++) {
            if (binaryString[j] == '1') {
                ans += '0';
            } else {
                ans += '1';
            }
        }

        // Convert the binary string back to an integer
        int result = 0;
        for (int k = 0; k < ans.length(); k++) {
            result = (result << 1) + (ans[k] - '0');
        }

        return result;
    }
};