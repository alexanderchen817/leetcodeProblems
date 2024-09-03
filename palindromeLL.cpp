// Problem #234: Palindrome Linked List
// Difficulty: Easy
#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    // attributes
    int val;
    ListNode *next;

    // constructors 
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome(ListNode* head) 
{
    bool isPalindrome = false;
    string temp = "";
    // traverse through the linked list
    while (head != nullptr) {
        temp += to_string(head->val); // accumulate string
        head = head->next; // traverse to next node
    }
    string temp_backwards = "";
    // check if palindrome by concatenating backwards
    for (int i = temp.size() - 1; i >= 0; i--) {
        temp_backwards += temp.at(i);
    }
    // determine valididity 
    if (temp_backwards != temp) {
        // do nothing, the string is false 
    } else {
        isPalindrome = true;
    }

    return isPalindrome;    
}

int main()
{
    ListNode* list = new ListNode(2);
    ListNode* list2 = new ListNode(1, list);

    // should return 0
    cout << isPalindrome(list2) << endl; 

    delete list2;
    delete list;

    return 0;
}