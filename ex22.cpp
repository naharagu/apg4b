#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main()
{
  int n;
  cin >> n;

  vector<pair<int, int>> p(n);
  rep(i, n)
  {
    int a, b;
    cin >> a >> b;
    p.at(i) = make_pair(b, a);
  }
  sort(p.begin(), p.end());

  rep(i, n)
  {
    int b, a;
    tie(b, a) = p.at(i);
    cout << a << " " << b << endl;
  }
}