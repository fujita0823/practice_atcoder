a,b,c = [int(i) for i in input().split()]

def gcd(a, b):
    if b==0:
        return a
    else:
        return gcd(b, a % b)

g = gcd(gcd(a,b),c)
ret = a//g + b//g + c//g - 3
print(ret)