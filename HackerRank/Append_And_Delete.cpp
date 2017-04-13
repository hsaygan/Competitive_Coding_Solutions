#!/bin/python

import sys

s = raw_input().strip()
t = raw_input().strip()
k = int(raw_input().strip())
original = s
count=0

for a in range(0,len(t)):
    #print "t[a] =",  t[a]
    if len(s) < len(t):
        s += t[a]
        count+=1
        continue
    if s[a]!=t[a]:
        b=a
        while (b!=len(s)):
            #print "s[b] =", s[b]
            count+=1
            s = s[:b] + s[b+1:]
        s+=t[a]
        count+=1
    #print "count = ",count

count += len(s) - len(t)
#print "Final Count : ",count
if count<=k:
    if (k-count)%2==0:
        print "Yes"
    elif (k-len(original)-len(t))>=0:
        print "Yes"
    else:
        print "No"
else:
    print "No"
