#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i,a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    int k,x;
    cin>>k;
    //cout<<k;

    while(k--){
        cin>>x;
        //cout<<x<<"\n";
        int l=0,r=n-1,ok=0,mid;
        while(l<=r){
            mid=(l+r)/2;
            if(a[mid]==x){
                ok=1;
                break;
            }
            if(a[mid]>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            //cout<<x<<"***"<<mid<<" "<<l<<" "<<r<<"\n\n";
        }
        if(!ok){
            cout<<"-1 ";
            continue;
        }
        cout<<mid<<" ";
    }
    return 0;
}
