h,w = [ int(i) for i in input().split()]

mat = []
cols = [0]*w
rows = [0]*h
for i in range(h):
  row = [int(j) for j in input().split()]
  for j in range(w):
    rows[i] += row[j]
    cols[j] += row[j]
  mat.append(row)

for i in range(h):
  for j in range(w):
    mat[i][j] = rows[i]+cols[j]-mat[i][j]
  print(*mat[i])
