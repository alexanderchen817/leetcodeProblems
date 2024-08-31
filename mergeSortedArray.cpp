// Problem #88: Merge Sorted Array
// Difficulty: easy

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <cassert>
#include <stdio.h>
#include <ctime>

using namespace std;

// both arrays are in "non-decreasing order"
// goal: merge nums2 into nums1
// nums1 has length m + n after merge
// nums2 has length 0 after merge, that is n = 0, and nums2 is empty
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{   
    
}
int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    
    merge(nums1, m, nums2, n);
    // should display size of 6
    cout << nums1.size();
    // display nums1 content
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1.at(i) << endl;
    }   
    return 0;
}