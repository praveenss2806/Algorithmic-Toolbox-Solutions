#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;

    long long int i,a[n],b[n],ans=0;

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);

    for(i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b,b+n);
    reverse(a,a+n);

    for(i=0;i<n;i++){
        ans+=a[i]*b[i];
    }

    cout<<ans;
    return 0;
}
