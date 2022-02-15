n = int(input())
temp_sum = 0
Sum = 0
N = 998244353
tens = 10**0

_n = n%N
Sum = (_n*(_n+1)//2 )%N
keta = 0
_n = n
while _n > 0:
  keta += 1
  _n //= 10

for i in range(keta):
  sub = 10**i - 1
  if i == keta-1:
    mul = n - sub
  else:
    mul = 10**(i+1) - 10**i
  sub = (sub*mul)%N
  Sum -= sub
  Sum %= N
print(Sum)
