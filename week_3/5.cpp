#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i,j,pnt;
    pair<int,int> p[n];
    vector<int> ans;

    for(i=0;i<n;i++){
        cin>>p[i].second;
        cin>>p[i].first;
    }
    sort(p,p+n);
    pnt=p[0].first;
    ans.push_back(pnt);

    for(i=1;i<n;i++){
        if(p[i].second>pnt){
            pnt=p[i].first;
            ans.push_back(pnt);
        }
    }

    cout<<ans.size()<<"\n";
    for(i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
