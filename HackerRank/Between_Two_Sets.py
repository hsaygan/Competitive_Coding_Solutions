#!/bin/python

import sys

n,m = raw_input().strip().split(' ')
n,m = [int(n), int(m)]
a = raw_input().strip().split(' ')
a = [int(x) for x in a]
b = raw_input().strip().split(' ')
b = [int(x) for x in b]
num=0
for x in range(max(a), min(b)+1):
    temp = 0
    for y in a:
        if x%y != 0:
            temp=1
            break

    if temp==1:
        continue

    for y in b:
        if y%x != 0:
            temp=1
            break
    if temp==0:
        num+=1
        #print x

print num
