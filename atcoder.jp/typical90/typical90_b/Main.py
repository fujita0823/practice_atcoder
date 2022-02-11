n = int(input())

def dfs(num, stack):
  if num==0:
    cnt = 0
    copy = stack.copy()
    sen = "".join(copy)
    while copy:
      t = copy.pop()
      if t==')':
        cnt+=1
      else:
        cnt-=1
      if cnt<0:
        break
    if cnt==0:
      print(sen)
    return
  else:
    stack.append('(')
    dfs(num-1, stack)
    stack.pop()
    stack.append(')')
    dfs(num-1, stack)
    stack.pop()
    return

if n%2==0:
  dfs(n, [])