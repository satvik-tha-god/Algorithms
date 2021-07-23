//////////////////////////////////best solution////////////////////////////
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

//////////////////////////////Worse Solution/////////////////////////
#include <bits/stdc++.h>

using namespace std;

void leftrotateByOne(int arr[], int n){ //do it by one
    int temp = arr[0], i;
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
        int[n-1]= temp;
        }
}

void leftRotate(int arr[], int d, int n){ //call it multiple times
    for(int i=0;i<d;i++){
        leftrotateByOne(arr,n);
    }
}

void printArray(int arr[], int n) //print
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() //driver code
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling
    leftRotate(arr, 2, n);
    printArray(arr, n);

    return 0;
}
