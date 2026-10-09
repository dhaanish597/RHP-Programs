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
    set<int>freq;
    int l = 0,r = 0;
    int s = 0;
    int c = 0;
    freq.insert(x);
    for(int i = 0;i<n;i++){
        s+=arr[i];
        if(freq.find(arr[i]) != freq.end()){
            c+=1;
        }
        freq.insert(x - s);
    }
    cout<<c<<endl;
}


/*
2 -1 3 5 -2

    2 - 7 = -5
    1 - 7 = -6
    4 - 7 = -3
    9 - 7 = 2

    7 - 2 = 5
    
  */  


    




1 - 1
1

2 - 2
1 1
2

3 - 4
1 1 1
2 1
1 2
3

4 - 8
1 1 1 1
2 1 1
1 2 1
1 1 2
2 2
3 1
1 3
4
    
