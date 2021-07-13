#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,wgt;
    cin>>n>>wgt;

    int i,c=0;
    double v,w,ans=0;
    pair<double,double> val[n];

    for(i=0;i<n;i++){
        cin>>v>>w;
        val[i].first=v/w;
        val[i].second=w;
    }
    sort(val,val+n);
    reverse(val,val+n);

    for(i=0;i<n;i++){
        //cout<<ans<<" ";
        if(val[i].second+c>wgt){
            ans+=(wgt-c)*val[i].first;
            break;
        }
        else{
            ans+=val[i].second*val[i].first;
            c+=val[i].second;
        }
    }

    cout<<setprecision(10)<<ans;
    return 0;
}
