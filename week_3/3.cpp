#include<bits/stdc++.h>
using namespace std;

int main(){
    int d,m,n;
    cin>>d>>m>>n;

    int i,t=m,a[n+2],ok=1,ans=0;

    a[0]=0;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    a[n+1]=d;

    for(i=0;i<=n;i++){
        if(a[i]+m<a[i+1]){
            ok=0;
            break;
        }
    }

    if(!ok){
        cout<<"-1";
        return 0;
    }

    for(i=1;i<=n+1;i++){
        if(m-a[i]<0){
            ans++;
            m=t+a[i-1];
        }
    }

    cout<<ans;
    return 0;
}
