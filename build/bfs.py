#!/usr/bin/env python3

dx = [4]
dy = [4]
dx = [-1 , 0 , 1 , 0];
dy= [0 , 1 , 0 , -1];


class BFS(object):
  def __init__(self , source , dest , n , m ):
    self.n = n;
    self.m = m;
    self.source = source;
    self.dest = dest;
    self.mat = mat = [list(map(int,input().split())) for i in range(n)]
    self.path = path= [[0] * m  for _ in range(n)] 
    self.vis = vis = [[0] * m  for _ in range(n)] 
    
  
  def _print(self):
    for i in range(self.n):
      for j in range(self.m):
        print(self.mat[i][j] , end = " ")
    print(" ")


  def isok(self  , r , e):
    if(r >=0 and r < self.n  and e >=0 and e < self.m and self.vis[r][e] == 0  and self.mat[r][e] == 1): return 1;
    return 0;

  def bfs(self):
    for i in range(self.n):
      for j in range(self.m):
        self.path[i][j] = ((-1 , -1))
        self.vis[i][j] = 0

    Q = []
    Q.append((self.source[0] , self.source[1]))
    self.vis[self.source[0]][self.source[1]] = 1
    while(Q):
      u = Q.pop(0)
      for i in range(4):
        if(self.isok(u[0] + dx[i] , u[1] + dy[i])):
          Q.append((u[0] +dx[i] , u[1] + dy[i]))
          self.vis[u[0] + dx[i]][u[1] + dy[i]]  = 1
          self.path[u[0] + dx[i]][u[1] + dy[i]] = (( dx[i] , dy[i]))

    v = []
    path_pix = []
    while(self.source[0] != self.dest[0] or  self.source[1] != self.dest[1]):
      v.append(self.path[self.dest[0]][self.dest[1]])
      path_pix.append((self.dest[0] , self.dest[1]))
      self.dest[0] -=  v[-1][0]
      self.dest[1] -= v[-1][1]
    
    path_pix.append((self.source[0] , self.source[1]))
    return path_pix


