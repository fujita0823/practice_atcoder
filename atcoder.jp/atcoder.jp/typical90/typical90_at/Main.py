n = int(input())
a = [int(i)%46 for i in input().split()]
b = [int(i)%46 for i in input().split()]
c = [int(i)%46 for i in input().split()]

a46, b46, c46 = [0]*46, [0]*46, [0]*46
for i in range(n):
  a46[a[i]] += 1
  b46[b[i]] += 1
  c46[c[i]] += 1

  
cnt = 0
for i in range(46):
  for j in range(46):
    _k = (i+j)%46
    k = (46-_k)%46
    if a46[i] and b46[j] and c46[k]:
      cnt += a46[i]*b46[j]*c46[k]
print(cnt)