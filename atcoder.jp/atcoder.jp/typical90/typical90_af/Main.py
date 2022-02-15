n = int(input())
a = [[] for i in range(n)]
b = [[0]*n for i in range(n)]

for i in range(n):
  a[i] = [int(i) for i in input().split()]
q = int(input())
for i in range(q):
  x,y = [int(i) for i in input().split()]
  b[x-1][y-1] = 1
  b[y-1][x-1] = 1
  
max_n = n
used = [0]*max_n
def dfs(former, n, dist, used):
  if n==max_n:
    #print(dist)
    return dist
  else:
    mint = 1000001
    for i in range(max_n):
      if former==-1 or not (used[i] or i==former or b[former][i]):
        used[i] = 1
        #print(n, i, dist)
        total_dist = dfs(i, n+1, dist+a[i][n], used)
        used[i] = 0
        if mint > total_dist:
          mint = total_dist
    return mint

ret = dfs(-1, 0, 0, used)
if ret>1000000:
  print(-1)
else:
  print(ret)