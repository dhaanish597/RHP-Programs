#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
int n;
long long ans = 1e9;
void solve(int i,long long a,long long b){
    if(i == n){
        ans = min(ans,abs(a - b));
        return;
    }
    solve(i + 1,a + arr[i],b);
    solve(i + 1,a,b + arr[i]);
    return; 
}
int main(){
    cin>>n;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    solve(0,0,0);
    cout<<ans<<endl;
}