#include <iostream>

using namespace std;

struct Node
{
    int val;
    Node* left;
    Node* right;
};

void searchBST(int low, int high, Node* nd)
{
    if (nd == nullptr) {
        return; 
    }

    searchBST(low, high, nd->left);
    if (nd->val <= high && nd->val >= low) {
        cout << nd->val << " ";
    }
    searchBST(low, high, nd->right);
}
int main()
{
    searchBST();
    return 0;
}