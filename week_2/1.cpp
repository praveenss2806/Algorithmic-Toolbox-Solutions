#include<bits/stdc++.h>
using namespace std;

int fb[100];

int fib(int n){
    if(n<=1){
        return n;
    }
    else if(fb[n]!=0){
        return fb[n];
    }
    else{
        return fb[n]=fib(n-1)+fib(n-2);
    }
}

int main(){
    int n;
    cin>>n;

    cout<<fib(n);
    return 0;
}
