#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;
// must be in logn time
// return the index
int searchInsert(vector<int> &nums, int target)
{
    // use case is similar to binary search
    // init variables 
    int high = nums.size();
    int low = 0;
    int mid = 0;

    while (low < high) {
        // must calculate mid every loop    
        mid = (low + high) / 2;
        if (nums.at(mid) == target) {
            return mid; 
        } else if (nums.at(mid) < target) {
            low = mid + 1; // target is not at mid, is bigger 
        } else if (nums.at(mid) > target) {
            high = mid; // target is not at mid, is smaller
        } 
    }
    // return where the index would be 
    return low;
}
int main()
{
    vector<int> nums {1,3,5,6};
    int target = 2;
    int search = searchInsert(nums, target);
    cout << "index: " << search << endl;

}