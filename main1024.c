#include<stdio.h>
#include<stdlib.h>
#define U unsigned long long
#define R return
#define W while
#define F for
U A(U m,U n){R m?n?A(m-1,A(m,n-1)):A(m-1,1):n+1;}
U UU(U a,U k,U b){if(k==1)R a+b;if(k==2)R a*b;if(b==1)R a;R UU(a,k-1,UU(a,k,b-1));}
U B(U n){if(n<2)R n+1;U v=B(n-1);R UU(v,v,v);}
U Fn(U n,U d){if(!d)R n;U v=Fn(n,d-1);R UU(v,d,v);}
U Hn(U n,U d,U e){if(!e)R Fn(n,d);R Hn(Fn(n,d),Hn(n,d,e-1),e-1);}
U Wn(U n,U d){R d?Hn(Wn(n,d-1),Wn(n,d-1),Wn(n,d-1)):B(n);}
U T(U n){R Wn(n,n);}
U X(U n,U d){R d?X(T(X(n,d-1)),d-1):n;}
U L(U n,U d){U i;W(d--){U j=n;n=0;W(j--)n++;F(i=0;i<99999999;i++){n=X(n,n);}}R n;}
U rijam(U n){
 U x=A(n,n);U c=0;
 W(c < 999) { x = T(x); c++; }
 W(c<9999){x = X(x,x); c++;}
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,99999999999);
 R x;
}
int main(int c,char**v){U n=c>1?strtoull(v[1],0,10):1;printf("%llu\n",rijam(n));R 0;}