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
    
    ll n;
    
    cin>>n;
    
    ll sum = 0;
    
    ll val;
    
    loop (i, n - 1) {
		cin>>val;
		
		sum += val;    		
	}
	
	ll sum2 = (n * (n + 1)) / 2;
	
	cout<<sum2 - sum;
}
