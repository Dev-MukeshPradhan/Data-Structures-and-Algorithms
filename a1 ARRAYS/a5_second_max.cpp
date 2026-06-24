// #include<iostream>
// #include<climits>

// using namespace std;

// int main(){

//     int arr[]={56,78,90,32,45,76,89,1,100};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int max_value = INT_MIN;
//     int sec_max = INT_MIN;

//     for (int i = 0; i < n; i++) // FIRST APPROACH
//     {
//         sec_max = max_value;
//         if(arr[i]>max_value){
//             max_value=arr[i];


//         }
//     }
//     cout<<"second max value of array is : "<<sec_max; 
// }

#include<iostream>
#include<climits>

using namespace std;

int main(){

    int arr[]={56,78,90,32,45,76,89,1,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_value = INT_MIN;
    int sec_max = INT_MIN;

    for (int i = 0; i < n; i++) // SECOND APPROACH
    {

        if(arr[i]>max_value){
            max_value=arr[i];


        }
    }

    for(int i=0; i<n; i++){
        if(max_value!=arr[i]){
            if(sec_max<arr[i]){
                sec_max=arr[i];

            }
        }
    }

    cout<<"second max value of array is : "<<sec_max; 
}