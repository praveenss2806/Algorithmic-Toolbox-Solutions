#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m;
    cin>>n>>m;

    long long int i,t,n1=0,n2=1,len=1;
    vector<long long int> pp;

    pp.push_back(n1);
    while(1){
        t=n2%m;
        n2=(n1+n2)%m;
        n1=t%m;
        if(n1==0 && n2==1){
            //pp.push_back(n1);
            break;
        }
        pp.push_back(n1);
        len++;
    }

    /*cout<<pp.size()<<"\n";
    for(i=0;i<pp.size();i++){
        cout<<pp[i]<<" ";
    }*/

    n=n%len;
    cout<<pp[n];

    return 0;
}
