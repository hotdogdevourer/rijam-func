#include<stdio.h>
#include<stdlib.h>
#define U unsigned long long
#define R return
#define W while
#define F for
U A(U m,U n){R m?n?A(m-1,A(m,n-1)):A(m-1,1):n+1;}
U AA(U n){R A(n,n);}
U UU(U a,U k,U b){if(k==1)R a+b;if(k==2)R a*b;if(b==1)R a;R UU(a,k-1,UU(a,k,b-1));}
U C0(U n){U r=1;W(n--)r=UU(n+1,n+2,r);R r;}
U B0(U n){if(n<2)R n+1;U v=B0(n-1);R UU(v,v,v);}
U Fn(U n,U d){if(!d)R n;U v=Fn(n,d-1);R UU(v,d,v);}
U Hn(U n,U d,U e){if(!e)R Fn(n,d);R Hn(Fn(n,d),Hn(n,d,e-1),e-1);}
U Wn(U n,U d){R d?Hn(Wn(n,d-1),Wn(n,d-1),Wn(n,d-1)):B0(n);}
U T0(U n){R Wn(n,n);}
U X0(U n,U d){R d?X0(T0(X0(n,d-1)),d-1):n;}
U Y0(U n,U d,U e,U f){R f?Y0(X0(n,d),d,e,f-1):Y0(X0(n,d),d,e-1,n);}
U Z0(U n){R Y0(n,n,n,n);}
U P0(U n){R n<2?1:Z0(P0(n-1));}
U Q0(U n,U d){R d?Q0(Q0(n,d-1),d-1):P0(n);}
U V0(U n){R Q0(n,n);}
U M0(U n,U d){if(!d)R Z0(n);R M0(M0(n,d-1),d-1);}
U S0(U n){R n<2?1:M0(S0(n-1),S0(n-1));}
U D0(U n,U d){if(!d)R V0(n);R D0(D0(n,d-1),d-1);}
U E0(U n,U d,U e){if(!e)R D0(n,n);R E0(E0(n,d,e-1),d,e-1);}
U K0(U n){R E0(n,n,n);}
U G0(U n,U d){if(!d)R K0(n);U v=G0(n,d-1);R G0(v,d-1);}
U O0(U n,U d,U e){if(!e)R G0(n,n);R O0(O0(n,d,e-1),d,e-1);}
U A1(U n){R O0(n,n,n);}
U A2(U n,U d){if(!d)R A1(n);U v=A2(n,d-1);R A2(v,d-1);}
U A3(U n,U d,U e){if(!e)R A2(n,n);R A3(A3(n,d,e-1),d,e-1);}
U A4(U n){R A3(n,n,n);}
U A5(U n,U d,U e,U f){if(!f)R A4(n);R A5(A5(n,d,e,f-1),d,e,f-1);}
U A6(U n){R A5(n,n,n,n);}
U A7(U n,U d){if(!d)R A6(n);U v=A7(n,d-1);R A7(v,d-1);}
U A8(U n){R A7(n,n);}
U A9(U n,U d,U e){if(!e)R A8(n);R A9(A9(n,d,e-1),d,e-1);}
U B1(U n){R A9(n,n,n);}
U B2(U n,U d){if(!d)R B1(n);U v=B2(n,d-1);R B2(v,d-1);}
U B3(U n){R B2(n,n);}
U B4(U n,U d,U e){if(!e)R B3(n);R B4(B4(n,d,e-1),d,e-1);}
U B5(U n){R B4(n,n,n);}
U B6(U n,U d){if(!d)R B5(n);U v=B6(n,d-1);R B6(v,d-1);}
U B7(U n){R B6(n,n);}
U B8(U n,U d,U e){if(!e)R B7(n);R B8(B8(n,d,e-1),d,e-1);}
U B9(U n){R B8(n,n,n);}
U C1(U n,U d){if(!d)R B9(n);U v=C1(n,d-1);R C1(v,d-1);}
U C2(U n){R C1(n,n);}
U C3(U n,U d,U e){if(!e)R C2(n);R C3(C3(n,d,e-1),d,e-1);}
U C4(U n){R C3(n,n,n);}
U C5(U n,U d){if(!d)R C4(n);U v=C5(n,d-1);R C5(v,d-1);}
U C6(U n){R C5(n,n);}
U C7(U n,U d,U e){if(!e)R C6(n);R C7(C7(n,d,e-1),d,e-1);}
U C8(U n){R C7(n,n,n);}
U D1(U n,U d){if(!d)R C8(n);U v=D1(n,d-1);R D1(v,d-1);}
U D2(U n){R D1(n,n);}
U D3(U n,U d,U e){if(!e)R D2(n);R D3(D3(n,d,e-1),d,e-1);}
U D4(U n){R D3(n,n,n);}
U D5(U n,U d){if(!d)R D4(n);U v=D5(n,d-1);R D5(v,d-1);}
U D6(U n){R D5(n,n);}
U D7(U n,U d,U e){if(!e)R D6(n);R D7(D7(n,d,e-1),d,e-1);}
U D8(U n){R D7(n,n,n);}
U E1(U n,U d){if(!d)R D8(n);U v=E1(n,d-1);R E1(v,d-1);}
U E2(U n){R E1(n,n);}
U E3(U n,U d,U e){if(!e)R E2(n);R E3(E3(n,d,e-1),d,e-1);}
U E4(U n){R E3(n,n,n);}
U E5(U n,U d){if(!d)R E4(n);U v=E5(n,d-1);R E5(v,d-1);}
U E6(U n){R E5(n,n);}
U E7(U n,U d,U e){if(!e)R E6(n);R E7(E7(n,d,e-1),d,e-1);}
U E8(U n){R E7(n,n,n);}
U F1(U n,U d){if(!d)R E8(n);U v=F1(n,d-1);R F1(v,d-1);}
U F2(U n){R F1(n,n);}
U F3(U n,U d,U e){if(!e)R F2(n);R F3(F3(n,d,e-1),d,e-1);}
U F4(U n){R F3(n,n,n);}
U F5(U n,U d){if(!d)R F4(n);U v=F5(n,d-1);R F5(v,d-1);}
U F6(U n){R F5(n,n);}
U F7(U n,U d,U e){if(!e)R F6(n);R F7(F7(n,d,e-1),d,e-1);}
U F8(U n){R F7(n,n,n);}
U G1(U n,U d){if(!d)R F8(n);U v=G1(n,d-1);R G1(v,d-1);}
U G2(U n){R G1(n,n);}
U G3(U n,U d,U e){if(!e)R G2(n);R G3(G3(n,d,e-1),d,e-1);}
U G4(U n){R G3(n,n,n);}
U G5(U n,U d){if(!d)R G4(n);U v=G5(n,d-1);R G5(v,d-1);}
U G6(U n){R G5(n,n);}
U G7(U n,U d,U e){if(!e)R G6(n);R G7(G7(n,d,e-1),d,e-1);}
U G8(U n){R G7(n,n,n);}
U H1(U n,U d){if(!d)R G8(n);U v=H1(n,d-1);R H1(v,d-1);}
U H2(U n){R H1(n,n);}
U H3(U n,U d,U e){if(!e)R H2(n);R H3(H3(n,d,e-1),d,e-1);}
U H4(U n){R H3(n,n,n);}
U H5(U n,U d){if(!d)R H4(n);U v=H5(n,d-1);R H5(v,d-1);}
U H6(U n){R H5(n,n);}
U H7(U n,U d,U e){if(!e)R H6(n);R H7(H7(n,d,e-1),d,e-1);}
U H8(U n){R H7(n,n,n);}
U I1(U n,U d){if(!d)R H8(n);U v=I1(n,d-1);R I1(v,d-1);}
U I2(U n){R I1(n,n);}
U I3(U n,U d,U e){if(!e)R I2(n);R I3(I3(n,d,e-1),d,e-1);}
U I4(U n){R I3(n,n,n);}
U I5(U n,U d){if(!d)R I4(n);U v=I5(n,d-1);R I5(v,d-1);}
U I6(U n){R I5(n,n);}
U I7(U n,U d,U e){if(!e)R I6(n);R I7(I7(n,d,e-1),d,e-1);}
U I8(U n){R I7(n,n,n);}
U J1(U n,U d){if(!d)R I8(n);U v=J1(n,d-1);R J1(v,d-1);}
U J2(U n){R J1(n,n);}
U J3(U n,U d,U e){if(!e)R J2(n);R J3(J3(n,d,e-1),d,e-1);}
U J4(U n){R J3(n,n,n);}
U J5(U n,U d){if(!d)R J4(n);U v=J5(n,d-1);R J5(v,d-1);}
U J6(U n){R J5(n,n);}
U J7(U n,U d,U e){if(!e)R J6(n);R J7(J7(n,d,e-1),d,e-1);}
U J8(U n){R J7(n,n,n);}
U K1(U n,U d){if(!d)R J8(n);U v=K1(n,d-1);R K1(v,d-1);}
U K2(U n){R K1(n,n);}
U K3(U n,U d,U e){if(!e)R K2(n);R K3(K3(n,d,e-1),d,e-1);}
U K4(U n){R K3(n,n,n);}
U K5(U n,U d){if(!d)R K4(n);U v=K5(n,d-1);R K5(v,d-1);}
U K6(U n){R K5(n,n);}
U K7(U n,U d,U e){if(!e)R K6(n);R K7(K7(n,d,e-1),d,e-1);}
U K8(U n){R K7(n,n,n);}
U L1(U n,U d){if(!d)R K8(n);U v=L1(n,d-1);R L1(v,d-1);}
U L2(U n){R L1(n,n);}
U L3(U n,U d,U e){if(!e)R L2(n);R L3(L3(n,d,e-1),d,e-1);}
U L4(U n){R L3(n,n,n);}
U L5(U n,U d){if(!d)R L4(n);U v=L5(n,d-1);R L5(v,d-1);}
U L6(U n){R L5(n,n);}
U L7(U n,U d,U e){if(!e)R L6(n);R L7(L7(n,d,e-1),d,e-1);}
U L8(U n){R L7(n,n,n);}
U M1(U n,U d){if(!d)R L8(n);U v=M1(n,d-1);R M1(v,d-1);}
U M2(U n){R M1(n,n);}
U M3(U n,U d,U e){if(!e)R M2(n);R M3(M3(n,d,e-1),d,e-1);}
U M4(U n){R M3(n,n,n);}
U M5(U n,U d){if(!d)R M4(n);U v=M5(n,d-1);R M5(v,d-1);}
U M6(U n){R M5(n,n);}
U M7(U n,U d,U e){if(!e)R M6(n);R M7(M7(n,d,e-1),d,e-1);}
U M8(U n){R M7(n,n,n);}
U N1(U n,U d){if(!d)R M8(n);U v=N1(n,d-1);R N1(v,d-1);}
U N2(U n){R N1(n,n);}
U N3(U n,U d,U e){if(!e)R N2(n);R N3(N3(n,d,e-1),d,e-1);}
U N4(U n){R N3(n,n,n);}
U N5(U n,U d){if(!d)R N4(n);U v=N5(n,d-1);R N5(v,d-1);}
U N6(U n){R N5(n,n);}
U N7(U n,U d,U e){if(!e)R N6(n);R N7(N7(n,d,e-1),d,e-1);}
U N8(U n){R N7(n,n,n);}
U O1(U n,U d){if(!d)R N8(n);U v=O1(n,d-1);R O1(v,d-1);}
U O2(U n){R O1(n,n);}
U O3(U n,U d,U e){if(!e)R O2(n);R O3(O3(n,d,e-1),d,e-1);}
U O4(U n){R O3(n,n,n);}
U O5(U n,U d){if(!d)R O4(n);U v=O5(n,d-1);R O5(v,d-1);}
U O6(U n){R O5(n,n);}
U O7(U n,U d,U e){if(!e)R O6(n);R O7(O7(n,d,e-1),d,e-1);}
U O8(U n){R O7(n,n,n);}
U P1(U n,U d){if(!d)R O8(n);U v=P1(n,d-1);R P1(v,d-1);}
U P2(U n){R P1(n,n);}
U P3(U n,U d,U e){if(!e)R P2(n);R P3(P3(n,d,e-1),d,e-1);}
U P4(U n){R P3(n,n,n);}
U P5(U n,U d){if(!d)R P4(n);U v=P5(n,d-1);R P5(v,d-1);}
U P6(U n){R P5(n,n);}
U P7(U n,U d,U e){if(!e)R P6(n);R P7(P7(n,d,e-1),d,e-1);}
U P8(U n){R P7(n,n,n);}
U Q1(U n,U d){if(!d)R P8(n);U v=Q1(n,d-1);R Q1(v,d-1);}
U Q2(U n){R Q1(n,n);}
U Q3(U n,U d,U e){if(!e)R Q2(n);R Q3(Q3(n,d,e-1),d,e-1);}
U Q4(U n){R Q3(n,n,n);}
U Q5(U n,U d){if(!d)R Q4(n);U v=Q5(n,d-1);R Q5(v,d-1);}
U Q6(U n){R Q5(n,n);}
U Q7(U n,U d,U e){if(!e)R Q6(n);R Q7(Q7(n,d,e-1),d,e-1);}
U Q8(U n){R Q7(n,n,n);}
U R1(U n,U d){if(!d)R Q8(n);U v=R1(n,d-1);R R1(v,d-1);}
U R2(U n){R R1(n,n);}
U R3(U n,U d,U e){if(!e)R R2(n);R R3(R3(n,d,e-1),d,e-1);}
U R4(U n){R R3(n,n,n);}
U R5(U n,U d){if(!d)R R4(n);U v=R5(n,d-1);R R5(v,d-1);}
U R6(U n){R R5(n,n);}
U R7(U n,U d,U e){if(!e)R R6(n);R R7(R7(n,d,e-1),d,e-1);}
U R8(U n){R R7(n,n,n);}
U S1(U n,U d){if(!d)R R8(n);U v=S1(n,d-1);R S1(v,d-1);}
U S2(U n){R S1(n,n);}
U S3(U n,U d,U e){if(!e)R S2(n);R S3(S3(n,d,e-1),d,e-1);}
U S4(U n){R S3(n,n,n);}
U S5(U n,U d){if(!d)R S4(n);U v=S5(n,d-1);R S5(v,d-1);}
U S6(U n){R S5(n,n);}
U S7(U n,U d,U e){if(!e)R S6(n);R S7(S7(n,d,e-1),d,e-1);}
U S8(U n){R S7(n,n,n);}
U T1(U n,U d){if(!d)R S8(n);U v=T1(n,d-1);R T1(v,d-1);}
U T2(U n){R T1(n,n);}
U T3(U n,U d,U e){if(!e)R T2(n);R T3(T3(n,d,e-1),d,e-1);}
U T4(U n){R T3(n,n,n);}
U T5(U n,U d){if(!d)R T4(n);U v=T5(n,d-1);R T5(v,d-1);}
U T6(U n){R T5(n,n);}
U T7(U n,U d,U e){if(!e)R T6(n);R T7(T7(n,d,e-1),d,e-1);}
U T8(U n){R T7(n,n,n);}
U U1(U n,U d){if(!d)R T8(n);U v=U1(n,d-1);R U1(v,d-1);}
U U2(U n){R U1(n,n);}
U U3(U n,U d,U e){if(!e)R U2(n);R U3(U3(n,d,e-1),d,e-1);}
U U4(U n){R U3(n,n,n);}
U U5(U n,U d){if(!d)R U4(n);U v=U5(n,d-1);R U5(v,d-1);}
U U6(U n){R U5(n,n);}
U U7(U n,U d,U e){if(!e)R U6(n);R U7(U7(n,d,e-1),d,e-1);}
U U8(U n){R U7(n,n,n);}
U V1(U n,U d){if(!d)R U8(n);U v=V1(n,d-1);R V1(v,d-1);}
U V2(U n){R V1(n,n);}
U V3(U n,U d,U e){if(!e)R V2(n);R V3(V3(n,d,e-1),d,e-1);}
U V4(U n){R V3(n,n,n);}
U V5(U n,U d){if(!d)R V4(n);U v=V5(n,d-1);R V5(v,d-1);}
U V6(U n){R V5(n,n);}
U V7(U n,U d,U e){if(!e)R V6(n);R V7(V7(n,d,e-1),d,e-1);}
U V8(U n){R V7(n,n,n);}
U W1(U n,U d){if(!d)R V8(n);U v=W1(n,d-1);R W1(v,d-1);}
U W2(U n){R W1(n,n);}
U W3(U n,U d,U e){if(!e)R W2(n);R W3(W3(n,d,e-1),d,e-1);}
U W4(U n){R W3(n,n,n);}
U W5(U n,U d){if(!d)R W4(n);U v=W5(n,d-1);R W5(v,d-1);}
U W6(U n){R W5(n,n);}
U W7(U n,U d,U e){if(!e)R W6(n);R W7(W7(n,d,e-1),d,e-1);}
U W8(U n){R W7(n,n,n);}
U X1(U n,U d){if(!d)R W8(n);U v=X1(n,d-1);R X1(v,d-1);}
U X2(U n){R X1(n,n);}
U X3(U n,U d,U e){if(!e)R X2(n);R X3(X3(n,d,e-1),d,e-1);}
U X4(U n){R X3(n,n,n);}
U X5(U n,U d){if(!d)R X4(n);U v=X5(n,d-1);R X5(v,d-1);}
U X6(U n){R X5(n,n);}
U X7(U n,U d,U e){if(!e)R X6(n);R X7(X7(n,d,e-1),d,e-1);}
U X8(U n){R X7(n,n,n);}
U Y1(U n,U d){if(!d)R X8(n);U v=Y1(n,d-1);R Y1(v,d-1);}
U Y2(U n){R Y1(n,n);}
U Y3(U n,U d,U e){if(!e)R Y2(n);R Y3(Y3(n,d,e-1),d,e-1);}
U Y4(U n){R Y3(n,n,n);}
U Y5(U n,U d){if(!d)R Y4(n);U v=Y5(n,d-1);R Y5(v,d-1);}
U Y6(U n){R Y5(n,n);}
U Y7(U n,U d,U e){if(!e)R Y6(n);R Y7(Y7(n,d,e-1),d,e-1);}
U Y8(U n){R Y7(n,n,n);}
U Z1(U n,U d){if(!d)R Y8(n);U v=Z1(n,d-1);R Z1(v,d-1);}
U Z2(U n){R Z1(n,n);}
U Z3(U n,U d,U e){if(!e)R Z2(n);R Z3(Z3(n,d,e-1),d,e-1);}
U Z4(U n){R Z3(n,n,n);}
U Z5(U n,U d){if(!d)R Z4(n);U v=Z5(n,d-1);R Z5(v,d-1);}
U Z6(U n){R Z5(n,n);}
U Z7(U n,U d,U e){if(!e)R Z6(n);R Z7(Z7(n,d,e-1),d,e-1);}
U Z8(U n){R Z7(n,n,n);}
U AAB(U n){R Z8(n);}
U GR(U n){U r=n;W(n--)r=UU(r,r,r);R r;}
U GR2(U n,U d){if(!d)R GR(n);R GR2(GR2(n,d-1),d-1);}
U GR3(U n){R GR2(n,n);}
U CH(U a,U b){if(b==1)R a;if(a==1)R 2;R CH(a,CH(a,b-1));}
U CH2(U a,U b,U c){if(c==1)R a*b;if(b==1)R a;R CH2(a,CH2(a,b-1,c),c-1);}
U CH3(U n){R CH2(n,n,n);}
U FU(U n){U r=1;F(U i=0;i<n;i++)r=UU(r,n,r);R r;}
U FU2(U n,U d){if(!d)R FU(n);R FU2(FU2(n,d-1),d-1);}
U HY(U n,U k){if(k==0)R n;R HY(HY(n,k-1),k-1);}
U HY2(U n){R HY(n,n);}
U HY3(U n,U d){if(!d)R HY2(n);R HY3(HY3(n,d-1),d-1);}
U TOWER(U n,U k){U r=n;W(k--)r=UU(r,r,r);R r;}
U TOWER2(U n){R TOWER(n,n);}
U TOWER3(U n,U d){if(!d)R TOWER2(n);R TOWER3(TOWER3(n,d-1),d-1);}
U BIG(U n,U d){U i;W(d--){U j=n;n=0;W(j--)n++;F(i=0;i<18446744073709551615ULL;i++){n=Z0(n);n=M0(n,n);n=K0(n);n=A1(n);n=A4(n);n=A6(n);n=A8(n);n=B1(n);n=B3(n);n=B5(n);n=B7(n);n=B9(n);n=C2(n);n=C4(n);n=C6(n);n=C8(n);n=D2(n);n=D4(n);n=D6(n);n=D8(n);n=E2(n);n=E4(n);n=E6(n);n=E8(n);n=F2(n);n=F4(n);n=F6(n);n=F8(n);n=G2(n);n=G4(n);n=G6(n);n=G8(n);n=H2(n);n=H4(n);n=H6(n);n=H8(n);n=I2(n);n=I4(n);n=I6(n);n=I8(n);n=J2(n);n=J4(n);n=J6(n);n=J8(n);n=K2(n);n=K4(n);n=K6(n);n=K8(n);n=L2(n);n=L4(n);n=L6(n);n=L8(n);n=M2(n);n=M4(n);n=M6(n);n=M8(n);n=N2(n);n=N4(n);n=N6(n);n=N8(n);n=O2(n);n=O4(n);n=O6(n);n=O8(n);n=P2(n);n=P4(n);n=P6(n);n=P8(n);n=Q2(n);n=Q4(n);n=Q6(n);n=Q8(n);n=R2(n);n=R4(n);n=R6(n);n=R8(n);n=S2(n);n=S4(n);n=S6(n);n=S8(n);n=T2(n);n=T4(n);n=T6(n);n=T8(n);n=U2(n);n=U4(n);n=U6(n);n=U8(n);n=V2(n);n=V4(n);n=V6(n);n=V8(n);n=W2(n);n=W4(n);n=W6(n);n=W8(n);n=X2(n);n=X4(n);n=X6(n);n=X8(n);n=Y2(n);n=Y4(n);n=Y6(n);n=Y8(n);n=Z2(n);n=Z4(n);n=Z6(n);n=Z8(n);n=AAB(n);n=GR3(n);n=CH3(n);n=FU2(n,n);n=HY3(n,n);n=TOWER3(n,n);}}R n;}
U RIJAM(U n){
 U x=A(n,n);U c=0;
 W(c<9){x=V0(x);c++;}W(c<99){x=S0(x);c++;}W(c<999){x=K0(x);c++;} 
 W(c<9999){x=A1(x);c++;}W(c<99999){x=A4(x);c++;}W(c<999999){x=A6(x);c++;}
 W(c<999999){x=A8(x);c++;}W(c<999999){x=B1(x);c++;}W(c<999999){x=B3(x);c++;}
 W(c<999999){x=B5(x);c++;}W(c<999999){x=B7(x);c++;}W(c<999999){x=B9(x);c++;}
 W(c<999999){x=C2(x);c++;}W(c<999999){x=C4(x);c++;}W(c<999999){x=C6(x);c++;}
 W(c<999999){x=C8(x);c++;}W(c<999999){x=D2(x);c++;}W(c<999999){x=D4(x);c++;}
 W(c<999999){x=D6(x);c++;}W(c<999999){x=D8(x);c++;}W(c<999999){x=E2(x);c++;}
 W(c<999999){x=E4(x);c++;}W(c<999999){x=E6(x);c++;}W(c<999999){x=E8(x);c++;}
 W(c<999999){x=F2(x);c++;}W(c<999999){x=F4(x);c++;}W(c<999999){x=F6(x);c++;}
 W(c<999999){x=F8(x);c++;}W(c<999999){x=G2(x);c++;}W(c<999999){x=G4(x);c++;}
 W(c<999999){x=G6(x);c++;}W(c<999999){x=G8(x);c++;}W(c<999999){x=H2(x);c++;}
 W(c<999999){x=H4(x);c++;}W(c<999999){x=H6(x);c++;}W(c<999999){x=H8(x);c++;}
 W(c<999999){x=I2(x);c++;}W(c<999999){x=I4(x);c++;}W(c<999999){x=I6(x);c++;}
 W(c<999999){x=I8(x);c++;}W(c<999999){x=J2(x);c++;}W(c<999999){x=J4(x);c++;}
 W(c<999999){x=J6(x);c++;}W(c<999999){x=J8(x);c++;}W(c<999999){x=K2(x);c++;}
 W(c<999999){x=K4(x);c++;}W(c<999999){x=K6(x);c++;}W(c<999999){x=K8(x);c++;}
 W(c<999999){x=L2(x);c++;}W(c<999999){x=L4(x);c++;}W(c<999999){x=L6(x);c++;}
 W(c<999999){x=L8(x);c++;}W(c<999999){x=M2(x);c++;}W(c<999999){x=M4(x);c++;}
 W(c<999999){x=M6(x);c++;}W(c<999999){x=M8(x);c++;}W(c<999999){x=N2(x);c++;}
 W(c<999999){x=N4(x);c++;}W(c<999999){x=N6(x);c++;}W(c<999999){x=N8(x);c++;}
 W(c<999999){x=O2(x);c++;}W(c<999999){x=O4(x);c++;}W(c<999999){x=O6(x);c++;}
 W(c<999999){x=O8(x);c++;}W(c<999999){x=P2(x);c++;}W(c<999999){x=P4(x);c++;}
 W(c<999999){x=P6(x);c++;}W(c<999999){x=P8(x);c++;}W(c<999999){x=Q2(x);c++;}
 W(c<999999){x=Q4(x);c++;}W(c<999999){x=Q6(x);c++;}W(c<999999){x=Q8(x);c++;}
 W(c<999999){x=R2(x);c++;}W(c<999999){x=R4(x);c++;}W(c<999999){x=R6(x);c++;}
 W(c<999999){x=R8(x);c++;}W(c<999999){x=S2(x);c++;}W(c<999999){x=S4(x);c++;}
 W(c<999999){x=S6(x);c++;}W(c<999999){x=S8(x);c++;}W(c<999999){x=T2(x);c++;}
 W(c<999999){x=T4(x);c++;}W(c<999999){x=T6(x);c++;}W(c<999999){x=T8(x);c++;}
 W(c<999999){x=U2(x);c++;}W(c<999999){x=U4(x);c++;}W(c<999999){x=U6(x);c++;}
 W(c<999999){x=U8(x);c++;}W(c<999999){x=V2(x);c++;}W(c<999999){x=V4(x);c++;}
 W(c<999999){x=V6(x);c++;}W(c<999999){x=V8(x);c++;}W(c<999999){x=W2(x);c++;}
 W(c<999999){x=W4(x);c++;}W(c<999999){x=W6(x);c++;}W(c<999999){x=W8(x);c++;}
 W(c<999999){x=X2(x);c++;}W(c<999999){x=X4(x);c++;}W(c<999999){x=X6(x);c++;}
 W(c<999999){x=X8(x);c++;}W(c<999999){x=Y2(x);c++;}W(c<999999){x=Y4(x);c++;}
 W(c<999999){x=Y6(x);c++;}W(c<999999){x=Y8(x);c++;}W(c<999999){x=Z2(x);c++;}
 W(c<999999){x=Z4(x);c++;}W(c<999999){x=Z6(x);c++;}W(c<999999){x=Z8(x);c++;}
 W(c<999999){x=AAB(x);c++;}W(c<999999){x=GR3(x);c++;}W(c<999999){x=CH3(x);c++;}
 W(c<999999){x=FU2(x,x);c++;}W(c<999999){x=HY3(x,x);c++;}W(c<999999){x=TOWER3(x,x);c++;}
 x=BIG(x,18446744073709551615ULL);x=BIG(x,99999999999);x=BIG(x,99999999999);x=BIG(x,99999999999);
 x=BIG(x,99999999999);x=BIG(x,99999999999);x=BIG(x,99999999999);x=BIG(x,99999999999);
 x=BIG(x,99999999);x=BIG(x,9999999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,99999);x=BIG(x,99999999999999999);
 R x;
}
int main(int c,char**v){U n=c>1?strtoull(v[1],0,10):1;printf("%llu\n",RIJAM(n));R 0;}