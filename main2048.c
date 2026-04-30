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
U Y(U n,U d,U e,U f){R f?Y(X(n,d),d,e,f-1):Y(X(n,d),d,e-1,n);}
U Z(U n){R Y(n,n,n,n);}
U P(U n){R n<2?1:Z(P(n-1));}
U Q(U n,U d){R d?Q(Q(n,d-1),d-1):P(n);}
U V(U n){R Q(n,n);}
U M(U n,U d){if(!d)R Z(n);R M(M(n,d-1),d-1);}
U S(U n){R n<2?1:M(S(n-1),S(n-1));}
U D(U n,U d){if(!d)R V(n);R D(D(n,d-1),d-1);}
U E(U n,U d,U e){if(!e)R D(n,n);R E(E(n,d,e-1),d,e-1);}
U K(U n){R E(n,n,n);}
U G(U n,U d){if(!d)R K(n);U v=G(n,d-1);R G(v,d-1);}
U O(U n,U d,U e){if(!e)R G(n,n);R O(O(n,d,e-1),d,e-1);}
U Ud(U n){R O(n,n,n);}
U Uv(U n,U d){if(!d)R Ud(n);U v=Uv(n,d-1);R Uv(v,d-1);}
U Ur(U n,U d,U e){if(!e)R Uv(n,n);R Ur(Ur(n,d,e-1),d,e-1);}
U Uy(U n){R Ur(n,n,n);}
U Ag(U n,U d,U e,U f){if(!f)R Uy(n);R Ag(Ag(n,d,e,f-1),d,e,f-1);}
U Aj(U n){R Ag(n,n,n,n);}
U Ak(U n,U d){if(!d)R Aj(n);U v=Ak(n,d-1);R Ak(v,d-1);}
U Al(U n,U d,U e){if(!e)R Ak(n,n);R Al(Al(n,d,e-1),d,e-1);}
U L(U n,U d){U i;W(d--){U j=n;n=0;W(j--)n++;F(i=0;i<999999999999;i++){n=Z(n);n=M(n,n);n=K(n);n=Ud(n);n=Uy(n);n=Aj(n);}}R n;}
U rijam(U n){
 U x=A(n,n);U c=0;
 W(c<99999){x=V(x);c++;}
 W(c<999999){x=S(x);c++; }
 W(c<9999999){x=K(x);c++;}
 W(c<99999999){x=Ud(x);c++;}
 W(c<999999999){x=Uy(x);c++;}
 W(c<9999999999){x=Aj(x);c++;}
 x=L(x,9999999);x=L(x,9999999);x=L(x,9999999);x=L(x,9999999);
 x=L(x,9999999);x=L(x,9999999);x=L(x,9999999);x=L(x,9999999);
 x=L(x,9999999);x=L(x,9999999);x=L(x,9999999);x=L(x,9999999);
 x=L(x,9999999);x=L(x,9999999);x=L(x,999999999);
 R x;
}
int main(int c,char**v){U n=c>1?strtoull(v[1],0,10):1;printf("%llu\n",rijam(n));R 0;}