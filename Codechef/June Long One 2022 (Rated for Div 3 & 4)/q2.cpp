//-----Author - Tapas Mondal-------
#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define f first
#define s second
#define pii pair<int, int>
#define sz(x) ((int)(x).size())
#define all(c) ((c).begin()), ((c).end())
#define fl(X,Y) for(int I =X;I<(int)(Y);I++)
#define ttc int t;cin>>t;while(t--)
typedef vector<int>vi;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
// Code begins from here->
void solve(){
    int n,x;
    cin>>n>>x;

    if(n%6==0)cout<<(n/6)*x<<endl;
    else cout<<((n/6)+1)*x<<endl;
}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ttc{

    solve();
}
 
return 0;
}