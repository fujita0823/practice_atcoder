n = int(input())

deck = []
for i in range(n):
  t, x = [int(i) for i in input().split()]
  if t==1:
    deck.insert(0,x)
  elif t==2:
    deck.append(x)
  else:
    print(deck[x-1])