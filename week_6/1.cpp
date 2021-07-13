#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,n;
    cin>>w>>n;

    int i,j,a[n],dp[n+1][w+1];

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<=n;i++){
        for(j=0;j<=w;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(a[i-1]<=j){
                dp[i][j]=max(dp[i-1][j],a[i-1]+dp[i-1][j-a[i-1]]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    /*for(i=0;i<=n;i++){
        for(j=0;j<=w;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }*/

    cout<<dp[n][w];
    return 0;
}
