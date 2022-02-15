n = int(input())
dlist = set([])

for i in range(n):
  s = input()
  if not s in dlist:
    print(i+1)
    dlist.add(s)
 