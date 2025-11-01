#include<bits/stdc++.h>
using namespace std;

// Reverse array using recurrsion

// Using two variables
void reverse_array(int arr[],int l, int r){
    if(l>=r){
        return ;
    }
    swap(arr[l],arr[r]);
    reverse_array(arr, l+1,r-1);
}

void reverse_array_01(int arr[],int n, int i){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse_array_01(arr, n,i+1);
}




int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //reverse_array(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
    reverse_array_01(arr,n,0);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }


}