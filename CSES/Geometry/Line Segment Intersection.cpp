#include <iostream>
using namespace std;
struct P{
	int x,y;
	void read(){
		cin>>x>>y;
	}
	void operator -=(P b){
		x-=b.x;
		y-=b.y;
	}
	long long operator *(P b){
		return (long long)x*b.y - (long long)y*b.x;
	}
	long long tri(P b,P c){
		b.x = b.x - x;
		b.y = b.y - y;
		return b*c;
	}
	P operator -(P b){
		P res;
		res.x = x - b.x;
		res.y = y - b.y;
		return res;
	}
};
int main(){
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		P p1,p2,p3,p4;
		p1.read();
		p2.read();
		p3.read();
		p4.read();
		int f = 1;
		for(int i = 0;i < 2;i++){
			long long a1 = (p2 - p1) * (p3 - p1);
			long long a2 = (p2 - p1) * (p4 - p1);
			if((a1 > 0 && a2 > 0) || (a1 < 0 && a2 < 0)){
				puts("NO");
				f = 0;
				break;
			}
			swap(p1,p3);
			swap(p2,p4);
			
		}
		if (f)
		puts("YES");
	}
}