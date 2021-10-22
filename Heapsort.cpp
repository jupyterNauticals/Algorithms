//heap sort
#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{

    int largest = i; 

    int l = 2 * i + 1; 

    int r = 2 * i + 2; 
 

    if (l < n && arr[l] > arr[largest])

        largest = l;
 
    if (r < n && arr[r] > arr[largest])

        largest = r;

    if (largest != i) {

        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);

    }
}
 

void heapSort(int arr[], int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)

        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {

        swap(arr[0], arr[i]);

        heapify(arr, i, 0);

    }
}
 

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; ++i)

        cout << arr[i] << " ";

    cout << "\n";
}
 

int main()
{
    int n;
    cout << "Enter the size of array :\n";
    cin >> n;

    cout << "\n\nEnter the elements of array : \n";
    int a[n];

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    heapSort( a, n );

    cout << "\n\nSorted array is :\n";
    printArray( a , n);

    return 0;
}
