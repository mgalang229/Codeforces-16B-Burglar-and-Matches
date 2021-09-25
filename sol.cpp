#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int a[20], b[20], c[20], n, m;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
		
	cin >> n >> m;
	for(int i=0; i<m; ++i)
		cin >> a[i] >> b[i];
	for(int i=0; i<m; ++i)
		c[i]=i;
	sort(c, c+m, [](const int& i, const int& j) -> bool {
		return b[i]>b[j];
	});
	ll ans=0;
	for(int i=0; i<m&&n>0; ++i) {
		ans+=(min(n, a[c[i]])*b[c[i]]);
		n-=min(n, a[c[i]]);
	}
	cout << ans << "\n";
}
