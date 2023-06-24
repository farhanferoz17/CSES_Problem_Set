n = int(input())
 
l = list(map(int,input().split()))
l.sort()
s = set(l)
print(len(s))
