#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
    // remove all occurences of 'val' in nums in place
    for (int i = 0; i < nums.size(); i++) {
        if (nums.at(i) == val) {
            nums.erase(nums.begin() + i);
            i--; // adjust for size after erasing
        }
    }

    // return the number of elements in nums with all occurences of 'val' removed.
    return nums.size();
}
int main()
{
    vector<int> test {0,1,2,2,3,0,4,2};
    cout << removeElement(test, 2) << endl;
    return 0;
}