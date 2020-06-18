#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define push_back pb ;
#define mp make_pair;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef vector<string> VS;
typedef vector<P> VP;
typedef vector<V> VV;
typedef map<ll,ll> MP;
typedef set<ll> SET;
typedef multiset<ll> MSET;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    
    cin>>s;
    
    int ans = 0;
    int curr = 1;
    
    for (int i = 1; i < s.length(); i++) {
    	if (s[i] == s[i - 1]) {
    		curr++;
		} else {
			ans = max(curr, ans);
			curr = 1;
		}
	}
	
	ans = max(curr, ans);
	
	cout<<ans;
}
