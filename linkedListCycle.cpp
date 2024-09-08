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
    // if there is only one/no element in the list, there is no cycle
    if (head->next == nullptr || head == nullptr) {
        return false;
    }

    // return true if cycle, false if no cycle
    bool hasCycle = false;
    // loop through linked list
    while (head != nullptr) {
        // pos is -1 if there is no cycle

        // check 
    }
}
int main()
{
    return 0;
}