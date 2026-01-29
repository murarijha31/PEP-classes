// bubble sort-------
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {5,4,3,2,1};
    
//     for(int i=0;i<5;i++){
//         for(int j=1;j<5-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// selection sort-------------

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {5,4,3,2,1};
    for(int i=0;i<5-1;i++){
        int min_idx = i;
        for(int j=i+1;i<5;j++){
            if(arr[j]<arr[min_idx]){
                swap(arr[i],arr[min_idx]);
                // min_idx = j;
            }
        }
        // swap(arr[i],arr[min_idx]);
    } 
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}