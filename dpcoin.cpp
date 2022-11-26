#include<bits/stdc++.h>
using namespace std;

main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int value;
        cin>>value;
        int coin[value+1];
        for(int i=0;i<=value;i++){
            coin[i]=0;
        }
        coin[0]=1;
        for(int j=0;j<n;j++){
            for(int i=1;i<=value;i++){
                if(i>=arr[j]){
                    coin[i] += coin[i-arr[j]];
                }
            }
        }
    cout<<coin[value]<<"\n";
    }
}
