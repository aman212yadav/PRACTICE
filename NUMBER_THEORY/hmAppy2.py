// problem link https://www.codechef.com/FEB19B/problems/HMAPPY2

from math import *
t=int(input())
for i in range(t):
    n,a,b,k=list(map(int,input().split()))
    p=n//a+n//b-(2*(n//(a*b//gcd(a,b))))
    if p>=k:
        print('Win')
    else:
        print('Lose')    

