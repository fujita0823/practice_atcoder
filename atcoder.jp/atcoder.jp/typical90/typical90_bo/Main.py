n, k = [int(i) for i in input().split()]

def decode(num, base):
  sen, ret = str(num), 0
  for i in range(len(sen)):
    c = int(sen[i])
    ret += c*(base**(len(sen)-i-1))
  return ret

def encode(num, base):
  ret = 0
  tens = 1
  while num>0:
    b = num % base
    num //= base
    ret += b*tens
    tens *= 10
  return ret

def ch8to5(num):
  num = list(str(num))
  for i in range(len(num)):
    if num[i]=='8':
      num[i] = '5'
  return ''.join(num)

for _ in range(k):
	r1 = decode(n,8)
	r2 = encode(r1,9)
	n = ch8to5(r2)
print(n)