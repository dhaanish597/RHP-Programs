#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(((n*(n+1))/2) %2 != 0){
        cout<<"NO\n";
        return 0;
    }
    vector<int>a,b;
    long long A = 0,B = 0;
    for(int i = n;i>=1;i--){
        if(A > B){
            b.push_back(i);
            B+=i;
        }
        else{
            a.push_back(i);
            A+=i;
        }
    }
    if(A == B){
        cout<<"YES\n";
        cout<<a.size()<<endl;
        for(int i = 0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl<<b.size()<<endl;
        for(int i = 0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
    }
    else{
        cout<<"NO\n";
    }
}