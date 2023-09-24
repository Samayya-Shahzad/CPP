#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int N, int i)
{
 int largest = i;         // Initialize largest as root
    int l = (2*i) + 1;    // left node= 2*i + 1
    int r = (2*i) + 2;    // right node= 2*i + 2
 
                                            
    if (l < N && arr[l] > arr[largest])           // If left child is larger than root
        largest = l;
 
    
    if (r < N && arr[r] > arr[largest])          // If right child is larger than largest so far
        largest = r;
 
                
    if (largest != i) {                         // If largest is not root
        swap(arr[i], arr[largest]);
 
                                             // Recursively heapify the affected sub-tree
        heapify(arr, N, largest);
    }
}


void deleteRoot(int arr[], int& n)
{
    // Get the last element
    int lastElement = arr[n - 1];
 
    // Replace root with last element
    arr[0] = lastElement;
 
    // Decrease size of heap by 1
    n = n - 1;
 
    // heapify the root node
    heapify(arr, n, 0);
}
/*
void insertheapify(int arr[], int n, int i)
{
    int parent = (i - 1) / 2;
 
    if (arr[parent] > 0) {
     // For Max-Heap If current node is greater than its parent Swap both of them and call heapify again for the parent
        if (arr[i] > arr[parent]) {
            swap(arr[i], arr[parent]);
 
            // Recursively heapify the parent node
            heapify(arr, n, parent);
        }
    }
}
*/
void insertNode(int arr[], int& n, int Key)
{
    // Increase the size of Heap by 1
    n = n + 1;
 
    // Insert the element at end of Heap
    arr[n - 1] = Key;
 
    // Heapify the new node following a Bottom-up approach
    //insertheapify(arr, n, n - 1);
   heapify(arr,n,0);
}


void buildHeap(int arr[], int N)
{
    // Index of last non-leaf node
    int startIdx = (N / 2) - 1;
 
    // Perform reverse level order traversal from last non-leaf node and heapify each node
    
    for (int i = startIdx; i >= 0; i--) {
        heapify(arr, N, i);
    }
}


void printHeap(int arr[], int N)
{
    cout << "Array representation of Heap is:\n";
 
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}


int main()
{
 int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
 
    int N = sizeof(arr) / sizeof(arr[0]);
 
    buildHeap(arr, N);
    printHeap(arr, N);
    cout<<"\n\n";
    deleteRoot(arr, N);
    printHeap(arr, N);
    
    int key =20;
    
 cout<<"\n\n";
    insertNode(arr, N, key);
    buildHeap(arr,N);
    printHeap(arr,N);
     
   
    
    
    // Final max Heap:
    //              17
    //            /    \
    //          15      13
    //         /  \     / \
    //        9     6  5   10
    //       / \   / \
    //      4   8 3   1
}

