#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1000010];
long long sum[1000010];
int main() {
	freopen("monster.in","r",stdin);
	freopen("monster.out","w",stdout);
    cin>>n>>k;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    int cnt=0;
    for(int i=1;i<=n;i++) {
        for(int j=i;j<=n;j++) {
            long long t=sum[j]-sum[i-1];
            if(t%k==0) {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
