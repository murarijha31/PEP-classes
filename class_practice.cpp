// #include<iostream>
// using namespace std;
// int main(){
//     int n,target;
//     cout<<"enter size of array: ";
//     cin>>n;
//     cout<<"enter the target value: ";
//     cin>>target;
//     printf("enter the array elements: ");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int left = 0;
//     int right = n-1;
//     while(left<=right){
//         int mid = left + (right - left)/2;
//         if(arr[mid]==target){
//             cout<<"position is: "<<mid;
//             return 0;
//         }else if(arr[mid]<target){
//             left = mid+1;
//         }else{
//             right = mid - 1;
//         }
//     }
//     return 0;
// }


// ------------------------------------------------------


// #include<iostream>
// #include<set>
// #include<iterator>
// using namespace std;
// int main(){
//     int n,target;
//     cout<<"enter size of array: ";
//     cin>>n;
    
//     printf("enter the array elements: ");
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     set<int> s(arr,arr+n);

//     for(int x : s){
//         cout<<x<<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int strt = arr[0];
    int end = n-1;
    while(strt<end){
        int current_sum = arr[strt] + arr[end];
        if(current_sum==target){
            cout<<strt<<" "<<end;
            break;
        }else if(current_sum<target){
            strt++;
        }else{
            end--;
        }
    }
    return 0;
}