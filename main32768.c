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
U AAC(U n,U d){if(!d)R AAB(n);U v=AAC(n,d-1);R AAC(v,d-1);}
U AAD(U n){R AAC(n,n);}
U AAE(U n,U d,U e){if(!e)R AAD(n);R AAE(AAE(n,d,e-1),d,e-1);}
U AAF(U n){R AAE(n,n,n);}
U AAG(U n,U d){if(!d)R AAF(n);U v=AAG(n,d-1);R AAG(v,d-1);}
U AAH(U n){R AAG(n,n);}
U AAI(U n,U d,U e){if(!e)R AAH(n);R AAI(AAI(n,d,e-1),d,e-1);}
U AAJ(U n){R AAI(n,n,n);}
U AAK(U n,U d){if(!d)R AAJ(n);U v=AAK(n,d-1);R AAK(v,d-1);}
U AAL(U n){R AAK(n,n);}
U AAM(U n,U d,U e){if(!e)R AAL(n);R AAM(AAM(n,d,e-1),d,e-1);}
U AAN(U n){R AAM(n,n,n);}
U AAO(U n,U d){if(!d)R AAN(n);U v=AAO(n,d-1);R AAO(v,d-1);}
U AAP(U n){R AAO(n,n);}
U AAQ(U n,U d,U e){if(!e)R AAP(n);R AAQ(AAQ(n,d,e-1),d,e-1);}
U AAR(U n){R AAQ(n,n,n);}
U AAS(U n,U d){if(!d)R AAR(n);U v=AAS(n,d-1);R AAS(v,d-1);}
U AAT(U n){R AAS(n,n);}
U AAU(U n,U d,U e){if(!e)R AAT(n);R AAU(AAU(n,d,e-1),d,e-1);}
U AAV(U n){R AAU(n,n,n);}
U AAW(U n,U d){if(!d)R AAV(n);U v=AAW(n,d-1);R AAW(v,d-1);}
U AAX(U n){R AAW(n,n);}
U AAY(U n,U d,U e){if(!e)R AAX(n);R AAY(AAY(n,d,e-1),d,e-1);}
U AAZ(U n){R AAY(n,n,n);}
U ABA(U n,U d){if(!d)R AAZ(n);U v=ABA(n,d-1);R ABA(v,d-1);}
U ABB(U n){R ABA(n,n);}
U ABC(U n,U d,U e){if(!e)R ABB(n);R ABC(ABC(n,d,e-1),d,e-1);}
U ABD(U n){R ABC(n,n,n);}
U ABE(U n,U d){if(!d)R ABD(n);U v=ABE(n,d-1);R ABE(v,d-1);}
U ABF(U n){R ABE(n,n);}
U ABG(U n,U d,U e){if(!e)R ABF(n);R ABG(ABG(n,d,e-1),d,e-1);}
U ABH(U n){R ABG(n,n,n);}
U ABI(U n,U d){if(!d)R ABH(n);U v=ABI(n,d-1);R ABI(v,d-1);}
U ABJ(U n){R ABI(n,n);}
U ABK(U n,U d,U e){if(!e)R ABJ(n);R ABK(ABK(n,d,e-1),d,e-1);}
U ABL(U n){R ABK(n,n,n);}
U ABM(U n,U d){if(!d)R ABL(n);U v=ABM(n,d-1);R ABM(v,d-1);}
U ABN(U n){R ABM(n,n);}
U ABO(U n,U d,U e){if(!e)R ABN(n);R ABO(ABO(n,d,e-1),d,e-1);}
U ABP(U n){R ABO(n,n,n);}
U ABQ(U n,U d){if(!d)R ABP(n);U v=ABQ(n,d-1);R ABQ(v,d-1);}
U ABR(U n){R ABQ(n,n);}
U ABS(U n,U d,U e){if(!e)R ABR(n);R ABS(ABS(n,d,e-1),d,e-1);}
U ABT(U n){R ABS(n,n,n);}
U ABU(U n,U d){if(!d)R ABT(n);U v=ABU(n,d-1);R ABU(v,d-1);}
U ABV(U n){R ABU(n,n);}
U ABW(U n,U d,U e){if(!e)R ABV(n);R ABW(ABW(n,d,e-1),d,e-1);}
U ABX(U n){R ABW(n,n,n);}
U ABY(U n,U d){if(!d)R ABX(n);U v=ABY(n,d-1);R ABY(v,d-1);}
U ABZ(U n){R ABY(n,n);}
U ACA(U n,U d,U e){if(!e)R ABZ(n);R ACA(ACA(n,d,e-1),d,e-1);}
U ACB(U n){R ACA(n,n,n);}
U ACC(U n,U d){if(!d)R ACB(n);U v=ACC(n,d-1);R ACC(v,d-1);}
U ACD(U n){R ACC(n,n);}
U ACE(U n,U d,U e){if(!e)R ACD(n);R ACE(ACE(n,d,e-1),d,e-1);}
U ACF(U n){R ACE(n,n,n);}
U ACG(U n,U d){if(!d)R ACF(n);U v=ACG(n,d-1);R ACG(v,d-1);}
U ACH(U n){R ACG(n,n);}
U ACI(U n,U d,U e){if(!e)R ACH(n);R ACI(ACI(n,d,e-1),d,e-1);}
U ACJ(U n){R ACI(n,n,n);}
U ACK(U n,U d){if(!d)R ACJ(n);U v=ACK(n,d-1);R ACK(v,d-1);}
U ACL(U n){R ACK(n,n);}
U ACM(U n,U d,U e){if(!e)R ACL(n);R ACM(ACM(n,d,e-1),d,e-1);}
U ACN(U n){R ACM(n,n,n);}
U ACO(U n,U d){if(!d)R ACN(n);U v=ACO(n,d-1);R ACO(v,d-1);}
U ACP(U n){R ACO(n,n);}
U ACQ(U n,U d,U e){if(!e)R ACP(n);R ACQ(ACQ(n,d,e-1),d,e-1);}
U ACR(U n){R ACQ(n,n,n);}
U ACS(U n,U d){if(!d)R ACR(n);U v=ACS(n,d-1);R ACS(v,d-1);}
U ACT(U n){R ACS(n,n);}
U ACU(U n,U d,U e){if(!e)R ACT(n);R ACU(ACU(n,d,e-1),d,e-1);}
U ACV(U n){R ACU(n,n,n);}
U ACW(U n,U d){if(!d)R ACV(n);U v=ACW(n,d-1);R ACW(v,d-1);}
U ACX(U n){R ACW(n,n);}
U ACY(U n,U d,U e){if(!e)R ACX(n);R ACY(ACY(n,d,e-1),d,e-1);}
U ACZ(U n){R ACY(n,n,n);}
U ADA(U n,U d){if(!d)R ACZ(n);U v=ADA(n,d-1);R ADA(v,d-1);}
U ADB(U n){R ADA(n,n);}
U ADC(U n,U d,U e){if(!e)R ADB(n);R ADC(ADC(n,d,e-1),d,e-1);}
U ADD(U n){R ADC(n,n,n);}
U ADE(U n,U d){if(!d)R ADD(n);U v=ADE(n,d-1);R ADE(v,d-1);}
U ADF(U n){R ADE(n,n);}
U ADG(U n,U d,U e){if(!e)R ADF(n);R ADG(ADG(n,d,e-1),d,e-1);}
U ADH(U n){R ADG(n,n,n);}
U ADI(U n,U d){if(!d)R ADH(n);U v=ADI(n,d-1);R ADI(v,d-1);}
U ADJ(U n){R ADI(n,n);}
U ADK(U n,U d,U e){if(!e)R ADJ(n);R ADK(ADK(n,d,e-1),d,e-1);}
U ADL(U n){R ADK(n,n,n);}
U ADM(U n,U d){if(!d)R ADL(n);U v=ADM(n,d-1);R ADM(v,d-1);}
U ADN(U n){R ADM(n,n);}
U ADO(U n,U d,U e){if(!e)R ADN(n);R ADO(ADO(n,d,e-1),d,e-1);}
U ADP(U n){R ADO(n,n,n);}
U ADQ(U n,U d){if(!d)R ADP(n);U v=ADQ(n,d-1);R ADQ(v,d-1);}
U ADR(U n){R ADQ(n,n);}
U ADS(U n,U d,U e){if(!e)R ADR(n);R ADS(ADS(n,d,e-1),d,e-1);}
U ADT(U n){R ADS(n,n,n);}
U ADU(U n,U d){if(!d)R ADT(n);U v=ADU(n,d-1);R ADU(v,d-1);}
U ADV(U n){R ADU(n,n);}
U ADW(U n,U d,U e){if(!e)R ADV(n);R ADW(ADW(n,d,e-1),d,e-1);}
U ADX(U n){R ADW(n,n,n);}
U ADY(U n,U d){if(!d)R ADX(n);U v=ADY(n,d-1);R ADY(v,d-1);}
U ADZ(U n){R ADY(n,n);}
U AEA(U n,U d,U e){if(!e)R ADZ(n);R AEA(AEA(n,d,e-1),d,e-1);}
U AEB(U n){R AEA(n,n,n);}
U AEC(U n,U d){if(!d)R AEB(n);U v=AEC(n,d-1);R AEC(v,d-1);}
U AED(U n){R AEC(n,n);}
U AEE(U n,U d,U e){if(!e)R AED(n);R AEE(AEE(n,d,e-1),d,e-1);}
U AEF(U n){R AEE(n,n,n);}
U AEG(U n,U d){if(!d)R AEF(n);U v=AEG(n,d-1);R AEG(v,d-1);}
U AEH(U n){R AEG(n,n);}
U AEI(U n,U d,U e){if(!e)R AEH(n);R AEI(AEI(n,d,e-1),d,e-1);}
U AEJ(U n){R AEI(n,n,n);}
U AEK(U n,U d){if(!d)R AEJ(n);U v=AEK(n,d-1);R AEK(v,d-1);}
U AEL(U n){R AEK(n,n);}
U AEM(U n,U d,U e){if(!e)R AEL(n);R AEM(AEM(n,d,e-1),d,e-1);}
U AEN(U n){R AEM(n,n,n);}
U AEO(U n,U d){if(!d)R AEN(n);U v=AEO(n,d-1);R AEO(v,d-1);}
U AEP(U n){R AEO(n,n);}
U AEQ(U n,U d,U e){if(!e)R AEP(n);R AEQ(AEQ(n,d,e-1),d,e-1);}
U AER(U n){R AEQ(n,n,n);}
U AES(U n,U d){if(!d)R AER(n);U v=AES(n,d-1);R AES(v,d-1);}
U AET(U n){R AES(n,n);}
U AEU(U n,U d,U e){if(!e)R AET(n);R AEU(AEU(n,d,e-1),d,e-1);}
U AEV(U n){R AEU(n,n,n);}
U AEW(U n,U d){if(!d)R AEV(n);U v=AEW(n,d-1);R AEW(v,d-1);}
U AEX(U n){R AEW(n,n);}
U AEY(U n,U d,U e){if(!e)R AEX(n);R AEY(AEY(n,d,e-1),d,e-1);}
U AEZ(U n){R AEY(n,n,n);}
U GR(U n){U r=n;W(n--)r=UU(r,r,r);R r;}
U GR2(U n,U d){if(!d)R GR(n);R GR2(GR2(n,d-1),d-1);}
U GR3(U n){R GR2(n,n);}
U GR4(U n,U d){if(!d)R GR3(n);U v=GR4(n,d-1);R GR4(v,d-1);}
U GR5(U n){R GR4(n,n);}
U GR6(U n,U d,U e){if(!e)R GR5(n);R GR6(GR6(n,d,e-1),d,e-1);}
U GR7(U n){R GR6(n,n,n);}
U CH(U a,U b){if(b==1)R a;if(a==1)R 2;R CH(a,CH(a,b-1));}
U CH2(U a,U b,U c){if(c==1)R a*b;if(b==1)R a;R CH2(a,CH2(a,b-1,c),c-1);}
U CH3(U n){R CH2(n,n,n);}
U CH4(U n,U d){if(!d)R CH3(n);U v=CH4(n,d-1);R CH4(v,d-1);}
U CH5(U n){R CH4(n,n);}
U CH6(U n,U d,U e){if(!e)R CH5(n);R CH6(CH6(n,d,e-1),d,e-1);}
U CH7(U n){R CH6(n,n,n);}
U FU(U n){U r=1;F(U i=0;i<n;i++)r=UU(r,n,r);R r;}
U FU2(U n,U d){if(!d)R FU(n);R FU2(FU2(n,d-1),d-1);}
U FU3(U n){R FU2(n,n);}
U FU4(U n,U d){if(!d)R FU3(n);U v=FU4(n,d-1);R FU4(v,d-1);}
U FU5(U n){R FU4(n,n);}
U FU6(U n,U d,U e){if(!e)R FU5(n);R FU6(FU6(n,d,e-1),d,e-1);}
U FU7(U n){R FU6(n,n,n);}
U HY(U n,U k){if(k==0)R n;R HY(HY(n,k-1),k-1);}
U HY2(U n){R HY(n,n);}
U HY3(U n,U d){if(!d)R HY2(n);R HY3(HY3(n,d-1),d-1);}
U HY4(U n){R HY3(n,n);}
U HY5(U n,U d){if(!d)R HY4(n);U v=HY5(n,d-1);R HY5(v,d-1);}
U HY6(U n){R HY5(n,n);}
U HY7(U n,U d,U e){if(!e)R HY6(n);R HY7(HY7(n,d,e-1),d,e-1);}
U HY8(U n){R HY7(n,n,n);}
U TOWER(U n,U k){U r=n;W(k--)r=UU(r,r,r);R r;}
U TOWER2(U n){R TOWER(n,n);}
U TOWER3(U n,U d){if(!d)R TOWER2(n);R TOWER3(TOWER3(n,d-1),d-1);}
U TOWER4(U n){R TOWER3(n,n);}
U TOWER5(U n,U d){if(!d)R TOWER4(n);U v=TOWER5(n,d-1);R TOWER5(v,d-1);}
U TOWER6(U n){R TOWER5(n,n);}
U TOWER7(U n,U d,U e){if(!e)R TOWER6(n);R TOWER7(TOWER7(n,d,e-1),d,e-1);}
U TOWER8(U n){R TOWER7(n,n,n);}
U SUPER(U n,U k){if(!k)R n;R SUPER(SUPER(n,k-1),k-1);}
U SUPER2(U n){R SUPER(n,n);}
U SUPER3(U n,U d){if(!d)R SUPER2(n);R SUPER3(SUPER3(n,d-1),d-1);}
U SUPER4(U n){R SUPER3(n,n);}
U SUPER5(U n,U d){if(!d)R SUPER4(n);U v=SUPER5(n,d-1);R SUPER5(v,d-1);}
U SUPER6(U n){R SUPER5(n,n);}
U SUPER7(U n,U d,U e){if(!e)R SUPER6(n);R SUPER7(SUPER7(n,d,e-1),d,e-1);}
U MEGA(U n,U k,U d){if(!d)R SUPER4(n);if(!k)R n;R MEGA(MEGA(n,k-1,d),k-1,d);}
U MEGA2(U n){R MEGA(n,n,n);}
U MEGA3(U n,U d){if(!d)R MEGA2(n);R MEGA3(MEGA3(n,d-1),d-1);}
U MEGA4(U n){R MEGA3(n,n);}
U MEGA5(U n,U d){if(!d)R MEGA4(n);U v=MEGA5(n,d-1);R MEGA5(v,d-1);}
U MEGA6(U n){R MEGA5(n,n);}
U MEGA7(U n,U d,U e){if(!e)R MEGA6(n);R MEGA7(MEGA7(n,d,e-1),d,e-1);}
U ULTRA(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=Z0(x);x=M0(x,x);x=K0(x);}R x;}
U ULTRA2(U n,U d){if(!d)R ULTRA(n);R ULTRA2(ULTRA2(n,d-1),d-1);}
U ULTRA3(U n){R ULTRA2(n,n);}
U ULTRA4(U n,U d){if(!d)R ULTRA3(n);U v=ULTRA4(n,d-1);R ULTRA4(v,d-1);}
U ULTRA5(U n){R ULTRA4(n,n);}
U ULTRA6(U n,U d,U e){if(!e)R ULTRA5(n);R ULTRA6(ULTRA6(n,d,e-1),d,e-1);}
U ULTRA7(U n){R ULTRA6(n,n,n);}
U OMEGA(U n){U x=n;W(x)x=Z0(x);R x;}
U OMEGA2(U n,U d){if(!d)R OMEGA(n);R OMEGA2(OMEGA2(n,d-1),d-1);}
U OMEGA3(U n){R OMEGA2(n,n);}
U OMEGA4(U n,U d){if(!d)R OMEGA3(n);U v=OMEGA4(n,d-1);R OMEGA4(v,d-1);}
U OMEGA5(U n){R OMEGA4(n,n);}
U OMEGA6(U n,U d,U e){if(!e)R OMEGA5(n);R OMEGA6(OMEGA6(n,d,e-1),d,e-1);}
U OMEGA7(U n){R OMEGA6(n,n,n);}
U INFINITY(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=SUPER4(x);x=MEGA4(x);x=ULTRA3(x);x=OMEGA3(x);x=GR5(x);x=CH7(x);x=FU7(x);x=HY8(x);x=TOWER8(x);}R x;}
U INFINITY2(U n,U d){if(!d)R INFINITY(n);R INFINITY2(INFINITY2(n,d-1),d-1);}
U INFINITY3(U n){R INFINITY2(n,n);}
U INFINITY4(U n,U d){if(!d)R INFINITY3(n);U v=INFINITY4(n,d-1);R INFINITY4(v,d-1);}
U INFINITY5(U n){R INFINITY4(n,n);}
U INFINITY6(U n,U d,U e){if(!e)R INFINITY5(n);R INFINITY6(INFINITY6(n,d,e-1),d,e-1);}
U INFINITY7(U n){R INFINITY6(n,n,n);}
U COSMIC(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=INFINITY3(x);x=ABP(x);x=AAV(x);x=AAN(x);}R x;}
U COSMIC2(U n,U d){if(!d)R COSMIC(n);R COSMIC2(COSMIC2(n,d-1),d-1);}
U COSMIC3(U n){R COSMIC2(n,n);}
U COSMIC4(U n,U d){if(!d)R COSMIC3(n);U v=COSMIC4(n,d-1);R COSMIC4(v,d-1);}
U COSMIC5(U n){R COSMIC4(n,n);}
U COSMIC6(U n,U d,U e){if(!e)R COSMIC5(n);R COSMIC6(COSMIC6(n,d,e-1),d,e-1);}
U COSMIC7(U n){R COSMIC6(n,n,n);}
U DIVINE(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++)x=COSMIC3(x);R x;}
U DIVINE2(U n,U d){if(!d)R DIVINE(n);R DIVINE2(DIVINE2(n,d-1),d-1);}
U DIVINE3(U n){R DIVINE2(n,n);}
U DIVINE4(U n,U d){if(!d)R DIVINE3(n);U v=DIVINE4(n,d-1);R DIVINE4(v,d-1);}
U DIVINE5(U n){R DIVINE4(n,n);}
U DIVINE6(U n,U d,U e){if(!e)R DIVINE5(n);R DIVINE6(DIVINE6(n,d,e-1),d,e-1);}
U DIVINE7(U n){R DIVINE6(n,n,n);}
U TRANSCEND(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=DIVINE3(x);x=COSMIC3(x);x=INFINITY3(x);}R x;}
U TRANSCEND2(U n,U d){if(!d)R TRANSCEND(n);R TRANSCEND2(TRANSCEND2(n,d-1),d-1);}
U TRANSCEND3(U n){R TRANSCEND2(n,n);}
U TRANSCEND4(U n,U d){if(!d)R TRANSCEND3(n);U v=TRANSCEND4(n,d-1);R TRANSCEND4(v,d-1);}
U TRANSCEND5(U n){R TRANSCEND4(n,n);}
U TRANSCEND6(U n,U d,U e){if(!e)R TRANSCEND5(n);R TRANSCEND6(TRANSCEND6(n,d,e-1),d,e-1);}
U TRANSCEND7(U n){R TRANSCEND6(n,n,n);}
U ABSOLUTE(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++)x=TRANSCEND3(x);R x;}
U ABSOLUTE2(U n,U d){if(!d)R ABSOLUTE(n);R ABSOLUTE2(ABSOLUTE2(n,d-1),d-1);}
U ABSOLUTE3(U n){R ABSOLUTE2(n,n);}
U ABSOLUTE4(U n,U d){if(!d)R ABSOLUTE3(n);U v=ABSOLUTE4(n,d-1);R ABSOLUTE4(v,d-1);}
U ABSOLUTE5(U n){R ABSOLUTE4(n,n);}
U ABSOLUTE6(U n,U d,U e){if(!e)R ABSOLUTE5(n);R ABSOLUTE6(ABSOLUTE6(n,d,e-1),d,e-1);}
U ABSOLUTE7(U n){R ABSOLUTE6(n,n,n);}
U ETERNAL(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++)x=ABSOLUTE3(x);R x;}
U ETERNAL2(U n,U d){if(!d)R ETERNAL(n);R ETERNAL2(ETERNAL2(n,d-1),d-1);}
U ETERNAL3(U n){R ETERNAL2(n,n);}
U ETERNAL4(U n,U d){if(!d)R ETERNAL3(n);U v=ETERNAL4(n,d-1);R ETERNAL4(v,d-1);}
U ETERNAL5(U n){R ETERNAL4(n,n);}
U ETERNAL6(U n,U d,U e){if(!e)R ETERNAL5(n);R ETERNAL6(ETERNAL6(n,d,e-1),d,e-1);}
U ETERNAL7(U n){R ETERNAL6(n,n,n);}
U BEYOND(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=ETERNAL3(x);x=ABSOLUTE3(x);x=TRANSCEND3(x);x=DIVINE3(x);}R x;}
U BEYOND2(U n,U d){if(!d)R BEYOND(n);R BEYOND2(BEYOND2(n,d-1),d-1);}
U BEYOND3(U n){R BEYOND2(n,n);}
U BEYOND4(U n,U d){if(!d)R BEYOND3(n);U v=BEYOND4(n,d-1);R BEYOND4(v,d-1);}
U BEYOND5(U n){R BEYOND4(n,n);}
U BEYOND6(U n,U d,U e){if(!e)R BEYOND5(n);R BEYOND6(BEYOND6(n,d,e-1),d,e-1);}
U BEYOND7(U n){R BEYOND6(n,n,n);}
U ULTIMATE(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++)x=BEYOND3(x);R x;}
U ULTIMATE2(U n,U d){if(!d)R ULTIMATE(n);R ULTIMATE2(ULTIMATE2(n,d-1),d-1);}
U ULTIMATE3(U n){R ULTIMATE2(n,n);}
U ULTIMATE4(U n,U d){if(!d)R ULTIMATE3(n);U v=ULTIMATE4(n,d-1);R ULTIMATE4(v,d-1);}
U ULTIMATE5(U n){R ULTIMATE4(n,n);}
U ULTIMATE6(U n,U d,U e){if(!e)R ULTIMATE5(n);R ULTIMATE6(ULTIMATE6(n,d,e-1),d,e-1);}
U ULTIMATE7(U n){R ULTIMATE6(n,n,n);}
U FINAL(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=ULTIMATE3(x);x=BEYOND3(x);x=ETERNAL3(x);x=ABSOLUTE3(x);}R x;}
U FINAL2(U n,U d){if(!d)R FINAL(n);R FINAL2(FINAL2(n,d-1),d-1);}
U FINAL3(U n){R FINAL2(n,n);}
U FINAL4(U n,U d){if(!d)R FINAL3(n);U v=FINAL4(n,d-1);R FINAL4(v,d-1);}
U FINAL5(U n){R FINAL4(n,n);}
U FINAL6(U n,U d,U e){if(!e)R FINAL5(n);R FINAL6(FINAL6(n,d,e-1),d,e-1);}
U FINAL7(U n){R FINAL6(n,n,n);}
U BIG(U n,U d){U i;W(d--){U j=n;n=0;W(j--)n++;F(i=0;i<18446744073709551615ULL;i++){n=Z0(n);n=M0(n,n);n=K0(n);n=A1(n);n=A4(n);n=A6(n);n=A8(n);n=B1(n);n=B3(n);n=B5(n);n=B7(n);n=B9(n);n=C2(n);n=C4(n);n=C6(n);n=C8(n);n=D2(n);n=D4(n);n=D6(n);n=D8(n);n=E2(n);n=E4(n);n=E6(n);n=E8(n);n=F2(n);n=F4(n);n=F6(n);n=F8(n);n=G2(n);n=G4(n);n=G6(n);n=G8(n);n=H2(n);n=H4(n);n=H6(n);n=H8(n);n=I2(n);n=I4(n);n=I6(n);n=I8(n);n=J2(n);n=J4(n);n=J6(n);n=J8(n);n=K2(n);n=K4(n);n=K6(n);n=K8(n);n=L2(n);n=L4(n);n=L6(n);n=L8(n);n=M2(n);n=M4(n);n=M6(n);n=M8(n);n=N2(n);n=N4(n);n=N6(n);n=N8(n);n=O2(n);n=O4(n);n=O6(n);n=O8(n);n=P2(n);n=P4(n);n=P6(n);n=P8(n);n=Q2(n);n=Q4(n);n=Q6(n);n=Q8(n);n=R2(n);n=R4(n);n=R6(n);n=R8(n);n=S2(n);n=S4(n);n=S6(n);n=S8(n);n=T2(n);n=T4(n);n=T6(n);n=T8(n);n=U2(n);n=U4(n);n=U6(n);n=U8(n);n=V2(n);n=V4(n);n=V6(n);n=V8(n);n=W2(n);n=W4(n);n=W6(n);n=W8(n);n=X2(n);n=X4(n);n=X6(n);n=X8(n);n=Y2(n);n=Y4(n);n=Y6(n);n=Y8(n);n=Z2(n);n=Z4(n);n=Z6(n);n=Z8(n);n=AAB(n);n=AAD(n);n=AAF(n);n=AAH(n);n=AAJ(n);n=AAL(n);n=AAN(n);n=AAP(n);n=AAR(n);n=AAT(n);n=AAV(n);n=AAX(n);n=AAZ(n);n=ABB(n);n=ABD(n);n=ABF(n);n=ABH(n);n=ABJ(n);n=ABL(n);n=ABN(n);n=ABP(n);n=ABR(n);n=ABT(n);n=ABV(n);n=ABX(n);n=ABZ(n);n=ACB(n);n=ACD(n);n=ACF(n);n=ACH(n);n=ACJ(n);n=ACL(n);n=ACN(n);n=ACP(n);n=ACR(n);n=ACT(n);n=ACV(n);n=ACX(n);n=ACZ(n);n=ADB(n);n=ADD(n);n=ADF(n);n=ADH(n);n=ADJ(n);n=ADL(n);n=ADN(n);n=ADP(n);n=ADR(n);n=ADT(n);n=ADV(n);n=ADX(n);n=ADZ(n);n=AEB(n);n=AED(n);n=AEF(n);n=AEH(n);n=AEJ(n);n=AEL(n);n=AEN(n);n=AEP(n);n=AER(n);n=AET(n);n=AEV(n);n=AEX(n);n=AEZ(n);n=GR3(n);n=GR5(n);n=GR7(n);n=CH3(n);n=CH5(n);n=CH7(n);n=FU2(n,n);n=FU5(n);n=FU7(n);n=HY3(n,n);n=HY6(n);n=HY8(n);n=TOWER3(n,n);n=TOWER6(n);n=TOWER8(n);n=SUPER4(n);n=SUPER6(n);n=MEGA4(n);n=MEGA6(n);n=ULTRA3(n);n=ULTRA5(n);n=ULTRA7(n);n=OMEGA3(n);n=OMEGA5(n);n=OMEGA7(n);n=INFINITY3(n);n=INFINITY5(n);n=INFINITY7(n);n=COSMIC3(n);n=COSMIC5(n);n=COSMIC7(n);n=DIVINE3(n);n=DIVINE5(n);n=DIVINE7(n);n=TRANSCEND3(n);n=TRANSCEND5(n);n=TRANSCEND7(n);n=ABSOLUTE3(n);n=ABSOLUTE5(n);n=ABSOLUTE7(n);n=ETERNAL3(n);n=ETERNAL5(n);n=ETERNAL7(n);n=BEYOND3(n);n=BEYOND5(n);n=BEYOND7(n);n=ULTIMATE3(n);n=ULTIMATE5(n);n=ULTIMATE7(n);n=FINAL3(n);n=FINAL5(n);n=FINAL7(n);}}R n;}
U RIJAM(U n){
 U x = A(n, n); U c = 0;
 W(c < 128) {x = V0(x); c++;} W(c<256){x=S0(x);c++;}W(c<384){x=K0(x);c++;} 
 W(c<512){x=A1(x);c++;}W(c<640){x=A4(x);c++;}W(c<768){x=A6(x);c++;}
 W(c<896){x=A8(x);c++;}W(c<1024){x=B1(x);c++;}W(c<1152){x=B3(x);c++;}
 W(c<1280){x=B5(x);c++;}W(c<1408){x=B7(x);c++;}W(c<1536){x=B9(x);c++;}
 W(c<1664){x=C2(x);c++;}W(c<1792){x=C4(x);c++;}W(c<1920){x=C6(x);c++;}
 W(c<2048){x=C8(x);c++;}W(c<2176){x=D2(x);c++;}W(c<2304){x=D4(x);c++;}
 W(c<2432){x=D6(x);c++;}W(c<2560){x=D8(x);c++;}W(c<2688){x=E2(x);c++;}
 W(c<2816){x=E4(x);c++;}W(c<2944){x=E6(x);c++;}W(c<3072){x=E8(x);c++;}
 W(c<3200){x=F2(x);c++;}W(c<3328){x=F4(x);c++;}W(c<3456){x=F6(x);c++;}
 W(c<3584){x=F8(x);c++;}W(c<3712){x=G2(x);c++;}W(c<3840){x=G4(x);c++;}
 W(c<3968){x=G6(x);c++;}W(c<4096){x=G8(x);c++;}W(c<4224){x=H2(x);c++;}
 W(c<4352){x=H4(x);c++;}W(c<4480){x=H6(x);c++;}W(c<4608){x=H8(x);c++;}
 W(c<4736){x=I2(x);c++;}W(c<4864){x=I4(x);c++;}W(c<4992){x=I6(x);c++;}
 W(c<5120){x=I8(x);c++;}W(c<5248){x=J2(x);c++;}W(c<5376){x=J4(x);c++;}
 W(c<5504){x=J6(x);c++;}W(c<5632){x=J8(x);c++;}W(c<5760){x=K2(x);c++;}
 W(c<5888){x=K4(x);c++;}W(c<6016){x=K6(x);c++;}W(c<6144){x=K8(x);c++;}
 W(c<6272){x=L2(x);c++;}W(c<6400){x=L4(x);c++;}W(c<6528){x=L6(x);c++;}
 W(c<6656){x=L8(x);c++;}W(c<6784){x=M2(x);c++;}W(c<6912){x=M4(x);c++;}
 W(c<7040){x=M6(x);c++;}W(c<7168){x=M8(x);c++;}W(c<7296){x=N2(x);c++;}
 W(c<7424){x=N4(x);c++;}W(c<7552){x=N6(x);c++;}W(c<7680){x=N8(x);c++;}
 W(c<7808){x=O2(x);c++;}W(c<7936){x=O4(x);c++;}W(c<8064){x=O6(x);c++;}
 W(c<8192){x=O8(x);c++;}W(c<8320){x=P2(x);c++;}W(c<8448){x=P4(x);c++;}
 W(c<8576){x=P6(x);c++;}W(c<8704){x=P8(x);c++;}W(c<8832){x=Q2(x);c++;}
 W(c<8960){x=Q4(x);c++;}W(c<9088){x=Q6(x);c++;}W(c<9216){x=Q8(x);c++;}
 W(c<9344){x=R2(x);c++;}W(c<9472){x=R4(x);c++;}W(c<9600){x=R6(x);c++;}
 W(c<9728){x=R8(x);c++;}W(c<9856){x=S2(x);c++;}W(c<9984){x=S4(x);c++;}
 W(c<10112){x=S6(x);c++;}W(c<10240){x=S8(x);c++;}W(c<10368){x=T2(x);c++;}
 W(c<10496){x=T4(x);c++;}W(c<10624){x=T6(x);c++;}W(c<10752){x=T8(x);c++;}
 W(c<10880){x=U2(x);c++;}W(c<11008){x=U4(x);c++;}W(c<11136){x=U6(x);c++;}
 W(c<11264){x=U8(x);c++;}W(c<11392){x=V2(x);c++;}W(c<11520){x=V4(x);c++;}
 W(c<11648){x=V6(x);c++;}W(c<11776){x=V8(x);c++;}W(c<11904){x=W2(x);c++;}
 W(c<12032){x=W4(x);c++;}W(c<12160){x=W6(x);c++;}W(c<12288){x=W8(x);c++;}
 W(c<12416){x=X2(x);c++;}W(c<12544){x=X4(x);c++;}W(c<12672){x=X6(x);c++;}
 W(c<12800){x=X8(x);c++;}W(c<12928){x=Y2(x);c++;}W(c<13056){x=Y4(x);c++;}
 W(c<13184){x=Y6(x);c++;}W(c<13312){x=Y8(x);c++;}W(c<13440){x=Z2(x);c++;}
 W(c<13568){x=Z4(x);c++;}W(c<13696){x=Z6(x);c++;}W(c<13824){x=Z8(x);c++;}
 W(c<13952){x=AAB(x);c++;}W(c<14080){x=AAD(x);c++;}W(c<14208){x=AAF(x);c++;}
 W(c<14336){x=AAH(x);c++;}W(c<14464){x=AAJ(x);c++;}W(c<14592){x=AAL(x);c++;}
 W(c<14720){x=AAN(x);c++;}W(c<14848){x=AAP(x);c++;}W(c<14976){x=AAR(x);c++;}
 W(c<15104){x=AAT(x);c++;}W(c<15232){x=AAV(x);c++;}W(c<15360){x=AAX(x);c++;}
 W(c<15488){x=AAZ(x);c++;}W(c<15616){x=ABB(x);c++;}W(c<15744){x=ABD(x);c++;}
 W(c<15872){x=ABF(x);c++;}W(c<16000){x=ABH(x);c++;}W(c<16128){x=ABJ(x);c++;}
 W(c<16256){x=ABL(x);c++;}W(c<16384){x=ABN(x);c++;}W(c<16512){x=ABP(x);c++;}
 W(c<16640){x=ABR(x);c++;}W(c<16768){x=ABT(x);c++;}W(c<16896){x=ABV(x);c++;}
 W(c<17024){x=ABX(x);c++;}W(c<17152){x=ABZ(x);c++;}W(c<17280){x=ACB(x);c++;}
 W(c<17408){x=ACD(x);c++;}W(c<17536){x=ACF(x);c++;}W(c<17664){x=ACH(x);c++;}
 W(c<17792){x=ACJ(x);c++;}W(c<17920){x=ACL(x);c++;}W(c<18048){x=ACN(x);c++;}
 W(c<18176){x=ACP(x);c++;}W(c<18304){x=ACR(x);c++;}W(c<18432){x=ACT(x);c++;}
 W(c<18560){x=ACV(x);c++;}W(c<18688){x=ACX(x);c++;}W(c<18816){x=ACZ(x);c++;}
 W(c<18944){x=ADB(x);c++;}W(c<19072){x=ADD(x);c++;}W(c<19200){x=ADF(x);c++;}
 W(c<19328){x=ADH(x);c++;}W(c<19456){x=ADJ(x);c++;}W(c<19584){x=ADL(x);c++;}
 W(c<19712){x=ADN(x);c++;}W(c<19840){x=ADP(x);c++;}W(c<19968){x=ADR(x);c++;}
 W(c<20096){x=ADT(x);c++;}W(c<20224){x=ADV(x);c++;}W(c<20352){x=ADX(x);c++;}
 W(c<20480){x=ADZ(x);c++;}W(c<20608){x=AEB(x);c++;}W(c<20736){x=AED(x);c++;}
 W(c<20864){x=AEF(x);c++;}W(c<20992){x=AEH(x);c++;}W(c<21120){x=AEJ(x);c++;}
 W(c<21248){x=AEL(x);c++;}W(c<21376){x=AEN(x);c++;}W(c<21504){x=AEP(x);c++;}
 W(c<21632){x=AER(x);c++;}W(c<21760){x=AET(x);c++;}W(c<21888){x=AEV(x);c++;}
 W(c<22016){x=AEX(x);c++;}W(c<22144){x=AEZ(x);c++;}
 W(c<22272){x=GR3(x);c++;}W(c<22400){x=GR5(x);c++;}W(c<22528){x=GR7(x);c++;}
 W(c<22656){x=CH3(x);c++;}W(c<22784){x=CH5(x);c++;}W(c<22912){x=CH7(x);c++;}
 W(c<23040){x=FU2(x,x);c++;}W(c<23168){x=FU5(x);c++;}W(c<23296){x=FU7(x);c++;}
 W(c<23424){x=HY3(x,x);c++;}W(c<23552){x=HY6(x);c++;}W(c<23680){x=HY8(x);c++;}
 W(c<23808){x=TOWER3(x,x);c++;}W(c<23936){x=TOWER6(x);c++;}W(c<24064){x=TOWER8(x);c++;}
 W(c<24192){x=SUPER4(x);c++;}W(c<24320){x=SUPER6(x);c++;}
 W(c<24576){x=MEGA4(x);c++;}W(c<24704){x=MEGA6(x);c++;}
 W(c<24960){x=ULTRA3(x);c++;}W(c<25088){x=ULTRA5(x);c++;}W(c<25216){x=ULTRA7(x);c++;}
 W(c<25344){x=OMEGA3(x);c++;}W(c<25472){x=OMEGA5(x);c++;}W(c<25600){x=OMEGA7(x);c++;}
 W(c<25728){x=INFINITY3(x);c++;}W(c<25856){x=INFINITY5(x);c++;}W(c<25984){x=INFINITY7(x);c++;}
 W(c<26112){x=COSMIC3(x);c++;}W(c<26240){x=COSMIC5(x);c++;}W(c<26368){x=COSMIC7(x);c++;}
 W(c<26496){x=DIVINE3(x);c++;}W(c<26624){x=DIVINE5(x);c++;}W(c<26752){x=DIVINE7(x);c++;}
 W(c<26880){x=TRANSCEND3(x);c++;}W(c<27008){x=TRANSCEND5(x);c++;}W(c<27136){x=TRANSCEND7(x);c++;}
 W(c<27264){x=ABSOLUTE3(x);c++;}W(c<27392){x=ABSOLUTE5(x);c++;}W(c<27520){x=ABSOLUTE7(x);c++;}
 W(c<27648){x=ETERNAL3(x);c++;}W(c<27776){x=ETERNAL5(x);c++;}W(c<27904){x=ETERNAL7(x);c++;}
 W(c<28032){x=BEYOND3(x);c++;}W(c<28160){x=BEYOND5(x);c++;}W(c<28288){x=BEYOND7(x);c++;}
 W(c<28416){x=ULTIMATE3(x);c++;}W(c<28544){x=ULTIMATE5(x);c++;}W(c<28672){x=ULTIMATE7(x);c++;}
 W(c<28800){x=FINAL3(x);c++;}W(c<28928){x=FINAL5(x);c++;}W(c<29056){x=FINAL7(x);c++;}
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,9999999999999999999ULL);
 x=BIG(x,9999999);x=BIG(x,99999);x=BIG(x,99999);x=BIG(x,99999);
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
 x=BIG(x,99999);x=BIG(x,99999);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 R x;
}
int main(int c,char**v){U n=c>1?strtoull(v[1],0,10):1;printf("%llu\n",RIJAM(n));R 0;}