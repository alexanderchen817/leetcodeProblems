#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    // remove duplicates in place such that each unique element appears once
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums.at(i) == nums.at(j)) {
                nums.erase(nums.begin() + j);
                j--; // decrement j to account for shift of size (size - 1 after erasing)
            }
        }
    }

    for (int i = 0; i < nums.size(); i++) {
        cout << nums.at(i) << endl;
    }
    // return the number of unique elements in nums, which is 'k' == nums.size()
    return nums.size(); 
}

int main()
{
    vector<int> test {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(test) << endl;
    return 0;
}