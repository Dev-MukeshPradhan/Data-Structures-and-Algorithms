#include<iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,5};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = m+1;   // you have to add sum of n natural numbers, do not get confused withe the number of elements
    int total_sum=(n*(n+1))/2;
    int arr_sum=0;

    for(int i=0; i<m; i++){
        arr_sum=arr_sum+arr[i];

    }

    int miss_no = total_sum-arr_sum;

    cout<<"missing no is : "<<miss_no;


}