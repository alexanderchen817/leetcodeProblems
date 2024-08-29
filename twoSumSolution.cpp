// Problem #1: two sum
// Difficulty: Easy

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> addIndecies;

        // check each number in the vector
        for (int i = 0; i < nums.size(); i++) {
            // get first number in vector
            int num = nums.at(i);
            // start at next number for vector since we cannot use the same number twice
            // since we also don't want to always start at the second element after the 
            // first iteration from the first loop

            // analogy: keep on moving one element over and checking linearly
            for (int j = i + 1; j < nums.size(); j++) {
                if ((nums.at(j) + num) == target) {
                    // add both numbers that add up to the target 
                    addIndecies.push_back(i);
                    addIndecies.push_back(j);
                    // exit loop once found pair
                    break;
                }
            }
        }
        return addIndecies;
    }
};

int main()
{
    return 0;
}
