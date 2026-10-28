#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& arr, int start, int mid, int end) {
    vector<int> temp;
    int i = start; 
    int j = mid + 1; 
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }
    for (int k = 0; k < temp.size(); k++) {
        arr[start + k] = temp[k];
    }
}
void mergeSort(vector<int>& arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = (start + end) / 2; 
    mergeSort(arr, start, mid);   
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);  
}
int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    cout << "Before: ";
    for(int num : arr) 
    {
    cout << num << " ";
    }
    cout << endl;
    mergeSort(arr, 0, arr.size() - 1);
    cout << "After: ";
    for(int num : arr) 
    {
    cout << num << " ";
    }
    return 0;
}