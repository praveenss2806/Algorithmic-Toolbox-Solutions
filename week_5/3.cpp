#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;

    int n1;
    cin>>n1;
    int a[n1+1];
    for(i=1;i<=n1;i++){
        cin>>a[i];
    }

    int n2;
    cin>>n2;
    int b[n2+1];
    for(i=1;i<=n2;i++){
        cin>>b[i];
    }

    int dp[n1+1][n2+1];
    for(i=0;i<=n1;i++){
        for(j=0;j<=n2;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(a[i]==b[j]){
                dp[i][j]=dp[i-1][j-1]+1;
                //cout<<dp[i][j]<<"\n";
            }
            else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    /*for(i=0;i<=n1;i++){
        for(j=0;j<=n2;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    cout<<dp[n1][n2];
    return 0;
}
