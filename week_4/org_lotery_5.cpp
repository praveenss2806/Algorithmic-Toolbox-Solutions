#include<bits/stdc++.h>
using namespace std;

int main(){
        int s,p;
        cin>>s>>p;

        int i,j,ans,a[p];
        pair<int,int> ab[s];

        for(i=0;i<s;i++){
                cin>>ab[i].first;
                cin>>ab[i].second;
        }
        sort(ab,ab+s);

        for(i=0;i<p;i++){
                cin>>a[i];
        }

        for(i=0;i<p;i++){
                ans=0;
                for(j=0;j<s;j++){
                        if(ab[j].first>a[i]){
                                break;
                        }
                        if(ab[j].first<=a[i] && ab[j].second>=a[i]){
                                ans++;
                        }
                }
                cout<<ans<<" ";
        }
        return 0;
}
