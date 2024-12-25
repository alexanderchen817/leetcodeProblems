// bruh
#include <iostream>

using namespace std;

void heapify(int arr[], int n)
{
    int nodeidx = (n - 2) / 2 ;
    if (nodeidx == -1) {
        return;
    }

    for (int i = nodeidx; i >= 0; i--) {
        int largest = i;
        int leftChild = (2 * i) + 1;
        int rightChild = (2 * i) + 2;

        if (leftChild < n && arr[leftChild] < arr[largest]) {
            int temp = arr[largest];
            arr[i] = arr[leftChild];
            arr[leftChild] = temp;
        } 
        if (rightChild < n && arr[rightChild] < arr[largest]) {
            int temp = arr[largest];
            arr[largest] = arr[rightChild];
            arr[rightChild] = temp;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{

    int arr[] = {6,5,4,3,2,1};
    print(arr, 6);
    heapify(arr, 6);
    cout << endl;
    print(arr, 6);
    return 0;
}