#include<iostream>

using namespace std;

int main(){
    int arr[]={23,56,87,2,56,98};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    int i=n-1, j=0;
    while (i>=0){
        temp[j]=arr[i];
        i--;
        j++;
    }
    
    i=0; j=0;
    while (i<=n-1){
        arr[i]=temp[j];
        i++;
        j++;
    }

    for (int a = 0; a<n; a++){
        cout<<arr[a]<<endl;
    }
    
}