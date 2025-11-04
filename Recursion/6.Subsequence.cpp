#include<bits/stdc++.h>
using namespace std;

// first take, then next -> take next...
// the not take next -> not take next...

void print_subsequences(int ind, int arr[], int n, vector<int> v){

    if(ind >= n){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    //take the particular index into the subsequence
    v.push_back(arr[ind]);
    print_subsequences(ind+1, arr, n, v);

    //not take
    v.pop_back();
    print_subsequences(ind+1,arr,n,v);
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> v;
    print_subsequences(0, arr, n, v);
}