#include<bits/stdc++.h>
using namespace std;

int ans=0;

int mrg(int *a,int low,int high,int mid){
    int i,j,k,cnt=0,t[high-low+1]={0};
    i=low;
    k=0;
    j=mid+1;
    //cout<<low<<" "<<high<<" "<<mid<<"\n";
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            t[k]=a[i];
            k++;
            i++;
        }
        else{
            cnt+=mid-i+1;
            t[k]=a[j];
            k++;
            j++;
        }
    }

    while(i<=mid){
        //ans++;
        t[k]=a[i];
        i++;
        k++;
    }

    while(j<=high){
        //ans++;
        t[k]=a[j];
        j++;
        k++;
    }

    for(i=low;i<=high;i++){
        a[i]=t[i-low];
    }

    return cnt;
}

void mrg_sort(int *a,int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;

        mrg_sort(a,low,mid);
        mrg_sort(a,mid+1,high);

        ans+=mrg(a,low,high,mid);
    }
}

int main(){
    int n;
    cin>>n;

    int i,a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    mrg_sort(a,0,n-1);
    /*for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/

    cout<<ans;
    return 0;
}
