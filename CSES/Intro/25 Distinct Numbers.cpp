// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int l = 0,r = 0;
    int s = 0;
    int c = 0;
    while (l < n && r < n){
        s+=arr[r];
        if(s == x){
            c+=1;
            s-=arr[l];
            l+=1;
        }
        while(s > x){
            s-=arr[l];
            l+=1;
            if(s == x){
                c+=1;
            }
        }
        r+=1;
    }
    cout<<c<<endl;
}