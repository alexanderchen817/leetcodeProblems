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

    // if both lists are empty
    if (list1 == nullptr && list2 == nullptr) {
        return nullptr;
    }

    // find smaller item
    ListNode* node1 = nullptr;
    ListNode* node2 = nullptr;
    if (list1 != nullptr && list2 != nullptr) {
        if (list1->val <= list2->val) {
            // lst 1 is smaller or equal to
            node1 = list1;
            node2 = list2;
        } else {
            // list 2 has an initial smaller value
            node1 = list2;
            node2 = list1;
        }
    } else if (list1 == nullptr && list2 != nullptr ) {
        // list's list doesnt exist
        return list2;
    } else {
        // list2 is a nullptr so list2's list doesnt exist
        return list1;
    }


    // duplicates count!
    while (node1 != nullptr) {

        if (node1->next != nullptr) {
                ListNode* temp2 = node2->next;
                ListNode* temp1 = node1->next;
            if (node2->val <= node1->next->val) {
                // ensure the bounds are met to insert between node
                node1->next = node2; 
                node2->next = temp1;

                node2 = temp2;
                // skip over the inserted element in node1 list
                node1 = node1->next->next;
            } else {
                // traverse to the next node since we did not insert
                node1 = node1->next;
            }
        }
    }
    // add remaining elements 
    if (!list2) {
        node1->next = list2;
    } else {
        node1->next = list1;
    }
    // return merged list (node1 is the merged list)
    return node1;
}
int main()
{
    return 0;
}