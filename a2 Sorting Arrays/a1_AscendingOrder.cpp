#include<iostream>
#include<utility>
using namespace std;

int main(){
    int arr[]={10,8,2,3,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    for(int i=0; i<n; i++){
        int index =i;

        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        cout<<arr[index];
        swap(arr[i],arr[index]);
    }

    cout<<"Sorted Array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}