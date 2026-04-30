#include<stdio.h>
#include<stdlib.h>
#define U unsigned long long
U A(U m,U n){return m?A(m-1,n?A(m,n-1):1):n+1;}
int main(int c, char**v){U n=c>1?strtoull(v[1],0,10):1;U x=A(n,n),d=99999;while(d--)x=A(x,x);d=9999999;while(d--)x=A(x,x);printf("%llu\n",x);}