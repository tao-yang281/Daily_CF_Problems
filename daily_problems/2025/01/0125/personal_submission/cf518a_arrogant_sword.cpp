#include<bits/stdc++.h>
#define int long long 
#define all(a) a.begin(), a.end()
#define endl '\n'
#define PII pair<int,int>
#define SZ(a) ((int)a.size())
#define rep(i, n) for (int i = 1; i <= n; i ++)
#define rep0(i, n) for (int i = 0; i < n; i ++)

using namespace std;
void print(vector<int>& vi) {
    for (auto t: vi) {
        cout << t << ' ';
    }
    cout << endl;
}

//////////////////////////////////////////////////
const int N = 2e5 + 10, mod = 1e9 + 7;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void solve(int _) 
{
    string s, t;
    cin >> s >> t;
    int i = s.size() - 1;

    s[i] ++;
    

    while (s[i] == '{') {
        s[i] = 'a';
        i --;
        s[i] ++;
    }

    if (s >= t) {
        cout << "No such string" << endl;
        return;
    }
    
    cout << s << endl;
} 



signed main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    //cin >> T;
    for (int _ = 1; _ <= T; _ ++ ) {
        solve(_);
    }
    return 0;
}
