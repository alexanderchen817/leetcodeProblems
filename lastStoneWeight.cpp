// Question 1046: last stone weight using a max heap
#include <vector>
#include <algorithm>
#include <iostream>
using std::vector;
using std::push_heap;
using std::make_heap;
using std::cout;
using std::endl;

int lastStoneWeight(vector<int>& stones)
{
    // convert stones vector into max heap 
    // make_heap makes a max heap
    make_heap(stones.begin(), stones.end());

    while (stones.size() > 1) {
        // the two heaviest stones will be popped off all the time
        // pop heap puts the first element to the back of the vector
        pop_heap(stones.begin(), stones.end());
        // assign the weight at the end of the vector
        int weightY = stones.at(stones.size() - 1);
        stones.pop_back(); // remove the last element from the vector
        
        pop_heap(stones.begin(), stones.end());
        int weightX = stones.at(stones.size() - 1);
        stones.pop_back(); 

        if (weightX != weightY) {
            // append the new weight to the heap
            stones.push_back(weightY - weightX);
            push_heap(stones.begin(), stones.end());
        }
    }
    // return the final value if it exists, otherwise return 0
    if (!stones.empty()) {
        // return the first element
        return stones.at(0);
    } else {
        return 0;
    }
}

int main()
{
    vector<int> stones = {2,7,4,1,8,1};
    cout << lastStoneWeight(stones) << endl;
    return 0;
}