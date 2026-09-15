#include <iostream>
using namespace std;
void solve(int n,int from,int to){
    if(n == 0){
        return;
    }
    int other = 6 - from - to;
    solve(n - 1,from,other);
    cout<< from << " " << to << endl;
    solve(n - 1,other,to);
    return; 
}
int main(){
    int n;
    cin>>n;
    cout<< (2<< (n - 1)) - 1<<endl;
    solve(n,1,3);
}