#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
long long merge(long long *arr, int left, int mid, int right) {
  int i = left;
  int j = mid;
  int k = 0;
  long long count = 0;
  int *temp = new int[right - left + 1];
  while (i < mid and j <= right) {
    if (arr[i] <= arr[j]) {
      // no inversion count
      temp[k++] = arr[i++];
    } else {
      temp[k++] = arr[j++];
      // total count inversion count
      count += mid - i;
    }
  }
  while (i < mid) {
    temp[k++] = arr[i++];
  }
  while (j <= right) {
    temp[k++] = arr[j++];
  }
  // cpy into arr
  for (int i = left, k = 0; i <= right; i++, k++) {
    arr[i] = temp[k];
  }
  delete []temp;
  return count;
}
long long mergesort(long long *arr, int left, int right) {
  long long count = 0;
  while (right > left) {
    long mid = (left + right) / 2;
    long long countleft = mergesort(arr, left, mid);
    long long countright = mergesort(arr, mid + 1, right);
    long long mergecount = merge(arr, left, mid + 1, right);
    return countleft + countright + mergecount;
  }
  return count;
}
long long getInversions(long long *arr, int n){
  long long ans = mergesort(arr, 0, n - 1);
  return ans;
}
int main()
{
    int n;
    cin >> n;

    long long* arr = new long long[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << getInversions(arr, n);

    delete arr;
}