#include<bits/stdc++.h>
using namespace std;

int maxdigit(string a,string b){
    string x,y;

    x="";
    x+=a;
    x+=b;

    y="";
    y+=b;
    y+=a;

    if(x>y){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cin>>n;

    int i,x,ok,idx;
    string a[n],mx;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    while(1){
        ok=1;
        mx="0";
        for(i=0;i<n;i++){
            if(a[i]!="-1"){
                x=maxdigit(mx,a[i]);
                if(x==1){
                    mx=a[i];
                    idx=i;
                }
            }
        }
        cout<<mx;
        a[idx]="-1";
        for(i=0;i<n;i++){
            if(a[i]!="-1"){
                ok=0;
                break;
            }
        }
        if(ok){
            break;
        }
    }
    return 0;
}
