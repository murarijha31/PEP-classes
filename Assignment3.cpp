#include <bits/stdc++.h>
using namespace std;

/* ---------- Quick Sort using FIRST element as pivot ---------- */
int partitionFirst(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);   // place pivot correctly
    return j;
}

void quickSortFirst(int arr[], int low, int high) {
    if (low < high) {
        int p = partitionFirst(arr, low, high);
        quickSortFirst(arr, low, p - 1);
        quickSortFirst(arr, p + 1, high);
    }
}

/* ---------- Quick Sort using MIDDLE element as pivot ---------- */
int partitionMiddle(int arr[], int low, int high) {
    int mid = (low + high) / 2;
    int pivot = arr[mid];
    int i = low, j = high;

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;

        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return i;
}

void quickSortMiddle(int arr[], int low, int high) {
    if (low < high) {
        int p = partitionMiddle(arr, low, high);
        quickSortMiddle(arr, low, p - 1);
        quickSortMiddle(arr, p, high);
    }
}

int main() {
    int n;
    cin >> n;                 // size of array

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];        // array elements

    int choice;
    cin >> choice;            // 1 = first pivot, 2 = middle pivot

    if (choice == 1)
        quickSortFirst(arr, 0, n - 1);
    else
        quickSortMiddle(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
