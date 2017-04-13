import sys

t = int(raw_input().strip())
while (t):
    n,m,s = raw_input().strip().split(' ')
    n,m,s = [int(n), int(m)-1, int(s)-1]
    m=m%n
    print (s+m)%n + 1
    t-=1
