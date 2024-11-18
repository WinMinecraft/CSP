#include <iostream> 
using namespace std;
int main(){
	int MAX=0;
	int n;
	cin>>n;
	int R,k,L;
	cin>>L>>R;
	for(k=L;k<=R;k++){
		if(k%n>MAX){
			MAX=k%n;
		}
	}
	cout<<MAX;
	return 0;
} 
