#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,m,n;
    cin>>m>>n;
    m=m%60;
    n=n%60;

    //calculating pisano period
    int n0=0,n1=1,x,cnt=2,fb[60];
    fb[0]=0;
    fb[1]=1;
    while(1){
        x=(n0+n1)%10;
        if(cnt<60){
            //cout<<x<<" ";
            fb[cnt]=x;
        }
        n0=n1%10;
        n1=x%10;
        if(n0==0 && n1==1){
            break;
        }
        cnt++;
    }

    int pref[61]={0};
    for(i=0;i<60;i++){
        pref[i+1]=pref[i]+fb[i];
    }

    cout<<pref[]
    return 0;
}
