#include<stdio.h>
#include<stdlib.h>
#define U unsigned long long
#define R return
#define W while
#define F for
U A(U m,U n){R m?n?A(m-1,A(m,n-1)):A(m-1,1):n+1;}
U AA(U n){R A(n,n);}
U UU(U a,U k,U b){if(k==1)R a+b;if(k==2)R a*b;if(b==1)R a;R UU(a,k-1,UU(a,k,b-1));}
U C(U n){U r=1;W(n--)r=UU(n+1,n+2,r);R r;}
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
U Am(U n){R Al(n,n,n);}
U An(U n,U d,U e,U f){if(!f)R Am(n);R An(An(n,d,e,f-1),d,e,f-1);}
U Ao(U n,U d,U e,U f,U g){if(!g)R An(n,n,n,n);R Ao(Ao(n,d,e,f,g-1),d,e,f,g-1);}
U Ap(U n){R Ao(n,n,n,n,n);}
U Aq(U n,U d){if(!d)R Ap(n);U v=Aq(n,d-1);R Aq(v,d-1);}
U Ar(U n,U d,U e){if(!e)R Aq(n,n);R Ar(Ar(n,d,e-1),d,e-1);}
U As(U n,U d,U e,U f){if(!f)R Ar(n,n,n);R As(As(n,d,e,f-1),d,e,f-1);}
U At(U n,U d,U e,U f,U g){if(!g)R As(n,n,n,n);R At(At(n,d,e,f,g-1),d,e,f,g-1);}
U Au(U n,U d,U e,U f,U g,U h){if(!h)R At(n,n,n,n,n);R Au(Au(n,d,e,f,g,h-1),d,e,f,g,h-1);}
U Av(U n){R Au(n,n,n,n,n,n);}
U Aw(U n,U d){if(!d)R Av(n);U v=Aw(n,d-1);R Aw(v,d-1);}
U Ax(U n,U d,U e){if(!e)R Aw(n,n);R Ax(Ax(n,d,e-1),d,e-1);}
U Ay(U n){R Ax(n,n,n);}
U Az(U n,U d,U e,U f){if(!f)R Ay(n);R Az(Az(n,d,e,f-1),d,e,f-1);}
U Ba(U n,U d,U e,U f,U g){if(!g)R Az(n,n,n,n);R Ba(Ba(n,d,e,f,g-1),d,e,f,g-1);}
U Bb(U n){R Ba(n,n,n,n,n);}
U Bc(U n,U d){if(!d)R Bb(n);U v=Bc(n,d-1);R Bc(v,d-1);}
U Bd(U n,U d,U e){if(!e)R Bc(n,n);R Bd(Bd(n,d,e-1),d,e-1);}
U Be(U n){R Bd(n,n,n);}
U Bf(U n,U d,U e,U f){if(!f)R Be(n);R Bf(Bf(n,d,e,f-1),d,e,f-1);}
U Bg(U n,U d,U e,U f,U g){if(!g)R Bf(n,n,n,n);R Bg(Bg(n,d,e,f,g-1),d,e,f,g-1);}
U Bh(U n){R Bg(n,n,n,n,n);}
U Bi(U n,U d){if(!d)R Bh(n);U v=Bi(n,d-1);R Bi(v,d-1);}
U Bj(U n,U d,U e){if(!e)R Bi(n,n);R Bj(Bj(n,d,e-1),d,e-1);}
U Bk(U n){R Bj(n,n,n);}
U Bl(U n,U d,U e,U f){if(!f)R Bk(n);R Bl(Bl(n,d,e,f-1),d,e,f-1);}
U Bm(U n,U d,U e,U f,U g){if(!g)R Bl(n,n,n,n);R Bm(Bm(n,d,e,f,g-1),d,e,f,g-1);}
U Bn(U n){R Bm(n,n,n,n,n);}
U Bo(U n,U d){if(!d)R Bn(n);U v=Bo(n,d-1);R Bo(v,d-1);}
U Bp(U n,U d,U e){if(!e)R Bo(n,n);R Bp(Bp(n,d,e-1),d,e-1);}
U Bq(U n){R Bp(n,n,n);}
U Br(U n,U d,U e,U f){if(!f)R Bq(n);R Br(Br(n,d,e,f-1),d,e,f-1);}
U Bs(U n,U d,U e,U f,U g){if(!g)R Br(n,n,n,n);R Bs(Bs(n,d,e,f,g-1),d,e,f,g-1);}
U Bt(U n){R Bs(n,n,n,n,n);}
U Bu(U n,U d){if(!d)R Bt(n);U v=Bu(n,d-1);R Bu(v,d-1);}
U Bv(U n,U d,U e){if(!e)R Bu(n,n);R Bv(Bv(n,d,e-1),d,e-1);}
U Bw(U n){R Bv(n,n,n);}
U Bx(U n,U d,U e,U f){if(!f)R Bw(n);R Bx(Bx(n,d,e,f-1),d,e,f-1);}
U By(U n,U d,U e,U f,U g){if(!g)R Bx(n,n,n,n);R By(By(n,d,e,f,g-1),d,e,f,g-1);}
U Bz(U n){R By(n,n,n,n,n);}
U Ca(U n,U d){if(!d)R Bz(n);U v=Ca(n,d-1);R Ca(v,d-1);}
U Cb(U n,U d,U e){if(!e)R Ca(n,n);R Cb(Cb(n,d,e-1),d,e-1);}
U Cc(U n){R Cb(n,n,n);}
U Cd(U n,U d,U e,U f){if(!f)R Cc(n);R Cd(Cd(n,d,e,f-1),d,e,f-1);}
U Ce(U n,U d,U e,U f,U g){if(!g)R Cd(n,n,n,n);R Ce(Ce(n,d,e,f,g-1),d,e,f,g-1);}
U Cf(U n){R Ce(n,n,n,n,n);}
U Cg(U n,U d){if(!d)R Cf(n);U v=Cg(n,d-1);R Cg(v,d-1);}
U Ch(U n,U d,U e){if(!e)R Cg(n,n);R Ch(Ch(n,d,e-1),d,e-1);}
U Ci(U n){R Ch(n,n,n);}
U Cj(U n,U d,U e,U f){if(!f)R Ci(n);R Cj(Cj(n,d,e,f-1),d,e,f-1);}
U Ck(U n,U d,U e,U f,U g){if(!g)R Cj(n,n,n,n);R Ck(Ck(n,d,e,f,g-1),d,e,f,g-1);}
U Cl(U n){R Ck(n,n,n,n,n);}
U Cm(U n,U d){if(!d)R Cl(n);U v=Cm(n,d-1);R Cm(v,d-1);}
U Cn(U n,U d,U e){if(!e)R Cm(n,n);R Cn(Cn(n,d,e-1),d,e-1);}
U Co(U n){R Cn(n,n,n);}
U Cp(U n,U d,U e,U f){if(!f)R Co(n);R Cp(Cp(n,d,e,f-1),d,e,f-1);}
U Cq(U n,U d,U e,U f,U g){if(!g)R Cp(n,n,n,n);R Cq(Cq(n,d,e,f,g-1),d,e,f,g-1);}
U Cr(U n){R Cq(n,n,n,n,n);}
U Cs(U n,U d){if(!d)R Cr(n);U v=Cs(n,d-1);R Cs(v,d-1);}
U Ct(U n,U d,U e){if(!e)R Cs(n,n);R Ct(Ct(n,d,e-1),d,e-1);}
U Cu(U n){R Ct(n,n,n);}
U Cv(U n,U d,U e,U f){if(!f)R Cu(n);R Cv(Cv(n,d,e,f-1),d,e,f-1);}
U Cw(U n,U d,U e,U f,U g){if(!g)R Cv(n,n,n,n);R Cw(Cw(n,d,e,f,g-1),d,e,f,g-1);}
U Cx(U n){R Cw(n,n,n,n,n);}
U Cy(U n,U d){if(!d)R Cx(n);U v=Cy(n,d-1);R Cy(v,d-1);}
U Cz(U n,U d,U e){if(!e)R Cy(n,n);R Cz(Cz(n,d,e-1),d,e-1);}
U Da(U n){R Cz(n,n,n);}
U Db(U n,U d,U e,U f){if(!f)R Da(n);R Db(Db(n,d,e,f-1),d,e,f-1);}
U Dc(U n,U d,U e,U f,U g){if(!g)R Db(n,n,n,n);R Dc(Dc(n,d,e,f,g-1),d,e,f,g-1);}
U Dd(U n){R Dc(n,n,n,n,n);}
U De(U n,U d){if(!d)R Dd(n);U v=De(n,d-1);R De(v,d-1);}
U Df(U n,U d,U e){if(!e)R De(n,n);R Df(Df(n,d,e-1),d,e-1);}
U Dg(U n){R Df(n,n,n);}
U Dh(U n,U d,U e,U f){if(!f)R Dg(n);R Dh(Dh(n,d,e,f-1),d,e,f-1);}
U Di(U n,U d,U e,U f,U g){if(!g)R Dh(n,n,n,n);R Di(Di(n,d,e,f,g-1),d,e,f,g-1);}
U Dj(U n){R Di(n,n,n,n,n);}
U Dk(U n,U d){if(!d)R Dj(n);U v=Dk(n,d-1);R Dk(v,d-1);}
U Dl(U n,U d,U e){if(!e)R Dk(n,n);R Dl(Dl(n,d,e-1),d,e-1);}
U Dm(U n){R Dl(n,n,n);}
U Dn(U n,U d,U e,U f){if(!f)R Dm(n);R Dn(Dn(n,d,e,f-1),d,e,f-1);}
U L(U n,U d){U i;W(d--){U j=n;n=0;W(j--)n++;F(i=0;i<18446744073709551615ULL;i++){n=Z(n);n=M(n,n);n=K(n);n=Ud(n);n=Uy(n);n=Aj(n);n=Am(n);n=Ap(n);n=Av(n);n=Ay(n);n=Bb(n);n=Be(n);n=Bh(n);n=Bk(n);n=Bn(n);n=Bq(n);n=Bt(n);n=Bw(n);n=Bz(n);n=Cc(n);n=Cf(n);n=Ci(n);n=Cl(n);n=Co(n);n=Cr(n);n=Cu(n);n=Cx(n);n=Da(n);n=Dd(n);n=Dg(n);n=Dj(n);n=Dm(n);n=Dn(n,n,n,n);}}R n;}
U rijam(U n){
 U x=A(n,n);U c=0;
 W(c<9){x=V(x);c++;}
 W(c<99){x=S(x);c++; }
 W(c<999){x=K(x);c++;}
 W(c<9999){x=Ud(x);c++;}
 W(c<99999){x=Uy(x);c++;}
 W(c<99999){x=Aj(x);c++;}
 W(c<99999){x=Am(x);c++;}
 W(c<99999){x=Ap(x);c++;}
 W(c<99999){x=Av(x);c++;}
 W(c<99999){x=Ay(x);c++;}
 W(c<99999){x=Bb(x);c++;}
 W(c<99999){x=Be(x);c++;}
 W(c<99999){x=Bh(x);c++;}
 W(c<99999){x=Bk(x);c++;}
 W(c<99999){x=Bn(x);c++;}
 W(c<99999){x=Bq(x);c++;}
 W(c<99999){x=Bt(x);c++;}
 W(c<99999){x=Bw(x);c++;}
 W(c<99999){x=Bz(x);c++;}
 W(c<99999){x=Cc(x);c++;}
 W(c<99999){x=Cf(x);c++;}
 W(c<99999){x=Ci(x);c++;}
 W(c<99999){x=Cl(x);c++;}
 W(c<99999){x=Co(x);c++;}
 W(c<99999){x=Cr(x);c++;}
 W(c<99999){x=Cu(x);c++;}
 W(c<99999){x=Cx(x);c++;}
 W(c<99999){x=Da(x);c++;}
 W(c<99999){x=Dd(x);c++;}
 W(c<99999){x=Dg(x);c++;}
 W(c<99999){x=Dj(x);c++;}
 W(c<99999999){x=Dm(x);c++;}
 W(c<999999999){x=Dn(x,n,n,n);c++;}
 x=L(x,999999999999);x=L(x,999999999999);x=L(x,999999999999);x=L(x,999999999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999);x=L(x,999999);x=L(x,999999);x=L(x,999999);
 x=L(x,999999999999);
 R x;
}
int main(int c,char**v){U n=c>1?strtoull(v[1],0,10):1;printf("%llu\n",rijam(n));R 0;}