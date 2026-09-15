#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int row = 0;row < n;row++){
        for(int col = 0;col < n;col++){
            set<int>s;
            for(int r = 0;r < row;r++){
                s.insert(arr[r][col]);
            }
            for(int c = 0;c < col;c++){
                s.insert(arr[row][c]);
            }
            int x = 0;
            while (s.count(x)){
                x++;
            }
            arr[row][col] = x;
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}