#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i,f1=0,f2=1,x;

    if(n<=1){
        cout<<n;
    }
    else{
        for(i=2;i<=n;i++){
            x=(f1+f2)%10;
            f1=f2%10;
            f2=x%10;
        }
        cout<<x;
    }
    return 0;
}
