#include <bits/stdc++.h>
using namespace std;
int n = 10, m = 8;
const int maxn = 10001;
int a[maxn][maxn] , vis[maxn][maxn];
vector<vector<pair<int , int >>> path;

int dx[4] = {-1 , 0 , 1 , 0};
int dy[4] = {0 , 1 , 0 , -1};


int isok(int r , int e){
  if(r >=0 && r < n  && e >=0 && e < m && !vis[r][e] && a[r][e] == 1) return 1;
  return 0;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  path.resize(n);
  for(int i =0; i < n; ++i){
    path[i].resize(m);
  }
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> a[i][j];
      path[i][j] = {- 1 , -1};
    }
  }
 
  memset(vis , 0 , sizeof(vis));

  pair<int , int> source = {0 , 2};
  pair<int , int> dest  = {9 , 6};

  queue<pair<int , int>> q;
  q.push({source.first ,source.second});
  vis[source.first][source.second] = 1;
  while(q.size()){
    pair<int , int> u = q.front();
    q.pop();

    for(int i = 0; i < 4; ++i){
      if(isok(u.first + dx[i] , u.second + dy[i])){
        q.push({u.first + dx[i] , u.second + dy[i]});
        vis[u.first + dx[i]][u.second + dy[i]] = 1;
        path[u.first + dx[i]][u.second + dy[i]] = {dx[i] , dy[i]};
      }
    }
  }
  vector<char> direction;
  vector<pair<int , int>> v;
  while(source.first != dest.first || source.second != dest.second){
    //cout << dest.first << " " << dest.second << "\n";
    v.push_back(path[dest.first][dest.second]);
    dest.first -= v.back().first;
    dest.second -= v.back().second;
  }
  reverse(v.begin() , v.end());
  for(auto& dir : v){
    if(dir.first == 0 && dir.second == 1) direction.push_back('R');
    if(dir.first == 0 && dir.second == -1) direction.push_back('L');
    if(dir.first == 1 && dir.second == 0) direction.push_back('D');
    if(dir.first == -1 && dir.second == 0) direction.push_back('U');
  }

  for(auto& ans: direction){
    cout << ans << " ";
  }




	return 0;
}

