n = int(input())

prime = True
m = int(n**0.5)
for j in range(2,m):
  if n%j==0:
    prime = False
    break
if prime:
  print("Yes")
else:
  print("No")
