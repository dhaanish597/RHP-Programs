#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    if ( n != 1 && n <= 3 ){
        cout<<"NO SOLUTION";
        return 0;
    }
    vector<int> arr;
    for(int i = 0;i<n;i+=2){
        arr.push_back(i + 1);
    }
    for(int i = 1;i<n;i+=2){
        arr.push_back(i + 1);
    }
    if (n == 4){
        arr = {2,4,1,3};
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}