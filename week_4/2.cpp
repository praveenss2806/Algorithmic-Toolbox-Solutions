#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;

        int i,x,ok=0;
        map<int,int> mp;

        for(i=0;i<n;i++){
                cin>>x;
                mp[x]++;
        }

        for(auto p:mp){
                if(p.second>n/2){
                        ok=1;
                }
        }

        if(ok){
                cout<<"1";
        }
        else{
                cout<<"0";
        }
        return 0;
}
