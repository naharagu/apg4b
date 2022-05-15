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
  vector<int> a(n);
  rep(i, n)
    cin >> a.at(i);

  map<int, int> ans;
  for (int i: a)
  {
    if (ans.count(i))
      ans.at(i)++;
    else
      ans[i] = 1;
  }

  int max_count = 0;
  int result = -1;
  for (int i: a)
  {
    if (max_count < ans.at(i))
    {
      max_count = ans.at(i);
      result = i;
    }
  }

  cout << result << " " << max_count << endl;
}