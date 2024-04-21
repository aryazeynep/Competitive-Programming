/*
void merge(array, left, right, mid):
1- Create temporary arrays leftArray and rightArray for left and right halves.
2- Copy data to leftArray from array[left] to array[mid].
3- Copy data to rightArray from array[mid + 1] to array[right].
4- Initialize indices i, j, and k for leftArray, rightArray, and array respectively.
5- Loop while i and j are less than the sizes of leftArray and rightArray:
a- If leftArray[i] is less than or equal to rightArray[j], set array[k] to leftArray[i] and increment i.
b- Otherwise, set array[k] to rightArray[j] and increment j.
c- Increment k.
6- If there are remaining elements in leftArray or rightArray, copy them to array.

void mergeSort(array, left, right):
1- If left is less than right:
a- Calculate mid as (left + right) / 2.
b- Call mergeSort for the right half (mergeSort(array, mid + 1, right)).
c- Call mergeSort for the left half (mergeSort(array, left, mid)).
d- Call merge function to merge the left and right halves (merge(array, left, right, mid)).


 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
#define ll long long

void merge(vector<int>& array, int left, int right, int mid, int& count) { //mid sıfırdan başlayan bir index
    //1- Create temporary arrays leftArray and rightArray for left and right halves.
    int leftSize = mid - left +1;
    int rightSize= right - mid;
    vector<int> tempLeft(leftSize);
    vector<int> tempRight(rightSize);

    //2- Copy data to leftArray from array[left] to array[mid].

    for(int i = 0; i < leftSize; i++){
        tempLeft[i] = array[left + i];
    }

    //3- Copy data to rightArray from array[mid + 1] to array[right].

    for(int i = 0; i < rightSize; i++){
        tempRight[i] = array[mid+1+i];
    }


//4- Initialize indices i, j, and k for leftArray, rightArray, and array respectively.
    int i = 0, j = 0, k = left;


//5- Loop while i and j are less than the sizes of leftArray and rightArray:
    while (i < leftSize && j < rightSize) {
        //a- If leftArray[i] is less than or equal to rightArray[j], set array[k] to leftArray[i] and increment i.
        if (tempLeft[i] <= tempRight[j]) {
            array[k] = tempLeft[i];
            i++;        }
        //b- Otherwise, set array[k] to rightArray[j] and increment j.
        else {
            array[k] = tempRight[j];
            j++;}
        //c- Increment k.
        k++;
    }

//6- If there are remaining elements in leftArray or rightArray, copy them to array.
// Copy the remaining elements of leftArray and rightArray, if any
    while (i < leftSize) {
        array[k] = tempLeft[i];
        i++;
        k++;
    }
    while (j < rightSize) {
        array[k] = tempRight[j];
        j++;
        k++;
    }
    count++;

}

void mergeSort(vector<int>& array, int left, int right, int& count) {
    /*
     * 1- If left is less than right:
a- Calculate mid as (left + right) / 2.
b- Call mergeSort for the right half (mergeSort(array, mid + 1, right)).
c- Call mergeSort for the left half (mergeSort(array, left, mid)).
d- Call merge function to merge the left and right halves (merge(array, left, right, mid)).
     */
    if (left < right){
        int mid = (left+right) / 2;
        mergeSort(array, mid+1, right, count);
        mergeSort(array, left, mid, count );
        merge(array, left, right, mid, count);
    }


}


int main() {
    int n;
    cin >> n;

    vector<int> fi(n);

    for (ll i = 0; i < n; ++i) {
        cin >> fi[i];
    }
    int count = 0;

    // Perform Merge Sort
    mergeSort(fi, 0, fi.size() - 1, count);

    for (int num : fi)
        cout << num << " ";
    cout << endl;
    cout << count;



}