n = int(input())
sen = input()
char = None
seq, acc = 0, 0

for c in sen:
  #print(c, acc, char, seq)
  if c=='o':
    if char==1:
      acc += (seq-1)*seq//2
      seq = 1
      char = 0
    else:
      seq += 1
      char = 0
  else:
    if char==0:
      acc += (seq-1)*seq//2
      seq = 1
      char = 1
    else:
      seq += 1
      char = 1
acc += (seq-1)*seq//2

acc_n = n*(n-1)//2
print(acc_n - acc)