#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,5,1,4,3};
    int n = 5;
    // optimized solution
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            flag  = false;
            }
            
        }
        if(flag==true){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}