#!/bin/python

import sys

n,k,q = raw_input().strip().split()
n,k,q = [int(n), int(k), int(q)]
x = raw_input().strip().split()
x = [int(a) for a in x]
y = [a for a in x]


for a in range(0,n):
    var = (a+k)%n
    #print x[2], " NOW, ", x[a]
    y[var] = x[a]
    #print "Y's Index : ",var, " X's index : ", a , " Final value of Y[", var, "] = ", y[var], "X's value = ", x[a]

for a in range(0,q):
    var = int(raw_input().strip())
    print y[var]
