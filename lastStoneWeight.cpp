// Question 1046: last stone weight
#include <vector>
#include <algorithm>
#include <iostream>
using std::vector;
using std::make_heap;
using std::cout;
using std::endl;

int lastStoneWeight(vector<int>& stones)
{
    // convert stones vector into max heap 
    int firstStone = 0; // x 
    int secondStone = 0; // y
    make_heap(stones.begin(), stones.end());
    int i = 0;

    // iterate through stones till size is 1
    while (stones.size() > 1) {
        firstStone = stones.at(i);
        secondStone = stones.at(i + 1);

        if (firstStone != secondStone) {
            // destroy x
            stones.erase(stones.begin() + i);
            // y has a new weight and is inserted
            secondStone = secondStone - firstStone;
            stones.push_back(secondStone);
        } else {
            // if the stones are equal, both get removed
            stones.erase(stones.begin() + i);
            stones.erase(stones.begin() + i + 1);
        }
        i++; // move to next biggest value in heap
    }
    
    if (stones.size() == 0) {
        return 0;
    }
    return stones.at(0);
}
int main()
{
    vector<int> stones = {2,7,4,1,8,1};
    cout << lastStoneWeight(stones) << endl;
    return 0;
}