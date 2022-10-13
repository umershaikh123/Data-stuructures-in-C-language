#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

// iterate through each nodes to heapify the heap tree to make it max heap tree
void minheapify(vector<int> &arr, int size, int i)
{
    int root = i;
    int LC = i * 2 + 1;
    int RC = (i * 2) + 2;

    if (LC < size && arr[LC] < arr[root])
    {
        root = LC;
    }
    if (RC < size && arr[RC] < arr[root])
    {
        root = RC;
    }
    if (root != i)
    {
        swap(arr[root], arr[i]);
        minheapify(arr, size, root);
    }
}
// builds a min Heap Tree
void buildminHeapTree(vector<int> &arr)
{
    int size = arr.size();
    for (int i = (size / 2) - 1; i >= 0; i--)
    {
        minheapify(arr, size, i);
    }
}

void printArray(vector<int> arr)
{
    for (int x : arr)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> arr = {4, 6, 1, 2, 4, 13, 16, 19, 20, 22, 0};

    buildminHeapTree(arr);

    printArray(arr);
}