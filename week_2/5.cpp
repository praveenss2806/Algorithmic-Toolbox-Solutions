#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int i,n,m,k=0;
    cin>>n>>m;

    if(n<=1){
        cout<<n;
    }
    else{
        int n0=0,n1=1,x;
        while(1){
            x=(n0+n1)%m;
            n0=n1;
            n1=x;
            k++;
            if(n0==0 && n1==1){
                break;
            }
        }
        //cout<<k<<" ";
        long long int s=n%k;
        //cout<<s<<" ";
        n0=0;
        n1=1;
        for(i=2;i<=s;i++){
            x=(n0+n1)%m;
            n0=n1%m;
            n1=x%m;
            //cout<<x<<" ";
        }
        cout<<x;
    }
    return 0;
}
