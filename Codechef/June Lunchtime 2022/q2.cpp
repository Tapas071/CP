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
typedef vector<string>vs;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
// Code begins from here->
void solve(){
    int p,q;
    cin>>p>>q;

    if( (p+q)%4==0 || (p+q)%4==1){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }
}
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ttc{
    solve();
}
 
return 0;
}