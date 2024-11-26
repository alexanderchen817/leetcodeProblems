// Problem #21 Merge Two Sorted Linked Lists (splicing)
#include <iostream>
#include <vector>
#include <cstdlib>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
{
    // given heads of the 2 lists
    // return the head of the new merged list 

    // if both lists are empty
    if (list1 == nullptr && list2 == nullptr) {
        return nullptr;
    }

    // duplicates count!
    ListNode* node1 = nullptr;
    ListNode* node2 = nullptr;
    if (list1->val < list2->val) {
        // lst 1 is smaller
        node1 = list1;
        node2 = list2;
    } else {
        // list 2 is smaller
        node1 = list2;
        node2 = list1;
    }

    // return merged list 
    return list1;
}
int main()
{
    return 0;
}