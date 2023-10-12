#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,3,1,5,4,6};
    int n = 6;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    //}
    // bubble sort
    for(int i=0;i<n-1;i++){
        // traverse
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
