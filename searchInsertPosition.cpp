#include <iostream>
#include <vector>

using std::vector;
using std::cout;
// must be in logn time
// return the index
int searchInsert(vector<int> &nums, int target)
{
    // use similar to binary search
    int high = nums.size() - 1;
    int low = 0;
    int mid = (low + nums.size()) / 2;
    while (low <= high) {
        if (nums.at(mid) == target) {
            return mid;
        } else if (nums.at(mid) < target) {
            mid = low;
        } else if (nums.at(mid) > target) {
            low = mid;
        }
    }

    return mid;
}
int main()
{
    vector<int> nums;
    int target = 0;
    cout << searchInsert(nums, target);
}