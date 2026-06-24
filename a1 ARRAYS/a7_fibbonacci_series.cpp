#include<iostream>

using namespace std;

int main(){
    int nth;
    cout<<"Enter the nth element you want : ";
    cin>>nth;
    int arr[1000]; //putting up a constant value here will be the good practice
    arr[1]=0;
    arr[2]=1;
    for(int i=3; i<=nth; i++){
        arr[i]=arr[i-1]+arr[i-2];

    }
    cout<<nth<<"th"<<" Element is : "<<arr[nth];

    return 0;



}

// int main(){
//     int n;
//     cout<<"Enter the nth element you want : ";
//     cin>>n;
//     int Nth_ele=0;
//     int ele_1 = 0;
//     int ele_2 = 1;
//     if(n==1){
//         cout<<n<<"th"<<" Element is : "<<ele_1;
//     }
//     if(n==2){
//         cout<<n<<"th"<<" Element is : "<<ele_2;
//     }
//     if(n>2){
//         for(int i=3; i<=n; i++){
//             Nth_ele=ele_2+ele_1;
//             ele_1=ele_2;
//             ele_2=Nth_ele;

//         }

//         cout<<n<<"th"<<" Element is : "<<Nth_ele;


        
//     }
//     return 0;


// }