n = int(input())
a = [int(i) for i in input().split()]
used = [1]*361
arg = 0

used[0] = 0
used[360] = 0
for i in range(n):
  arg += a[i]
  used[arg%360] = 0
  
ar, maxarg = 1,0
for i in range(361):
  if used[i]:
    ar += 1
  else:
    if ar > maxarg:
      maxarg = ar
    ar = 1

print(maxarg)