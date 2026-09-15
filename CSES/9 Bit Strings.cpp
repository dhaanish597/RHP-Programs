#include <iostream>
using namespace std;
int main(){
    int n;
    int MOD = (int)(1e9 + 7);
    cin>>n;
    long long ans = 1;
    for(int i = 0;i < n;i++){
        ans = (ans*2)%MOD;
    }
    cout<<ans;
}