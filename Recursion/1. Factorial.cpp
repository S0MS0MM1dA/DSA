#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    return factorial(n-1) * n;

    /*  Explain
     factorial(n)   = 1 * 2 * 3 * . . . . * (n-1) * n
     factorial(n-1) = ---------------------------
     
     factorial(n) = factorial(n-1) * n
        
    */
}
int main(){
    int n; cin>>n;
    cout<<factorial(n)<<'\n';
}


// 1. Number of fuction call -> n
// 2. What is the complexity of each function -> O(1)

// total Complexity -> n*O(1) = O(n)