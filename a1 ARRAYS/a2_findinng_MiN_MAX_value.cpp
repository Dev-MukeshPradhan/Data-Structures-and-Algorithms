#include<iostream>
#include<climits>

using namespace std;

int main(){

    int arr[]={56,78,90,32,45,76,89,1,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min_value = INT_MAX;
    int max_value = INT_MIN;

    for (int i = 0; i <n; i++){
        if(arr[i]<min_value){
            min_value=arr[i];

        }
    }
    cout<<"min value of array is : "<<min_value<<endl;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max_value){
            max_value=arr[i];
        }
    }

    cout<<"max value of array is : "<<max_value;

    
    
}