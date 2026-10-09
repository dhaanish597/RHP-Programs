#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(long long i = 1;i<=n;i++){
        long long size = i*i;
        long long all = (size*(size - 1))/2;
        long long ans = 0;
        ans += 8*(i - 4)*(i - 4);
        ans += 6*(i - 4)*4;
        ans += 4*(i - 3)*4;
        ans += 3*8;
        ans += 2*4;
        ans/=2;
        cout<<all - ans<<endl;
    }
}
/*

234444432
346666643
468888864   
468888864
468888864
468888864
346666643
234444432
*/