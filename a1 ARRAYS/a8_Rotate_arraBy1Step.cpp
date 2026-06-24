#include<iostream>

using namespace std;
// // Rotate right by 1 step
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;

//     int temp=arr[n-1];

//     for(int i=n-1; i>0; i--){
//         arr[i]=arr[i-1];
//     }

//     arr[0]=temp;
//     for(int i=0; i<n; i++){
//         cout<<arr[i];

//     }
// }

// Rotate left by 1 step

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=5;

//     int temp=arr[0];

//     for(int i=0; i<n-1; i++){
//         arr[i]=arr[i+1];
//     }

//     arr[n-1]=temp;
//     for(int i=0; i<n; i++){
//         cout<<arr[i];

//     }
// }


// rotate n times to right

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int x;
    cout<<"give how may times you want to rotate to right =";
    cin>>x;

    // int temp=arr[n-1];

    for(int a=1; a<=x; a++){
        int temp=arr[n-1];
        for(int i=n-1; i>0; i--){
            arr[i]=arr[i-1];
        }

    arr[0]=temp;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i];}


    // for(int i=n-1; i>0; i--){
    //     arr[i]=arr[i-1];
    // }

    // arr[0]=temp;
    // for(int i=0; i<n; i++){
    //     cout<<arr[i];

    // }
}