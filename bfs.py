#!/usr/bin/env python3

n = 10
m = 8
source = [0 , 2]
dest = [9 ,6]
mat = [list(map(int,input().split())) for i in range(n)]
path= [[0] * m  for _ in range(n)] 
vis = [[0] * m  for _ in range(n)] 

dx = [4]
dy = [4]
dx = [-1 , 0 , 1 , 0];
dy= [0 , 1 , 0 , -1];

def _print():
  for i in range(n):
    for j in range(m):
      print(mat[i][j] , end = " ")
    print(" ")


def isok(r , e):
  if(r >=0 and r < n  and e >=0 and e < m and vis[r][e] == 0  and mat[r][e] == 1): return 1;
  return 0;

def bfs():
  for i in range(n):
    for j in range(m):
      path[i][j] = ((-1 , -1))
      vis[i][j] = 0

  Q = []
  Q.append((source[0] , source[1]))
  vis[source[0]][source[1]] = 1
  while(Q):
    u = Q.pop(0)
    for i in range(4):
      if(isok(u[0] + dx[i] , u[1] + dy[i])):
        Q.append((u[0] +dx[i] , u[1] + dy[i]))
        vis[u[0] + dx[i]][u[1] + dy[i]]  = 1
        path[u[0] + dx[i]][u[1] + dy[i]] = (( dx[i] , dy[i]))

  # print(path[dest[0]][dest[1]])
  v = []
  path_pix = []
  while(source[0] != dest[0] or  source[1] != dest[1]):
    v.append(path[dest[0]][dest[1]])
    path_pix.append((dest[0] , dest[1]))
    dest[0] -=  v[-1][0]
    dest[1] -= v[-1][1]
  
  direction = []
  v.reverse()
  for dr in v :
    if(dr[0] == 0 and dr[1] == 1):
      direction.append('R');
    if(dr[0] == 0 and dr[1] == -1):
      direction.append('L');
    if(dr[0] == -1 and dr[1] == 0):
      direction.append('U');
    if(dr[0] == 1 and dr[1] == 0): 
      direction.append('D');
  
  for x in direction:
    #print(x , end = " ")
    pass
  
  path_pix.append((0 , 2))
  return path_pix

      


