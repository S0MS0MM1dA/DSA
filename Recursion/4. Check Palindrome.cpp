#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(string s, int i, int size){
    if(i>=size/2){
        return true;
    }
    if(s[i]!=s[size-1-i]){
        return false;
    }
    return check_palindrome(s,i+1,size);
}


int main(){
    string s; cin>>s;
    int i=0, size=s.length();
    
    if(check_palindrome(s,i,size)){
        cout<<"Palindrome"<<'\n';
    }
    else{
        cout<<"Not Palindrome"<<'\n';
    }
}