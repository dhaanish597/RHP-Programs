//Point Location Test

#include <iostream>
using namespace std;
struct P{
	int x,y;
	void read(){
		cin>>x>>y;
	}
	P operator -(P b){
		return P(x - b.x,y - b.y);	
	}
	void operator -=(P b){
		x-=b.x;
		y-=b.y;
	}
};
int main(){
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		P p1,p2,p3;
		p1.read();
		p2.read();
		p3.read();
		p2-=p1;
		p3-=p1;
		long long cross = 1LL*p2.x*p3.y - 1LL*p2.y*p3.x;
		if(cross < 0){
			cout<<"RIGHT\n";
		}
		else if(cross > 0){
			cout<<"LEFT\n";
		}
		else{
			cout<<"TOUCH\n";
		}
	}
}