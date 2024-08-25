class Solution {
public:

    bool wordPattern(std::string pattern, std::string s) {
    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;
    stringstream ss(s);
    string word;
    int i = 0;

    while (ss >> word) {
        if (i >= pattern.size()) {
            return false;  
        }

        char c = pattern[i];
        
        // Check if there is an existing mapping for the current character
        if (charToWord.count(c)) {
            if (charToWord[c] != word) {
                return false;  // Mapped word does not match the current word
            }
        } else {
            // Check if the current word is already mapped to another character
            if (wordToChar.count(word)) {
                return false;  // Word is already mapped to a different character
            }
            // Establish a new mapping
            charToWord[c] = word;
            wordToChar[word] = c;
        }

        i++;
    }

    return i == pattern.size(); 
    }
};