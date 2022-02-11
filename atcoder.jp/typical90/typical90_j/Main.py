n = int(input())
sum2 = [[0,0] for _ in range(n)]
for i in range(n):
  c, p = [int(j) for j in input().split()]
  a, b = c-1, ~(c-1)
  sum2[i][a] = p + sum2[max(i-1,0)][a]
  sum2[i][b] =     sum2[max(i-1,0)][b]
  
q = int(input())
for i in range(q):
  l, r = [int(j) for j in input().split()]
  a, b = l-2, r-1
  if a<0:
    print(sum2[b][0], sum2[b][1])
  else:
    print(sum2[b][0]-sum2[a][0], sum2[b][1]-sum2[a][1])