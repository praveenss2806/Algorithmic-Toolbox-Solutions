#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;

    long long int i,a[n],m1=-1,ind,m2=-1;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        if(a[i]>m1){
            m1=a[i];
            ind=i;
        }
    }
    a[ind]=-10;
    for(i=0;i<n;i++){
        if(a[i]>m2){
            m2=a[i];
        }
    }

    cout<<m1*m2;
    return 0;
}
