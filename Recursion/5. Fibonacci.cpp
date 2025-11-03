#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

void fibo_series(int n){
    for(int i=0; i<=n; i++){
        cout<<fibonacci(i)<<' ';
    }
    cout<<'\n';
}

int main(){
    int n; cin>>n;
    //fibonacci(n);
    fibo_series(n);
    cout<<fibonacci(n)<<'\n';

}