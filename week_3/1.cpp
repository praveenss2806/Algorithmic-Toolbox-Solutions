#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin>>m;

    int n10,n5,n1;

    n10=m/10;
    m=m%10;

    n5=m/5;
    m=m%5;

    n1=m;

    cout<<n10+n5+n1;
    return 0;
}
