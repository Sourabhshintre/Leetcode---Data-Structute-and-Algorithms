/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 #include <algorithm> 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
     
    string numberStr = "";
    long  sum,r=0;
    ListNode* current = head;
    while (current != nullptr) {
    
        numberStr += to_string(current->val);
        current = current->next;
    }
    int number;
    int temp=number;
    string reversedStr = numberStr;
    reverse(reversedStr.begin(), reversedStr.end());
        
        // Step 3: Check if the original string is equal to the reversed string
    return numberStr == reversedStr;
    // if(temp==rev)
    //     return true;
    // else
    //     return false; 

    }
};