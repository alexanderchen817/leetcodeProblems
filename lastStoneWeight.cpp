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
    int lastStone = 0;
    make_heap(stones.begin(), stones.end());

    return lastStone;
}
int main()
{
    vector<int> stones = {2,7,4,1,8,1};
    cout << lastStoneWeight(stones) << endl;
    return 0;
}