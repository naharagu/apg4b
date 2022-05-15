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

void print_vec(vector<int> vec)
{
  cout << "[ ";
  rep(i, vec.size())
  {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}

string read_name()
{
  string name, equal;

  cin >> name >> equal;
  return name;
}

int read_int(map<string, int> &var_int)
{
  string val;

  cin >> val;
  return isdigit(val.at(0)) ? stoi(val) : var_int.at(val);
}

int calc_int(map<string, int> &var_int)
{
  string  op = "";
  int     result = 0;

  while (op != ";")
  {
    int val = read_int(var_int);

    if (op == "")
      result = val;
    if (op == "+")
      result += val;
    if (op == "-")
      result -= val;
    cin >> op;
  }
  return result;
}

vector<int> read_vec_val(map<string, int> &var_int)
{
  vector<int> result;
  string op = "";

  while (op != "]")
  {
    int val = read_int(var_int);
    result.push_back(val);
    cin >> op;
  }
  return result;
}


vector<int> read_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec)
{
  string val;

  cin >> val;
  return val == "[" ? read_vec_val(var_int) : var_vec.at(val);
}

vector<int> calc_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec)
{
  string  op;
  vector<int> result;

  while (op != ";")
  {
    vector<int> vec = read_vec(var_int, var_vec);

    if (op == "")
      result = vec;
    if (op == "+")
    {
      rep(i, result.size())
        result.at(i) += vec.at(i);
    }
    if (op == "-")
    {
      rep(i, result.size())
        result.at(i) -= vec.at(i);
    }
    cin >> op;
  }
  return result;
}

int main() {

  // 命令の行数を取得
  int N;
  cin >> N;

  map<string, int> var_int; // intの変数を管理するmap
  map<string, vector<int>> var_vec; // vectorの変数を管理するmap

  // 行数分の処理
  for (int i = 0; i < N; i++) {

    // 命令を受け取る
    string s;
    cin >> s;

    // int命令の処理
    if (s == "int") {
      // 変数名を読み取る
      string name = read_name();
      // 右辺の式を計算して変数に代入
      var_int[name] = calc_int(var_int);
    }

    // vec命令の処理
    if (s == "vec") {
      // 変数名を読み取る
      string name = read_name();
      // 右辺の式を計算して変数に代入
      var_vec[name] = calc_vec(var_int, var_vec);
    }

    // print_int命令の処理
    if (s == "print_int") {
      // 式を計算して出力
      cout << calc_int(var_int) << endl;
    }

    // print_vec命令の処理
    if (s == "print_vec") {
      // 式を計算して出力
      print_vec(calc_vec(var_int, var_vec));
    }
  }
}
