#include<bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)
#define sq(a) ((a)*(a))
#define rep(i,n) for(int i=0; i<n; i++)
#define ll long long

int const N = 1e5 + 10;

 int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t, a, b, c;
   cin>>t;
   while(t--){
        cin >> a >> b >> c;
        if((a+c) % (2*b) == 0) cout << "YES" << endl;
        else if((2*b - c) > 0 && (2*b - c) % a == 0) cout << "YES" << endl;
        else if((2*b - a) > 0 && (2*b - a) % c == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
   }
   return 0;
 }