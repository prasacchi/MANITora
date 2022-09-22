#include <bits/stdc++.h>
using namespace std;

vector<int> score(int n, int k,vector<string>v){
    vector<int>ans(n,0);

    map<string,int>mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            mp[s.substr(0,i)]++;
        }
    }

    for(int i=0;i<n;i++){
        int sc=0;
        for(int j=0;j<k;j++){
            sc+=mp[s.substr(0,i)];
        }
        ans[i]=sc;
    }
    return ans;
}

int main{
    int n,k;
    cin>>n>>k;
    cout<<endl;

    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<int> temp = score(n,k,v);

    for(auto i:temp){
        cout<<i<<" ";
    }
    return 0;
}