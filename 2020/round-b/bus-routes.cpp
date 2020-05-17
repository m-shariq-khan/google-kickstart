#include <bits/stdc++.h>

#define ll          long long

using namespace std;

int cases=1;
void solve(){
	cout<<"Case #"<<cases++<<": ";
	
    int N;
    ll D, arr[1000];
    cin >> N >> D;
    int index = 0;
    while (index<N) cin >> arr[index++];
    ll latestDay = D;
    while (index--){
        ll tmp = latestDay%arr[index];
		if (tmp == 0) continue;
		latestDay -= tmp;
    }

    cout<<latestDay<<endl;	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
    int T;
	cin>>T;
	
	while(T--)
		solve();
	return 0;
}