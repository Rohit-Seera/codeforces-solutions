#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    long long k;
    cin>>n >>k;
    vector<long long> arr(n);
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int maxgrp = 1;
    int current = 1;
    for(int i =1 ; i<n ; i++){
       if(arr[i] - arr[i-1] <= k){
           current++;
       }
       else{
           current = 1;
       }
       maxgrp = max(current , maxgrp);
    }
    
    cout << n - maxgrp <<endl;
}

int main() {
int t;
cin >> t;
while(t--){
    solve();
}
}
