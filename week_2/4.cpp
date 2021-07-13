#include<bits/stdc++.h>
using namespace std;

long long int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    long long int a,b,lcm,g;
    cin>>a>>b;

    g=gcd(a,b);
    lcm=(a*b)/g;

    cout<<lcm;
    return 0;
}

