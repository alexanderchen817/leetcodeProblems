// Problem 141: Linked list cycle
// Difficulty: Easy

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode* head)
{
    // cycle terminates at the tail and loops back!
    // if there is only one/no element in the list, there is no cycle
    if (head->next == nullptr || head == nullptr) {
        return false;
    }

    // return true if cycle, false if no cycle
    bool hasCycle = false;
    ListNode* current = head;
    vector<ListNode*> address_nums;
    int counter = 0;
    while (current != nullptr) {
        // if tail node points to nullptr it does NOT have a cycle
        if (current->next == nullptr) {
            break;
        }

        // store the addresses in a vector
        address_nums.push_back(current);
        // check if address has been visited only 
        if (address_nums.size() >= 1) {
            for (int i = 0; i < address_nums.size(); i++) {
                if (current->next == address_nums.at(i)) {
                    // node has already been visited
                    hasCycle = true;
                }
            }
        }

        // traverse to next node in list
        current = current->next;
    }

    return hasCycle;
}

int main()
{
    int x = 1;
    int y = 2;
    ListNode* list = new ListNode(x);
    
    cout << hasCycle(list) << endl;
    return 0;
}