l,r = [int(i) for i in input().split()]
M = 10**9+7

kl = len(str(l))
kr = len(str(r))
if kl==kr:
  nums = kl*(l+r)*(r-l+1)//2
  nums %= M
else:
  nums_l = kl*(10**kl-l)      *(10**kl+l-1  ) //2
  nums_r = kr*(r-10**(kr-1)+1)*(r+10**(kr-1)) //2
  nums = (nums_l + nums_r)%M

for i in range(kl+1, kr):
  temp = (10**i - 10**(i-1)) * (10**i + 10**(i-1) - 1)//2
  nums += (i*temp)%M
print(nums%M)