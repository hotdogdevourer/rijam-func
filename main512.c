#include<stdio.h>
#include<stdlib.h>
#define U unsigned long long
U A(U m,U n){return m?n?A(m-1,A(m,n-1)):A(m-1,1):n+1;}
U UU(U a,U k,U b){if(k==1)return a+b;if(k==2)return a*b;if(b==1)return a;return UU(a,k-1,UU(a,k,b-1));}
U L(U n,U d){U i;while(d--){U j=n;n=0;while(j--)n++;for(i=0;i<9999999;i++)n=UU(n,n,n);}return n;}
U rijam(U n){U x=A(n,n);U c=9999;while(c--)x=UU(x,x,x); x=L(x,9999999); x=L(x,9999999); return x;}
int main(int c,char**v){U n=c>1?strtoull(v[1],0,10):1;printf("%llu\n",rijam(n));return 0;}