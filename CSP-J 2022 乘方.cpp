#include <iostream>
#include <cmath>
using namespace std;
const int maxn=1000000000;
int main(){
	int a,b;
	cin>>a>>b;
	if(pow(a,b)>maxn){
		cout<<"-1";
	}else{
		int tmp=pow(a,b);
		cout<<tmp;
	}
	return 0;
}
