#include <bits/stdc++.h>)

using namespace std;

int cases=1;
void solve(){
	cout<<"Case #"<<cases++<<": ";
	
    int N, arr[100];
    cin >> N;
    int index = 0;
    while (index<N) cin >> arr[index++];
    
    int count = 0;
    for(int i=1;i<N-1;i=i+1){
        if (arr[i-1]<arr[i] && arr[i]>arr[i+1]) {
            count++;
        }
    }

    cout<< count<<endl;	
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