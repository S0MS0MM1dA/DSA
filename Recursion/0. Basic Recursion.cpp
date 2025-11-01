#include<bits/stdc++.h>
using namespace std;

void func(int n){
    if(n==0) return;

    cout<<"Before Call: ";
    cout<<n<<'\n';

    func(n-1);
    
    cout<<"After: ";
    cout<<n<<'\n';
}
int main(){
    func(5);
}