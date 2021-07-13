#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i,sum=0;
    vector<int> ans;

    for(i=1;i<=n;i++){
        sum+=i;
        if(sum>n){
            sum-=i;
            ans[i-2]+=n-sum;
            break;
        }
        ans.push_back(i);
    }

    cout<<ans.size()<<"\n";
    for(i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
