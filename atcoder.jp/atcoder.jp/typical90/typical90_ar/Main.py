n,q = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
shift = 0
for i in range(q):
  #print(a)
  t, x, y = [int(j) for j in input().split()]
  if t==1:
    xindex, yindex = (x-1+shift)%n, (y-1+shift)%n
    a[xindex], a[yindex] = a[yindex], a[xindex]
    #print(xindex, yindex)
  elif t==2:
    shift -= 1
  elif t==3:
    index = (x-1+shift)%n
    print(a[index])