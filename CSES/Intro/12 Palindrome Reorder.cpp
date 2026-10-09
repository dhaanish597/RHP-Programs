#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>arr(26);
    for(int i = 0;i<s.size();i++){
        arr[s[i] - 'A']++;
    }
    string ans = "";
    int count = 0;
    char odd;
    int oddc = 0;
    for(int i = 0;i<26;i++){
        if(arr[i]%2 == 0){
            for(int ch = 0;ch<arr[i]/2;ch++){
                ans+=char('A' + i);
            }
        }
        else{
            count+=1;
            oddc = arr[i];
            odd = char('A' + i);
        }
    }
    if(count > 1){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    for(int i = 0;i<oddc;i++){
        ans+=odd;
    }
    for(int i = 25;i>=0;i--){
        if(arr[i]%2 == 0){
            for(int ch = 0;ch<arr[i]/2;ch++){
                ans+=char('A' + i);
            }
        }
    }
    cout<<ans<<endl;
}