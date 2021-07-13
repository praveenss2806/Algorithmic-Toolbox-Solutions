#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k;
    cin>>n;

    int i,x,n0=0,n1=1,fb[60],pref[61]={0};
    fb[0]=0;
    fb[1]=1;
    for(i=2;i<=59;i++){
        x=(n0+n1)%10;
        n0=n1%10;
        n1=x%10;
        fb[i]=x;
        //cout<<x<<" ";
    }

    for(i=0;i<60;i++){
        pref[i+1]=(fb[i]+pref[i])%10;
        //cout<<pref[i+1]<<" "<<i+1<<"\n";
    }

    x=n%60;
    cout<<pref[x+1];
    return 0;
}
