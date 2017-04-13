#!/bin/python

import sys

n = int(raw_input().strip())
c = raw_input().strip().split()
c = [int(x) for x in c]
number = 0
x=0
while x<len(c):
    count = 1
    #print "X = ", c[x]
    y = x+1
    while y<len(c):
        #print "Y = ", c[y]
        if c[x] == c[y]:
            #print "\tValue Equal!"
            count += 1
            del c[y]
            y-=1
        y+=1
    #print "***Count = ", count, "***"
    number+=count/2
    x+=1
    #print "---------------------"

print number
