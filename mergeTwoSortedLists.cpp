// Problem #21 Merge Two Sorted Linked Lists (splicing)
#include <iostream>
#include <vector>
#include <cstdlib>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
{
    // given heads of the 2 lists
    // return the head of the new merged list (ascending order)

    // base cases before looping through lists
    if (list1 == nullptr && list2 == nullptr) {
        return nullptr;
    } else if (list1 == nullptr && list2 != nullptr) {
        return list2;
    } else if (list1 != nullptr && list2 == nullptr) {
        return list1;
    }

    // uses dummy variable, and so we return the 'next' variable of the dummy since we dont wnt to return 0
    ListNode dummy(0);
    ListNode* tail = &dummy;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val < list2->val) {
            // since we want the smaller value
            tail->next = list1; // append the first element 
            list1 = list1->next; // go to the next node in the list 
        } else {
            // list2's value is bigger
            tail->next = list2;
            list2 = list2->next;
        }
        // traverse to next node, if nullptr loop exits
        tail = tail->next;
    }

    // append remaining nodes of either list 
    if (list1 != nullptr){
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    return dummy.next;
}
int main()
{
    return 0;
}