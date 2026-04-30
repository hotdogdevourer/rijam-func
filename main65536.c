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
U TW(U n,U k){U r=n;W(k--)r=UU(r,r,r);R r;}
U TW2(U n){R TW(n,n);}
U TW3(U n,U d){if(!d)R TW2(n);R TW3(TW3(n,d-1),d-1);}
U TW4(U n){R TW3(n,n);}
U TW5(U n,U d){if(!d)R TW4(n);U v=TW5(n,d-1);R TW5(v,d-1);}
U TW6(U n){R TW5(n,n);}
U TW7(U n,U d,U e){if(!e)R TW6(n);R TW7(TW7(n,d,e-1),d,e-1);}
U TW8(U n){R TW7(n,n,n);}
U SP(U n,U k){if(!k)R n;R SP(SP(n,k-1),k-1);}
U SP2(U n){R SP(n,n);}
U SP3(U n,U d){if(!d)R SP2(n);R SP3(SP3(n,d-1),d-1);}
U SP4(U n){R SP3(n,n);}
U SP5(U n,U d){if(!d)R SP4(n);U v=SP5(n,d-1);R SP5(v,d-1);}
U SP6(U n){R SP5(n,n);}
U SP7(U n,U d,U e){if(!e)R SP6(n);R SP7(SP7(n,d,e-1),d,e-1);}
U MG(U n,U k,U d){if(!d)R SP4(n);if(!k)R n;R MG(MG(n,k-1,d),k-1,d);}
U MG2(U n){R MG(n,n,n);}
U MG3(U n,U d){if(!d)R MG2(n);R MG3(MG3(n,d-1),d-1);}
U MG4(U n){R MG3(n,n);}
U MG5(U n,U d){if(!d)R MG4(n);U v=MG5(n,d-1);R MG5(v,d-1);}
U MG6(U n){R MG5(n,n);}
U MG7(U n,U d,U e){if(!e)R MG6(n);R MG7(MG7(n,d,e-1),d,e-1);}
U UR(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=Z0(x);x=M0(x,x);x=K0(x);}R x;}
U UR2(U n,U d){if(!d)R UR(n);R UR2(UR2(n,d-1),d-1);}
U UR3(U n){R UR2(n,n);}
U UR4(U n,U d){if(!d)R UR3(n);U v=UR4(n,d-1);R UR4(v,d-1);}
U UR5(U n){R UR4(n,n);}
U UR6(U n,U d,U e){if(!e)R UR5(n);R UR6(UR6(n,d,e-1),d,e-1);}
U UR7(U n){R UR6(n,n,n);}
U O_(U n){U x=n;W(x)x=Z0(x);R x;}
U O_2(U n,U d){if(!d)R O_(n);R O_2(O_2(n,d-1),d-1);}
U O_3(U n){R O_2(n,n);}
U O_4(U n,U d){if(!d)R O_3(n);U v=O_4(n,d-1);R O_4(v,d-1);}
U O_5(U n){R O_4(n,n);}
U O_6(U n,U d,U e){if(!e)R O_5(n);R O_6(O_6(n,d,e-1),d,e-1);}
U O_7(U n){R O_6(n,n,n);}
U I_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=SP4(x);x=MG4(x);x=UR3(x);x=O_3(x);x=GR5(x);x=CH7(x);x=FU7(x);x=HY8(x);x=TW8(x);}R x;}
U I_2(U n,U d){if(!d)R I_(n);R I_2(I_2(n,d-1),d-1);}
U I_3(U n){R I_2(n,n);}
U I_4(U n,U d){if(!d)R I_3(n);U v=I_4(n,d-1);R I_4(v,d-1);}
U I_5(U n){R I_4(n,n);}
U I_6(U n,U d,U e){if(!e)R I_5(n);R I_6(I_6(n,d,e-1),d,e-1);}
U I_7(U n){R I_6(n,n,n);}
U MI(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=I_3(x);x=ABP(x);x=AAV(x);x=AAN(x);}R x;}
U MI2(U n,U d){if(!d)R MI(n);R MI2(MI2(n,d-1),d-1);}
U MI3(U n){R MI2(n,n);}
U MI4(U n,U d){if(!d)R MI3(n);U v=MI4(n,d-1);R MI4(v,d-1);}
U MI5(U n){R MI4(n,n);}
U MI6(U n,U d,U e){if(!e)R MI5(n);R MI6(MI6(n,d,e-1),d,e-1);}
U MI7(U n){R MI6(n,n,n);}
U D_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++)x=MI3(x);R x;}
U D_2(U n,U d){if(!d)R D_(n);R D_2(D_2(n,d-1),d-1);}
U D_3(U n){R D_2(n,n);}
U D_4(U n,U d){if(!d)R D_3(n);U v=D_4(n,d-1);R D_4(v,d-1);}
U D_5(U n){R D_4(n,n);}
U D_6(U n,U d,U e){if(!e)R D_5(n);R D_6(D_6(n,d,e-1),d,e-1);}
U D_7(U n){R D_6(n,n,n);}
U E_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=D_3(x);x=MI3(x);x=I_3(x);}R x;}
U E_2(U n,U d){if(!d)R E_(n);R E_2(E_2(n,d-1),d-1);}
U E_3(U n){R E_2(n,n);}
U E_4(U n,U d){if(!d)R E_3(n);U v=E_4(n,d-1);R E_4(v,d-1);}
U E_5(U n){R E_4(n,n);}
U E_6(U n,U d,U e){if(!e)R E_5(n);R E_6(E_6(n,d,e-1),d,e-1);}
U E_7(U n){R E_6(n,n,n);}
U S_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++)x=E_3(x);R x;}
U S_2(U n,U d){if(!d)R S_(n);R S_2(S_2(n,d-1),d-1);}
U S_3(U n){R S_2(n,n);}
U S_4(U n,U d){if(!d)R S_3(n);U v=S_4(n,d-1);R S_4(v,d-1);}
U S_5(U n){R S_4(n,n);}
U S_6(U n,U d,U e){if(!e)R S_5(n);R S_6(S_6(n,d,e-1),d,e-1);}
U S_7(U n){R S_6(n,n,n);}
U R_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++)x=S_3(x);R x;}
U R_2(U n,U d){if(!d)R R_(n);R R_2(R_2(n,d-1),d-1);}
U R_3(U n){R R_2(n,n);}
U R_4(U n,U d){if(!d)R R_3(n);U v=R_4(n,d-1);R R_4(v,d-1);}
U R_5(U n){R R_4(n,n);}
U R_6(U n,U d,U e){if(!e)R R_5(n);R R_6(R_6(n,d,e-1),d,e-1);}
U R_7(U n){R R_6(n,n,n);}
U Y_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=R_3(x);x=S_3(x);x=E_3(x);x=D_3(x);}R x;}
U Y_2(U n,U d){if(!d)R Y_(n);R Y_2(Y_2(n,d-1),d-1);}
U Y_3(U n){R Y_2(n,n);}
U Y_4(U n,U d){if(!d)R Y_3(n);U v=Y_4(n,d-1);R Y_4(v,d-1);}
U Y_5(U n){R Y_4(n,n);}
U Y_6(U n,U d,U e){if(!e)R Y_5(n);R Y_6(Y_6(n,d,e-1),d,e-1);}
U Y_7(U n){R Y_6(n,n,n);}
U L_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++)x=Y_3(x);R x;}
U L_2(U n,U d){if(!d)R L_(n);R L_2(L_2(n,d-1),d-1);}
U L_3(U n){R L_2(n,n);}
U L_4(U n,U d){if(!d)R L_3(n);U v=L_4(n,d-1);R L_4(v,d-1);}
U L_5(U n){R L_4(n,n);}
U L_6(U n,U d,U e){if(!e)R L_5(n);R L_6(L_6(n,d,e-1),d,e-1);}
U L_7(U n){R L_6(n,n,n);}
U F_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=L_3(x);x=Y_3(x);x=R_3(x);x=S_3(x);}R x;}
U F_2(U n,U d){if(!d)R F_(n);R F_2(F_2(n,d-1),d-1);}
U F_3(U n){R F_2(n,n);}
U F_4(U n,U d){if(!d)R F_3(n);U v=F_4(n,d-1);R F_4(v,d-1);}
U F_5(U n){R F_4(n,n);}
U F_6(U n,U d,U e){if(!e)R F_5(n);R F_6(F_6(n,d,e-1),d,e-1);}
U F_7(U n){R F_6(n,n,n);}
U SP_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=F_7(x);x=Z8(x);x=AEZ(x);x=F_7(x);x=Y_7(x);x=L_7(x);}R x;}
U SP_2(U n,U d){if(!d)R SP_(n);R SP_2(SP_2(n,d-1),d-1);}
U SP_3(U n){R SP_2(n,n);}
U SP_4(U n,U d){if(!d)R SP_3(n);U v=SP_4(n,d-1);R SP_4(v,d-1);}
U SP_5(U n){R SP_4(n,n);}
U SP_6(U n,U d,U e){if(!e)R SP_5(n);R SP_6(SP_6(n,d,e-1),d,e-1);}
U SP_7(U n){R SP_6(n,n,n);}
U B_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=SP_3(x);x=SP_7(x);x=AEZ(x);x=F_7(x);}R x;}
U B_2(U n,U d){if(!d)R B_(n);R B_2(B_2(n,d-1),d-1);}
U B_3(U n){R B_2(n,n);}
U B_4(U n,U d){if(!d)R B_3(n);U v=B_4(n,d-1);R B_4(v,d-1);}
U B_5(U n){R B_4(n,n);}
U B_6(U n,U d,U e){if(!e)R B_5(n);R B_6(B_6(n,d,e-1),d,e-1);}
U B_7(U n){R B_6(n,n,n);}
U QU_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=B_3(x);x=SP_3(x);x=B_7(x);x=F_7(x);}R x;}
U QU_2(U n,U d){if(!d)R QU_(n);R QU_2(QU_2(n,d-1),d-1);}
U QU_3(U n){R QU_2(n,n);}
U QU_4(U n,U d){if(!d)R QU_3(n);U v=QU_4(n,d-1);R QU_4(v,d-1);}
U QU_5(U n){R QU_4(n,n);}
U QU_6(U n,U d,U e){if(!e)R QU_5(n);R QU_6(QU_6(n,d,e-1),d,e-1);}
U QU_7(U n){R QU_6(n,n,n);}
U BB_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=QU_3(x);x=QU_7(x);x=B_3(x);x=SP_3(x);x=F_7(x);x=Y_7(x);}R x;}
U BB_2(U n,U d){if(!d)R BB_(n);R BB_2(BB_2(n,d-1),d-1);}
U BB_3(U n){R BB_2(n,n);}
U BB_4(U n,U d){if(!d)R BB_3(n);U v=BB_4(n,d-1);R BB_4(v,d-1);}
U BB_5(U n){R BB_4(n,n);}
U BB_6(U n,U d,U e){if(!e)R BB_5(n);R BB_6(BB_6(n,d,e-1),d,e-1);}
U BB_7(U n){R BB_6(n,n,n);}
U MV_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=BB_3(x);x=QU_3(x);x=B_3(x);x=SP_3(x);x=BB_7(x);}R x;}
U MV_2(U n,U d){if(!d)R MV_(n);R MV_2(MV_2(n,d-1),d-1);}
U MV_3(U n){R MV_2(n,n);}
U MV_4(U n,U d){if(!d)R MV_3(n);U v=MV_4(n,d-1);R MV_4(v,d-1);}
U MV_5(U n){R MV_4(n,n);}
U MV_6(U n,U d,U e){if(!e)R MV_5(n);R MV_6(MV_6(n,d,e-1),d,e-1);}
U MV_7(U n){R MV_6(n,n,n);}
U OV_(U n){U x=n;F(U i=0;i<18446744073709551615ULL;i++){x=MV_3(x);x=BB_3(x);x=QU_3(x);x=MV_7(x);x=F_7(x);x=L_7(x);}R x;}
U OV_2(U n,U d){if(!d)R OV_(n);R OV_2(OV_2(n,d-1),d-1);}
U OV_3(U n){R OV_2(n,n);}
U OV_4(U n,U d){if(!d)R OV_3(n);U v=OV_4(n,d-1);R OV_4(v,d-1);}
U OV_5(U n){R OV_4(n,n);}
U OV_6(U n,U d,U e){if(!e)R OV_5(n);R OV_6(OV_6(n,d,e-1),d,e-1);}
U OV_7(U n){R OV_6(n,n,n);}
U HH(U m,U n,U p){if(p==1)R A(m,n);if(n==1)R m;R HH(m,HH(m,n-1,p),p-1);}
U HHH(U n){R HH(n,n,n);}
U JJ(U a,U b,U c,U d){if(d==1)R HH(a,b,c);if(c==1)R a;R JJ(a,JJ(a,b,c-1,d),c,d-1);}
U JJJ(U n){R JJ(n,n,n,n);}
U KK(U a,U b,U c,U d,U e){if(e==1)R JJ(a,b,c,d);if(d==1)R a;R KK(a,KK(a,b,c,d-1,e),c,d,e-1);}
U KKK(U n){R KK(n,n,n,n,n);}
U LL(U a,U b,U c,U d,U e,U f){if(f==1)R KK(a,b,c,d,e);if(e==1)R a;R LL(a,LL(a,b,c,d,e-1,f),c,d,e,f-1);}
U LLL(U n){R LL(n,n,n,n,n,n);}
U MM(U a,U b,U c,U d,U e,U f,U g){if(g==1)R LL(a,b,c,d,e,f);if(f==1)R a;R MM(a,MM(a,b,c,d,e,f-1,g),c,d,e,f,g-1);}
U MMM(U n){R MM(n,n,n,n,n,n,n);}
U NN(U a,U b,U c,U d,U e,U f,U g,U h){if(h==1)R MM(a,b,c,d,e,f,g);if(g==1)R a;R NN(a,NN(a,b,c,d,e,f,g-1,h),c,d,e,f,g,h-1);}
U NNN(U n){R NN(n,n,n,n,n,n,n,n);}
U OO(U a,U b,U c,U d,U e,U f,U g,U h,U i){if(i==1)R NN(a,b,c,d,e,f,g,h);if(h==1)R a;R OO(a,OO(a,b,c,d,e,f,g,h-1,i),c,d,e,f,g,h,i-1);}
U OOO(U n){R OO(n,n,n,n,n,n,n,n,n);}
U PP(U n,U k){U r=n;W(k--)r=HHH(r);R r;}
U PPP(U n){R PP(n,n);}
U QQ(U n,U k){U r=n;W(k--)r=JJJ(r);R r;}
U QQQ(U n){R QQ(n,n);}
U RR(U n,U k){U r=n;W(k--)r=KKK(r);R r;}
U RRR(U n){R RR(n,n);}
U SS(U n,U k){U r=n;W(k--)r=LLL(r);R r;}
U SSS(U n){R SS(n,n);}
U TT(U n,U k){U r=n;W(k--)r=MMM(r);R r;}
U TTT(U n){R TT(n,n);}
U UU2(U n,U k){U r=n;W(k--)r=NNN(r);R r;}
U UUU(U n){R UU2(n,n);}
U VV(U n,U k){U r=n;W(k--)r=OOO(r);R r;}
U VVV(U n){R VV(n,n);}
U WW(U n,U d){if(!d)R VVV(n);U v=WW(n,d-1);R WW(v,d-1);}
U WWW(U n){R WW(n,n);}
U XX(U n,U d,U e){if(!e)R WWW(n);R XX(XX(n,d,e-1),d,e-1);}
U XXX(U n){R XX(n,n,n);}
U YY(U n,U d){U r=n;W(d--)r=XXX(r);R r;}
U YYY(U n){R YY(n,n);}
U ZZ(U n,U d,U e){if(!e)R YYY(n);R ZZ(ZZ(n,d,e-1),d,e-1);}
U ZZZ(U n){R ZZ(n,n,n);}
U AAA(U n){R ZZZ(n);}
U BBB(U n,U d){if(!d)R AAA(n);U v=BBB(n,d-1);R BBB(v,d-1);}
U CCC(U n){R BBB(n,n);}
U DDD(U n,U d,U e){if(!e)R CCC(n);R DDD(DDD(n,d,e-1),d,e-1);}
U EEE(U n){R DDD(n,n,n);}
U FFF(U n,U d){if(!d)R EEE(n);U v=FFF(n,d-1);R FFF(v,d-1);}
U GGG(U n){R FFF(n,n);}
U HHH2(U n,U d,U e){if(!e)R GGG(n);R HHH2(HHH2(n,d,e-1),d,e-1);}
U III(U n){R HHH2(n,n,n);}
U JJJ2(U n,U d){if(!d)R III(n);U v=JJJ2(n,d-1);R JJJ2(v,d-1);}
U KKK2(U n){R JJJ2(n,n);}
U LLL2(U n,U d,U e){if(!e)R KKK2(n);R LLL2(LLL2(n,d,e-1),d,e-1);}
U MMM2(U n){R LLL2(n,n,n);}
U NNN2(U n,U d){if(!d)R MMM2(n);U v=NNN2(n,d-1);R NNN2(v,d-1);}
U OOO2(U n){R NNN2(n,n);}
U PPP2(U n,U d,U e){if(!e)R OOO2(n);R PPP2(PPP2(n,d,e-1),d,e-1);}
U QQQ2(U n){R PPP2(n,n,n);}
U RRR2(U n,U d){if(!d)R QQQ2(n);U v=RRR2(n,d-1);R RRR2(v,d-1);}
U SSS2(U n){R RRR2(n,n);}
U TTT2(U n,U d,U e){if(!e)R SSS2(n);R TTT2(TTT2(n,d,e-1),d,e-1);}
U UUU2(U n){R TTT2(n,n,n);}
U VVV2(U n){R UUU2(n);}
U WWW2(U n,U d){if(!d)R VVV2(n);U v=WWW2(n,d-1);R WWW2(v,d-1);}
U XXX2(U n){R WWW2(n,n);}
U YYY2(U n,U d,U e){if(!e)R XXX2(n);R YYY2(YYY2(n,d,e-1),d,e-1);}
U ZZZ2(U n){R YYY2(n,n,n);}
U AAAA(U n){R ZZZ2(n);}
U BBBB(U n,U d){if(!d)R AAAA(n);U v=BBBB(n,d-1);R BBBB(v,d-1);}
U CCCC(U n){R BBBB(n,n);}
U DDDD(U n,U d,U e){if(!e)R CCCC(n);R DDDD(DDDD(n,d,e-1),d,e-1);}
U EEEE(U n){R DDDD(n,n,n);}
U FFFF(U n,U d){if(!d)R EEEE(n);U v=FFFF(n,d-1);R FFFF(v,d-1);}
U GGGG(U n){R FFFF(n,n);}
U HHHH(U n,U d,U e){if(!e)R GGGG(n);R HHHH(HHHH(n,d,e-1),d,e-1);}
U IIII(U n){R HHHH(n,n,n);}
U JJJJ(U n,U d){if(!d)R IIII(n);U v=JJJJ(n,d-1);R JJJJ(v,d-1);}
U KKKK(U n){R JJJJ(n,n);}
U LLLL(U n,U d,U e){if(!e)R KKKK(n);R LLLL(LLLL(n,d,e-1),d,e-1);}
U MMMM(U n){R LLLL(n,n,n);}
U NNNN(U n,U d){if(!d)R MMMM(n);U v=NNNN(n,d-1);R NNNN(v,d-1);}
U OOOO(U n){R NNNN(n,n);}
U PPPP(U n,U d,U e){if(!e)R OOOO(n);R PPPP(PPPP(n,d,e-1),d,e-1);}
U QQQQ(U n){R PPPP(n,n,n);}
U RRRR(U n,U d){if(!d)R QQQQ(n);U v=RRRR(n,d-1);R RRRR(v,d-1);}
U SSSS(U n){R RRRR(n,n);}
U TTTT(U n,U d,U e){if(!e)R SSSS(n);R TTTT(TTTT(n,d,e-1),d,e-1);}
U UUUU(U n){R TTTT(n,n,n);}
U VVVV(U n){R UUUU(n);}
U WWWW(U n,U d){if(!d)R VVVV(n);U v=WWWW(n,d-1);R WWWW(v,d-1);}
U XXXX(U n){R WWWW(n,n);}
U YYYY(U n,U d,U e){if(!e)R XXXX(n);R YYYY(YYYY(n,d,e-1),d,e-1);}
U ZZZZ(U n){R YYYY(n,n,n);}
U _0(U n){R ZZZZ(n);}
U _1(U n,U d){if(!d)R _0(n);U v=_1(n,d-1);R _1(v,d-1);}
U _2(U n){R _1(n,n);}
U _3(U n,U d,U e){if(!e)R _2(n);R _3(_3(n,d,e-1),d,e-1);}
U _4(U n){R _3(n,n,n);}
U _5(U n,U d){if(!d)R _4(n);U v=_5(n,d-1);R _5(v,d-1);}
U _6(U n){R _5(n,n);}
U _7(U n,U d,U e){if(!e)R _6(n);R _7(_7(n,d,e-1),d,e-1);}
U _8(U n){R _7(n,n,n);}
U _9(U n,U d){if(!d)R _8(n);U v=_9(n,d-1);R _9(v,d-1);}
U _10(U n){R _9(n,n);}
U _11(U n,U d,U e){if(!e)R _10(n);R _11(_11(n,d,e-1),d,e-1);}
U _12(U n){R _11(n,n,n);}
U _13(U n,U d){if(!d)R _12(n);U v=_13(n,d-1);R _13(v,d-1);}
U _14(U n){R _13(n,n);}
U _15(U n,U d,U e){if(!e)R _14(n);R _15(_15(n,d,e-1),d,e-1);}
U _16(U n){R _15(n,n,n);}
U _17(U n,U d){if(!d)R _16(n);U v=_17(n,d-1);R _17(v,d-1);}
U _18(U n){R _17(n,n);}
U _19(U n,U d,U e){if(!e)R _18(n);R _19(_19(n,d,e-1),d,e-1);}
U _20(U n){R _19(n,n,n);}
U _21(U n,U d){if(!d)R _20(n);U v=_21(n,d-1);R _21(v,d-1);}
U _22(U n){R _21(n,n);}
U _23(U n,U d,U e){if(!e)R _22(n);R _23(_23(n,d,e-1),d,e-1);}
U _24(U n){R _23(n,n,n);}
U _25(U n,U d){if(!d)R _24(n);U v=_25(n,d-1);R _25(v,d-1);}
U _26(U n){R _25(n,n);}
U _27(U n,U d,U e){if(!e)R _26(n);R _27(_27(n,d,e-1),d,e-1);}
U _28(U n){R _27(n,n,n);}
U _29(U n,U d){if(!d)R _28(n);U v=_29(n,d-1);R _29(v,d-1);}
U _30(U n){R _29(n,n);}
U _31(U n,U d,U e){if(!e)R _30(n);R _31(_31(n,d,e-1),d,e-1);}
U _32(U n){R _31(n,n,n);}
U _33(U n,U d){if(!d)R _32(n);U v=_33(n,d-1);R _33(v,d-1);}
U _34(U n){R _33(n,n);}
U _35(U n,U d,U e){if(!e)R _34(n);R _35(_35(n,d,e-1),d,e-1);}
U _36(U n){R _35(n,n,n);}
U _37(U n,U d){if(!d)R _36(n);U v=_37(n,d-1);R _37(v,d-1);}
U _38(U n){R _37(n,n);}
U _39(U n,U d,U e){if(!e)R _38(n);R _39(_39(n,d,e-1),d,e-1);}
U _40(U n){R _39(n,n,n);}
U _41(U n,U d){if(!d)R _40(n);U v=_41(n,d-1);R _41(v,d-1);}
U _42(U n){R _41(n,n);}
U _43(U n,U d,U e){if(!e)R _42(n);R _43(_43(n,d,e-1),d,e-1);}
U _44(U n){R _43(n,n,n);}
U _45(U n,U d){if(!d)R _44(n);U v=_45(n,d-1);R _45(v,d-1);}
U _46(U n){R _45(n,n);}
U _47(U n,U d,U e){if(!e)R _46(n);R _47(_47(n,d,e-1),d,e-1);}
U _48(U n){R _47(n,n,n);}
U _49(U n,U d){if(!d)R _48(n);U v=_49(n,d-1);R _49(v,d-1);}
U _50(U n){R _49(n,n);}
U _51(U n,U d,U e){if(!e)R _50(n);R _51(_51(n,d,e-1),d,e-1);}
U _52(U n){R _51(n,n,n);}
U _53(U n,U d){if(!d)R _52(n);U v=_53(n,d-1);R _53(v,d-1);}
U _54(U n){R _53(n,n);}
U _55(U n,U d,U e){if(!e)R _54(n);R _55(_55(n,d,e-1),d,e-1);}
U _56(U n){R _55(n,n,n);}
U _57(U n,U d){if(!d)R _56(n);U v=_57(n,d-1);R _57(v,d-1);}
U _58(U n){R _57(n,n);}
U _59(U n,U d,U e){if(!e)R _58(n);R _59(_59(n,d,e-1),d,e-1);}
U _60(U n){R _59(n,n,n);}
U _61(U n,U d){if(!d)R _60(n);U v=_61(n,d-1);R _61(v,d-1);}
U _62(U n){R _61(n,n);}
U _63(U n,U d,U e){if(!e)R _62(n);R _63(_63(n,d,e-1),d,e-1);}
U _64(U n){R _63(n,n,n);}
U _65(U n,U d){if(!d)R _64(n);U v=_65(n,d-1);R _65(v,d-1);}
U _66(U n){R _65(n,n);}
U _67(U n,U d,U e){if(!e)R _66(n);R _67(_67(n,d,e-1),d,e-1);}
U _68(U n){R _67(n,n,n);}
U _69(U n,U d){if(!d)R _68(n);U v=_69(n,d-1);R _69(v,d-1);}
U _70(U n){R _69(n,n);}
U _71(U n,U d,U e){if(!e)R _70(n);R _71(_71(n,d,e-1),d,e-1);}
U _72(U n){R _71(n,n,n);}
U _73(U n,U d){if(!d)R _72(n);U v=_73(n,d-1);R _73(v,d-1);}
U _74(U n){R _73(n,n);}
U _75(U n,U d,U e){if(!e)R _74(n);R _75(_75(n,d,e-1),d,e-1);}
U _76(U n){R _75(n,n,n);}
U _77(U n,U d){if(!d)R _76(n);U v=_77(n,d-1);R _77(v,d-1);}
U _78(U n){R _77(n,n);}
U _79(U n,U d,U e){if(!e)R _78(n);R _79(_79(n,d,e-1),d,e-1);}
U _80(U n){R _79(n,n,n);}
U _81(U n,U d){if(!d)R _80(n);U v=_81(n,d-1);R _81(v,d-1);}
U _82(U n){R _81(n,n);}
U _83(U n,U d,U e){if(!e)R _82(n);R _83(_83(n,d,e-1),d,e-1);}
U _84(U n){R _83(n,n,n);}
U _85(U n,U d){if(!d)R _84(n);U v=_85(n,d-1);R _85(v,d-1);}
U _86(U n){R _85(n,n);}
U _87(U n,U d,U e){if(!e)R _86(n);R _87(_87(n,d,e-1),d,e-1);}
U _88(U n){R _87(n,n,n);}
U _89(U n,U d){if(!d)R _88(n);U v=_89(n,d-1);R _89(v,d-1);}
U _90(U n){R _89(n,n);}
U _91(U n,U d,U e){if(!e)R _90(n);R _91(_91(n,d,e-1),d,e-1);}
U _92(U n){R _91(n,n,n);}
U _93(U n,U d){if(!d)R _92(n);U v=_93(n,d-1);R _93(v,d-1);}
U _94(U n){R _93(n,n);}
U _95(U n,U d,U e){if(!e)R _94(n);R _95(_95(n,d,e-1),d,e-1);}
U _96(U n){R _95(n,n,n);}
U _97(U n,U d){if(!d)R _96(n);U v=_97(n,d-1);R _97(v,d-1);}
U _98(U n){R _97(n,n);}
U _99(U n,U d,U e){if(!e)R _98(n);R _99(_99(n,d,e-1),d,e-1);}
U _100(U n){R _99(n,n,n);}
U _101(U n,U d){if(!d)R _100(n);U v=_101(n,d-1);R _101(v,d-1);}
U _102(U n){R _101(n,n);}
U _103(U n,U d,U e){if(!e)R _102(n);R _103(_103(n,d,e-1),d,e-1);}
U _104(U n){R _103(n,n,n);}
U _105(U n){R _104(n);}
U BIG(U n,U d){U i;W(d--){U j=n;n=0;W(j--)n++;F(i=0;i<18446744073709551615ULL;i++){n=Z0(n);n=M0(n,n);n=K0(n);n=A1(n);n=A4(n);n=A6(n);n=A8(n);n=B1(n);n=B3(n);n=B5(n);n=B7(n);n=B9(n);n=C2(n);n=C4(n);n=C6(n);n=C8(n);n=D2(n);n=D4(n);n=D6(n);n=D8(n);n=E2(n);n=E4(n);n=E6(n);n=E8(n);n=F2(n);n=F4(n);n=F6(n);n=F8(n);n=G2(n);n=G4(n);n=G6(n);n=G8(n);n=H2(n);n=H4(n);n=H6(n);n=H8(n);n=I2(n);n=I4(n);n=I6(n);n=I8(n);n=J2(n);n=J4(n);n=J6(n);n=J8(n);n=K2(n);n=K4(n);n=K6(n);n=K8(n);n=L2(n);n=L4(n);n=L6(n);n=L8(n);n=M2(n);n=M4(n);n=M6(n);n=M8(n);n=N2(n);n=N4(n);n=N6(n);n=N8(n);n=O2(n);n=O4(n);n=O6(n);n=O8(n);n=P2(n);n=P4(n);n=P6(n);n=P8(n);n=Q2(n);n=Q4(n);n=Q6(n);n=Q8(n);n=R2(n);n=R4(n);n=R6(n);n=R8(n);n=S2(n);n=S4(n);n=S6(n);n=S8(n);n=T2(n);n=T4(n);n=T6(n);n=T8(n);n=U2(n);n=U4(n);n=U6(n);n=U8(n);n=V2(n);n=V4(n);n=V6(n);n=V8(n);n=W2(n);n=W4(n);n=W6(n);n=W8(n);n=X2(n);n=X4(n);n=X6(n);n=X8(n);n=Y2(n);n=Y4(n);n=Y6(n);n=Y8(n);n=Z2(n);n=Z4(n);n=Z6(n);n=Z8(n);n=AAB(n);n=AAD(n);n=AAF(n);n=AAH(n);n=AAJ(n);n=AAL(n);n=AAN(n);n=AAP(n);n=AAR(n);n=AAT(n);n=AAV(n);n=AAX(n);n=AAZ(n);n=ABB(n);n=ABD(n);n=ABF(n);n=ABH(n);n=ABJ(n);n=ABL(n);n=ABN(n);n=ABP(n);n=ABR(n);n=ABT(n);n=ABV(n);n=ABX(n);n=ABZ(n);n=ACB(n);n=ACD(n);n=ACF(n);n=ACH(n);n=ACJ(n);n=ACL(n);n=ACN(n);n=ACP(n);n=ACR(n);n=ACT(n);n=ACV(n);n=ACX(n);n=ACZ(n);n=ADB(n);n=ADD(n);n=ADF(n);n=ADH(n);n=ADJ(n);n=ADL(n);n=ADN(n);n=ADP(n);n=ADR(n);n=ADT(n);n=ADV(n);n=ADX(n);n=ADZ(n);n=AEB(n);n=AED(n);n=AEF(n);n=AEH(n);n=AEJ(n);n=AEL(n);n=AEN(n);n=AEP(n);n=AER(n);n=AET(n);n=AEV(n);n=AEX(n);n=AEZ(n);n=GR3(n);n=GR5(n);n=GR7(n);n=CH3(n);n=CH5(n);n=CH7(n);n=FU3(n);n=FU5(n);n=FU7(n);n=HY4(n);n=HY6(n);n=HY8(n);n=TW4(n);n=TW6(n);n=TW8(n);n=SP4(n);n=SP6(n);n=MG4(n);n=MG6(n);n=UR3(n);n=UR5(n);n=UR7(n);n=O_3(n);n=O_5(n);n=O_7(n);n=I_3(n);n=I_5(n);n=I_7(n);n=MI3(n);n=MI5(n);n=MI7(n);n=D_3(n);n=D_5(n);n=D_7(n);n=E_3(n);n=E_5(n);n=E_7(n);n=S_3(n);n=S_5(n);n=S_7(n);n=R_3(n);n=R_5(n);n=R_7(n);n=Y_3(n);n=Y_5(n);n=Y_7(n);n=L_3(n);n=L_5(n);n=L_7(n);n=F_3(n);n=F_5(n);n=F_7(n);n=SP_3(n);n=SP_5(n);n=SP_7(n);n=B_3(n);n=B_5(n);n=B_7(n);n=QU_3(n);n=QU_5(n);n=QU_7(n);n=BB_3(n);n=BB_5(n);n=BB_7(n);n=MV_3(n);n=MV_5(n);n=MV_7(n);n=OV_3(n);n=OV_5(n);n=OV_7(n);n=HHH(n);n=JJJ(n);n=KKK(n);n=LLL(n);n=MMM(n);n=NNN(n);n=OOO(n);n=PPP(n);n=QQQ(n);n=RRR(n);n=SSS(n);n=TTT(n);n=UUU(n);n=VVV(n);n=WWW(n);n=XXX(n);n=YYY(n);n=ZZZ(n);n=AAA(n);n=CCC(n);n=EEE(n);n=GGG(n);n=III(n);n=KKK2(n);n=MMM2(n);n=OOO2(n);n=QQQ2(n);n=SSS2(n);n=UUU2(n);n=VVV2(n);n=WWW2(n, n);n=XXX2(n);n=YYY2(n, n, n);n=ZZZ2(n);n=AAAA(n);n=BBBB(n, n);n=CCCC(n);n=DDDD(n, n, n);n=EEEE(n);n=FFFF(n, n);n=GGGG(n);n=HHHH(n, n, n);n=IIII(n);n=JJJJ(n, n);n=KKKK(n);n=LLLL(n, n, n);n=MMMM(n);n=NNNN(n, n);n=OOOO(n);n=PPPP(n, n, n);n=QQQQ(n);n=RRRR(n, n);n=SSSS(n);n=TTTT(n, n, n);n=UUUU(n);n=VVVV(n);n=WWWW(n, n);n=XXXX(n);n=YYYY(n, n, n);n=ZZZZ(n);n=_0(n);n=_2(n);n=_4(n);n=_6(n);n=_8(n);n=_10(n);n=_12(n);n=_14(n);n=_16(n);n=_18(n);n=_20(n);n=_21(n, n);n=_22(n);n=_23(n, n, n);n=_24(n);n=_25(n, n);n=_26(n);n=_27(n, n, n);n=_28(n);n=_29(n, n);n=_30(n);n=_31(n, n, n);n=_32(n);n=_33(n, n);n=_34(n);n=_35(n, n, n);n=_36(n);n=_37(n, n);n=_38(n);n=_39(n, n, n);n=_40(n);n=_41(n, n);n=_42(n);n=_43(n, n, n);n=_44(n);n=_45(n, n);n=_46(n);n=_47(n, n, n);n=_48(n);n=_49(n, n);n=_50(n);n=_51(n, n, n);n=_52(n);n=_53(n, n);n=_54(n);n=_55(n, n, n);n=_56(n);n=_57(n, n);n=_58(n);n=_59(n, n, n);n=_60(n);n=_61(n, n);n=_62(n);n=_63(n, n, n);n=_64(n);n=_65(n, n);n=_66(n);n=_67(n, n, n);n=_68(n);n=_69(n, n);n=_70(n);n=_71(n, n, n);n=_72(n);n=_73(n, n);n=_74(n);n=_75(n, n, n);n=_76(n);n=_77(n, n);n=_78(n);n=_79(n, n, n);n=_80(n);n=_81(n, n);n=_82(n);n=_83(n, n, n);n=_84(n);n=_85(n, n);n=_86(n);n=_87(n, n, n);n=_88(n);n=_89(n, n);n=_90(n);n=_91(n, n, n);n=_92(n);n=_93(n, n);n=_94(n);n=_95(n, n, n);n=_96(n);n=_97(n, n);n=_98(n);n=_99(n, n, n);n=_100(n);n=_101(n, n);n=_102(n);n=_103(n, n, n);n=_104(n);n=_105(n);}}R n;}
U RIJAM(U n){
 U x=A(n,n);
 U c=0;
 W(c<9){x=V0(x);c++;}
 W(c<9){x=S0(x);c++;}
 W(c<9){x=K0(x);c++;}
 W(c<99){x=A1(x);c++;}
 W(c<99){x=A4(x);c++;}
 W(c<99){x=A6(x);c++;}
 W(c<999){x=A8(x);c++;}
 W(c<999){x=B1(x);c++;}
 W(c<999){x=B3(x);c++;}
 W(c<9999){x=B5(x);c++;}
 W(c<9999){x=B7(x);c++;}
 W(c<9999){x=B9(x);c++;}
 W(c<99999){x=C2(x);c++;}
 W(c<99999){x=C4(x);c++;}
 W(c<99999){x=C6(x);c++;}
 W(c<999999){x=C8(x);c++;}
 W(c<999999){x=D2(x);c++;}
 W(c<999999){x=D4(x);c++;}
 W(c<9999999){x=D6(x);c++;}
 W(c<9999999){x=D8(x);c++;}
 W(c<9999999){x=E2(x);c++;}
 W(c<99999999){x=E4(x);c++;}
 W(c<99999999){x=E6(x);c++;}
 W(c<99999999){x=E8(x);c++;}
 W(c<999999999){x=F2(x);c++;}
 W(c<999999999){x=F4(x);c++;}
 W(c<99999999999){x=F6(x);c++;}
 W(c<18446744073709551615ULL){x=F8(x);c++;}
 W(c<18446744073709551615ULL){x=G2(x);c++;}
 W(c<18446744073709551615ULL){x=G4(x);c++;}
 W(c<18446744073709551615ULL){x=G6(x);c++;}
 W(c<18446744073709551615ULL){x=G8(x);c++;}
 W(c<18446744073709551615ULL){x=H2(x);c++;}
 W(c<18446744073709551615ULL){x=H4(x);c++;}
 W(c<18446744073709551615ULL){x=H6(x);c++;}
 W(c<18446744073709551615ULL){x=H8(x);c++;}
 W(c<18446744073709551615ULL){x=I2(x);c++;}
 W(c<18446744073709551615ULL){x=I4(x);c++;}
 W(c<18446744073709551615ULL){x=I6(x);c++;}
 W(c<18446744073709551615ULL){x=I8(x);c++;}
 W(c<18446744073709551615ULL){x=J2(x);c++;}
 W(c<18446744073709551615ULL){x=J4(x);c++;}
 W(c<18446744073709551615ULL){x=J6(x);c++;}
 W(c<18446744073709551615ULL){x=J8(x);c++;}
 W(c<18446744073709551615ULL){x=K2(x);c++;}
 W(c<18446744073709551615ULL){x=K4(x);c++;}
 W(c<18446744073709551615ULL){x=K6(x);c++;}
 W(c<18446744073709551615ULL){x=K8(x);c++;}
 W(c<18446744073709551615ULL){x=L2(x);c++;}
 W(c<18446744073709551615ULL){x=L4(x);c++;}
 W(c<18446744073709551615ULL){x=L6(x);c++;}
 W(c<18446744073709551615ULL){x=L8(x);c++;}
 W(c<18446744073709551615ULL){x=M2(x);c++;}
 W(c<18446744073709551615ULL){x=M4(x);c++;}
 W(c<18446744073709551615ULL){x=M6(x);c++;}
 W(c<18446744073709551615ULL){x=M8(x);c++;}
 W(c<18446744073709551615ULL){x=N2(x);c++;}
 W(c<18446744073709551615ULL){x=N4(x);c++;}
 W(c<18446744073709551615ULL){x=N6(x);c++;}
 W(c<18446744073709551615ULL){x=N8(x);c++;}
 W(c<18446744073709551615ULL){x=O2(x);c++;}
 W(c<18446744073709551615ULL){x=O4(x);c++;}
 W(c<18446744073709551615ULL){x=O6(x);c++;}
 W(c<18446744073709551615ULL){x=O8(x);c++;}
 W(c<18446744073709551615ULL){x=P2(x);c++;}
 W(c<18446744073709551615ULL){x=P4(x);c++;}
 W(c<18446744073709551615ULL){x=P6(x);c++;}
 W(c<18446744073709551615ULL){x=P8(x);c++;}
 W(c<18446744073709551615ULL){x=Q2(x);c++;}
 W(c<18446744073709551615ULL){x=Q4(x);c++;}
 W(c<18446744073709551615ULL){x=Q6(x);c++;}
 W(c<18446744073709551615ULL){x=Q8(x);c++;}
 W(c<18446744073709551615ULL){x=R2(x);c++;}
 W(c<18446744073709551615ULL){x=R4(x);c++;}
 W(c<18446744073709551615ULL){x=R6(x);c++;}
 W(c<18446744073709551615ULL){x=R8(x);c++;}
 W(c<18446744073709551615ULL){x=S2(x);c++;}
 W(c<18446744073709551615ULL){x=S4(x);c++;}
 W(c<18446744073709551615ULL){x=S6(x);c++;}
 W(c<18446744073709551615ULL){x=S8(x);c++;}
 W(c<18446744073709551615ULL){x=T2(x);c++;}
 W(c<18446744073709551615ULL){x=T4(x);c++;}
 W(c<18446744073709551615ULL){x=T6(x);c++;}
 W(c<18446744073709551615ULL){x=T8(x);c++;}
 W(c<18446744073709551615ULL){x=U2(x);c++;}
 W(c<18446744073709551615ULL){x=U4(x);c++;}
 W(c<18446744073709551615ULL){x=U6(x);c++;}
 W(c<18446744073709551615ULL){x=U8(x);c++;}
 W(c<18446744073709551615ULL){x=V2(x);c++;}
 W(c<18446744073709551615ULL){x=V4(x);c++;}
 W(c<18446744073709551615ULL){x=V6(x);c++;}
 W(c<18446744073709551615ULL){x=V8(x);c++;}
 W(c<18446744073709551615ULL){x=W2(x);c++;}
 W(c<18446744073709551615ULL){x=W4(x);c++;}
 W(c<18446744073709551615ULL){x=W6(x);c++;}
 W(c<18446744073709551615ULL){x=W8(x);c++;}
 W(c<18446744073709551615ULL){x=X2(x);c++;}
 W(c<18446744073709551615ULL){x=X4(x);c++;}
 W(c<18446744073709551615ULL){x=X6(x);c++;}
 W(c<18446744073709551615ULL){x=X8(x);c++;}
 W(c<18446744073709551615ULL){x=Y2(x);c++;}
 W(c<18446744073709551615ULL){x=Y4(x);c++;}
 W(c<18446744073709551615ULL){x=Y6(x);c++;}
 W(c<18446744073709551615ULL){x=Y8(x);c++;}
 W(c<18446744073709551615ULL){x=Z2(x);c++;}
 W(c<18446744073709551615ULL){x=Z4(x);c++;}
 W(c<18446744073709551615ULL){x=Z6(x);c++;}
 W(c<18446744073709551615ULL){x=Z8(x);c++;}
 W(c<18446744073709551615ULL){x=AAB(x);c++;}
 W(c<18446744073709551615ULL){x=AAD(x);c++;}
 W(c<18446744073709551615ULL){x=AAF(x);c++;}
 W(c<18446744073709551615ULL){x=AAH(x);c++;}
 W(c<18446744073709551615ULL){x=AAJ(x);c++;}
 W(c<18446744073709551615ULL){x=AAL(x);c++;}
 W(c<18446744073709551615ULL){x=AAN(x);c++;}
 W(c<18446744073709551615ULL){x=AAP(x);c++;}
 W(c<18446744073709551615ULL){x=AAR(x);c++;}
 W(c<18446744073709551615ULL){x=AAT(x);c++;}
 W(c<18446744073709551615ULL){x=AAV(x);c++;}
 W(c<18446744073709551615ULL){x=AAX(x);c++;}
 W(c<18446744073709551615ULL){x=AAZ(x);c++;}
 W(c<18446744073709551615ULL){x=ABB(x);c++;}
 W(c<18446744073709551615ULL){x=ABD(x);c++;}
 W(c<18446744073709551615ULL){x=ABF(x);c++;}
 W(c<18446744073709551615ULL){x=ABH(x);c++;}
 W(c<18446744073709551615ULL){x=ABJ(x);c++;}
 W(c<18446744073709551615ULL){x=ABL(x);c++;}
 W(c<18446744073709551615ULL){x=ABN(x);c++;}
 W(c<18446744073709551615ULL){x=ABP(x);c++;}
 W(c<18446744073709551615ULL){x=ABR(x);c++;}
 W(c<18446744073709551615ULL){x=ABT(x);c++;}
 W(c<18446744073709551615ULL){x=ABV(x);c++;}
 W(c<18446744073709551615ULL){x=ABX(x);c++;}
 W(c<18446744073709551615ULL){x=ABZ(x);c++;}
 W(c<18446744073709551615ULL){x=ACB(x);c++;}
 W(c<18446744073709551615ULL){x=ACD(x);c++;}
 W(c<18446744073709551615ULL){x=ACF(x);c++;}
 W(c<18446744073709551615ULL){x=ACH(x);c++;}
 W(c<18446744073709551615ULL){x=ACJ(x);c++;}
 W(c<18446744073709551615ULL){x=ACL(x);c++;}
 W(c<18446744073709551615ULL){x=ACN(x);c++;}
 W(c<18446744073709551615ULL){x=ACP(x);c++;}
 W(c<18446744073709551615ULL){x=ACR(x);c++;}
 W(c<18446744073709551615ULL){x=ACT(x);c++;}
 W(c<18446744073709551615ULL){x=ACV(x);c++;}
 W(c<18446744073709551615ULL){x=ACX(x);c++;}
 W(c<18446744073709551615ULL){x=ACZ(x);c++;}
 W(c<18446744073709551615ULL){x=ADB(x);c++;}
 W(c<18446744073709551615ULL){x=ADD(x);c++;}
 W(c<18446744073709551615ULL){x=ADF(x);c++;}
 W(c<18446744073709551615ULL){x=ADH(x);c++;}
 W(c<18446744073709551615ULL){x=ADJ(x);c++;}
 W(c<18446744073709551615ULL){x=ADL(x);c++;}
 W(c<18446744073709551615ULL){x=ADN(x);c++;}
 W(c<18446744073709551615ULL){x=ADP(x);c++;}
 W(c<18446744073709551615ULL){x=ADR(x);c++;}
 W(c<18446744073709551615ULL){x=ADT(x);c++;}
 W(c<18446744073709551615ULL){x=ADV(x);c++;}
 W(c<18446744073709551615ULL){x=ADX(x);c++;}
 W(c<18446744073709551615ULL){x=ADZ(x);c++;}
 W(c<18446744073709551615ULL){x=AEB(x);c++;}
 W(c<18446744073709551615ULL){x=AED(x);c++;}
 W(c<18446744073709551615ULL){x=AEF(x);c++;}
 W(c<18446744073709551615ULL){x=AEH(x);c++;}
 W(c<18446744073709551615ULL){x=AEJ(x);c++;}
 W(c<18446744073709551615ULL){x=AEL(x);c++;}
 W(c<18446744073709551615ULL){x=AEN(x);c++;}
 W(c<18446744073709551615ULL){x=AEP(x);c++;}
 W(c<18446744073709551615ULL){x=AER(x);c++;}
 W(c<18446744073709551615ULL){x=AET(x);c++;}
 W(c<18446744073709551615ULL){x=AEV(x);c++;}
 W(c<18446744073709551615ULL){x=AEX(x);c++;}
 W(c<18446744073709551615ULL){x=AEZ(x);c++;}
 W(c<18446744073709551615ULL){x=GR3(x);c++;}
 W(c<18446744073709551615ULL){x=GR5(x);c++;}
 W(c<18446744073709551615ULL){x=GR7(x);c++;}
 W(c<18446744073709551615ULL){x=CH3(x);c++;}
 W(c<18446744073709551615ULL){x=CH5(x);c++;}
 W(c<18446744073709551615ULL){x=CH7(x);c++;}
 W(c<18446744073709551615ULL){x=FU3(x);c++;}
 W(c<18446744073709551615ULL){x=FU5(x);c++;}
 W(c<18446744073709551615ULL){x=FU7(x);c++;}
 W(c<18446744073709551615ULL){x=HY4(x);c++;}
 W(c<18446744073709551615ULL){x=HY6(x);c++;}
 W(c<18446744073709551615ULL){x=HY8(x);c++;}
 W(c<18446744073709551615ULL){x=TW4(x);c++;}
 W(c<18446744073709551615ULL){x=TW6(x);c++;}
 W(c<18446744073709551615ULL){x=TW8(x);c++;}
 W(c<18446744073709551615ULL){x=SP4(x);c++;}
 W(c<18446744073709551615ULL){x=SP6(x);c++;}
 W(c<18446744073709551615ULL){x=MG4(x);c++;}
 W(c<18446744073709551615ULL){x=MG6(x);c++;}
 W(c<18446744073709551615ULL){x=UR3(x);c++;}
 W(c<18446744073709551615ULL){x=UR5(x);c++;}
 W(c<18446744073709551615ULL){x=UR7(x);c++;}
 W(c<18446744073709551615ULL){x=O_3(x);c++;}
 W(c<18446744073709551615ULL){x=O_5(x);c++;}
 W(c<18446744073709551615ULL){x=O_7(x);c++;}
 W(c<18446744073709551615ULL){x=I_3(x);c++;}
 W(c<18446744073709551615ULL){x=I_5(x);c++;}
 W(c<18446744073709551615ULL){x=I_7(x);c++;}
 W(c<18446744073709551615ULL){x=MI3(x);c++;}
 W(c<18446744073709551615ULL){x=MI5(x);c++;}
 W(c<18446744073709551615ULL){x=MI7(x);c++;}
 W(c<18446744073709551615ULL){x=D_3(x);c++;}
 W(c<18446744073709551615ULL){x=D_5(x);c++;}
 W(c<18446744073709551615ULL){x=D_7(x);c++;}
 W(c<18446744073709551615ULL){x=E_3(x);c++;}
 W(c<18446744073709551615ULL){x=E_5(x);c++;}
 W(c<18446744073709551615ULL){x=E_7(x);c++;}
 W(c<18446744073709551615ULL){x=S_3(x);c++;}
 W(c<18446744073709551615ULL){x=S_5(x);c++;}
 W(c<18446744073709551615ULL){x=S_7(x);c++;}
 W(c<18446744073709551615ULL){x=R_3(x);c++;}
 W(c<18446744073709551615ULL){x=R_5(x);c++;}
 W(c<18446744073709551615ULL){x=R_7(x);c++;}
 W(c<18446744073709551615ULL){x=Y_3(x);c++;}
 W(c<18446744073709551615ULL){x=Y_5(x);c++;}
 W(c<18446744073709551615ULL){x=Y_7(x);c++;}
 W(c<18446744073709551615ULL){x=L_3(x);c++;}
 W(c<18446744073709551615ULL){x=L_5(x);c++;}
 W(c<18446744073709551615ULL){x=L_7(x);c++;}
 W(c<18446744073709551615ULL){x=F_3(x);c++;}
 W(c<18446744073709551615ULL){x=F_5(x);c++;}
 W(c<18446744073709551615ULL){x=F_7(x);c++;}
 W(c<18446744073709551615ULL){x=SP_3(x);c++;}
 W(c<18446744073709551615ULL){x=SP_5(x);c++;}
 W(c<18446744073709551615ULL){x=SP_7(x);c++;}
 W(c<18446744073709551615ULL){x=B_3(x);c++;}
 W(c<18446744073709551615ULL){x=B_5(x);c++;}
 W(c<18446744073709551615ULL){x=B_7(x);c++;}
 W(c<18446744073709551615ULL){x=QU_3(x);c++;}
 W(c<18446744073709551615ULL){x=QU_5(x);c++;}
 W(c<18446744073709551615ULL){x=QU_7(x);c++;}
 W(c<18446744073709551615ULL){x=BB_3(x);c++;}
 W(c<18446744073709551615ULL){x=BB_5(x);c++;}
 W(c<18446744073709551615ULL){x=BB_7(x);c++;}
 W(c<18446744073709551615ULL){x=MV_3(x);c++;}
 W(c<18446744073709551615ULL){x=MV_5(x);c++;}
 W(c<18446744073709551615ULL){x=MV_7(x);c++;}
 W(c<18446744073709551615ULL){x=OV_3(x);c++;}
 W(c<18446744073709551615ULL){x=OV_5(x);c++;}
 W(c<18446744073709551615ULL){x=OV_7(x);c++;}
 W(c<18446744073709551615ULL){x=HHH(x);c++;}
 W(c<18446744073709551615ULL){x=JJJ(x);c++;}
 W(c<18446744073709551615ULL){x=KKK(x);c++;}
 W(c<18446744073709551615ULL){x=LLL(x);c++;}
 W(c<18446744073709551615ULL){x=MMM(x);c++;}
 W(c<18446744073709551615ULL){x=NNN(x);c++;}
 W(c<18446744073709551615ULL){x=OOO(x);c++;}
 W(c<18446744073709551615ULL){x=PPP(x);c++;}
 W(c<18446744073709551615ULL){x=QQQ(x);c++;}
 W(c<18446744073709551615ULL){x=RRR(x);c++;}
 W(c<18446744073709551615ULL){x=SSS(x);c++;}
 W(c<18446744073709551615ULL){x=TTT(x);c++;}
 W(c<18446744073709551615ULL){x=UUU(x);c++;}
 W(c<18446744073709551615ULL){x=VVV(x);c++;}
 W(c<18446744073709551615ULL){x=WWW(x);c++;}
 W(c<18446744073709551615ULL){x=XXX(x);c++;}
 W(c<18446744073709551615ULL){x=YYY(x);c++;}
 W(c<18446744073709551615ULL){x=ZZZ(x);c++;}
 W(c<18446744073709551615ULL){x=AAA(x);c++;}
 W(c<18446744073709551615ULL){x=CCC(x);c++;}
 W(c<18446744073709551615ULL){x=EEE(x);c++;}
 W(c<18446744073709551615ULL){x=GGG(x);c++;}
 W(c<18446744073709551615ULL){x=III(x);c++;}
 W(c<18446744073709551615ULL){x=KKK2(x);c++;}
 W(c<18446744073709551615ULL){x=MMM2(x);c++;}
 W(c<18446744073709551615ULL){x=OOO2(x);c++;}
 W(c<18446744073709551615ULL){x=QQQ2(x);c++;}
 W(c<18446744073709551615ULL){x=SSS2(x);c++;}
 W(c<18446744073709551615ULL){x=UUU2(x);c++;}
 W(c<18446744073709551615ULL){x=VVV2(x);c++;}
 W(c<18446744073709551615ULL){x=WWW2(x, x);c++;}
 W(c<18446744073709551615ULL){x=XXX2(x);c++;}
 W(c<18446744073709551615ULL){x=YYY2(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=ZZZ2(x);c++;}
 W(c<18446744073709551615ULL){x=AAAA(x);c++;}
 W(c<18446744073709551615ULL){x=BBBB(x, x);c++;}
 W(c<18446744073709551615ULL){x=CCCC(x);c++;}
 W(c<18446744073709551615ULL){x=DDDD(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=EEEE(x);c++;}
 W(c<18446744073709551615ULL){x=FFFF(x, x);c++;}
 W(c<18446744073709551615ULL){x=GGGG(x);c++;}
 W(c<18446744073709551615ULL){x=HHHH(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=IIII(x);c++;}
 W(c<18446744073709551615ULL){x=JJJJ(x, x);c++;}
 W(c<18446744073709551615ULL){x=KKKK(x);c++;}
 W(c<18446744073709551615ULL){x=LLLL(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=MMMM(x);c++;}
 W(c<18446744073709551615ULL){x=NNNN(x, x);c++;}
 W(c<18446744073709551615ULL){x=OOOO(x);c++;}
 W(c<18446744073709551615ULL){x=PPPP(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=QQQQ(x);c++;}
 W(c<18446744073709551615ULL){x=RRRR(x, x);c++;}
 W(c<18446744073709551615ULL){x=SSSS(x);c++;}
 W(c<18446744073709551615ULL){x=TTTT(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=UUUU(x);c++;}
 W(c<18446744073709551615ULL){x=VVVV(x);c++;}
 W(c<18446744073709551615ULL){x=WWWW(x, x);c++;}
 W(c<18446744073709551615ULL){x=XXXX(x);c++;}
 W(c<18446744073709551615ULL){x=YYYY(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=ZZZZ(x);c++;}
 W(c<18446744073709551615ULL){x=_0(x);c++;}
 W(c<18446744073709551615ULL){x=_2(x);c++;}
 W(c<18446744073709551615ULL){x=_4(x);c++;}
 W(c<18446744073709551615ULL){x=_6(x);c++;}
 W(c<18446744073709551615ULL){x=_8(x);c++;}
 W(c<18446744073709551615ULL){x=_10(x);c++;}
 W(c<18446744073709551615ULL){x=_12(x);c++;}
 W(c<18446744073709551615ULL){x=_14(x);c++;}
 W(c<18446744073709551615ULL){x=_16(x);c++;}
 W(c<18446744073709551615ULL){x=_18(x);c++;}
 W(c<18446744073709551615ULL){x=_20(x);c++;}
 W(c<18446744073709551615ULL){x=_21(x, x);c++;}
 W(c<18446744073709551615ULL){x=_22(x);c++;}
 W(c<18446744073709551615ULL){x=_23(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_24(x);c++;}
 W(c<18446744073709551615ULL){x=_25(x, x);c++;}
 W(c<18446744073709551615ULL){x=_26(x);c++;}
 W(c<18446744073709551615ULL){x=_27(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_28(x);c++;}
 W(c<18446744073709551615ULL){x=_29(x, x);c++;}
 W(c<18446744073709551615ULL){x=_30(x);c++;}
 W(c<18446744073709551615ULL){x=_31(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_32(x);c++;}
 W(c<18446744073709551615ULL){x=_33(x, x);c++;}
 W(c<18446744073709551615ULL){x=_34(x);c++;}
 W(c<18446744073709551615ULL){x=_35(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_36(x);c++;}
 W(c<18446744073709551615ULL){x=_37(x, x);c++;}
 W(c<18446744073709551615ULL){x=_38(x);c++;}
 W(c<18446744073709551615ULL){x=_39(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_40(x);c++;}
 W(c<18446744073709551615ULL){x=_41(x, x);c++;}
 W(c<18446744073709551615ULL){x=_42(x);c++;}
 W(c<18446744073709551615ULL){x=_43(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_44(x);c++;}
 W(c<18446744073709551615ULL){x=_45(x, x);c++;}
 W(c<18446744073709551615ULL){x=_46(x);c++;}
 W(c<18446744073709551615ULL){x=_47(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_48(x);c++;}
 W(c<18446744073709551615ULL){x=_49(x, x);c++;}
 W(c<18446744073709551615ULL){x=_50(x);c++;}
 W(c<18446744073709551615ULL){x=_51(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_52(x);c++;}
 W(c<18446744073709551615ULL){x=_53(x, x);c++;}
 W(c<18446744073709551615ULL){x=_54(x);c++;}
 W(c<18446744073709551615ULL){x=_55(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_56(x);c++;}
 W(c<18446744073709551615ULL){x=_57(x, x);c++;}
 W(c<18446744073709551615ULL){x=_58(x);c++;}
 W(c<18446744073709551615ULL){x=_59(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_60(x);c++;}
 W(c<18446744073709551615ULL){x=_61(x, x);c++;}
 W(c<18446744073709551615ULL){x=_62(x);c++;}
 W(c<18446744073709551615ULL){x=_63(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_64(x);c++;}
 W(c<18446744073709551615ULL){x=_65(x, x);c++;}
 W(c<18446744073709551615ULL){x=_66(x);c++;}
 W(c<18446744073709551615ULL){x=_67(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_68(x);c++;}
 W(c<18446744073709551615ULL){x=_69(x, x);c++;}
 W(c<18446744073709551615ULL){x=_70(x);c++;}
 W(c<18446744073709551615ULL){x=_71(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_72(x);c++;}
 W(c<18446744073709551615ULL){x=_73(x, x);c++;}
 W(c<18446744073709551615ULL){x=_74(x);c++;}
 W(c<18446744073709551615ULL){x=_75(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_76(x);c++;}
 W(c<18446744073709551615ULL){x=_77(x, x);c++;}
 W(c<18446744073709551615ULL){x=_78(x);c++;}
 W(c<18446744073709551615ULL){x=_79(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_80(x);c++;}
 W(c<18446744073709551615ULL){x=_81(x, x);c++;}
 W(c<18446744073709551615ULL){x=_82(x);c++;}
 W(c<18446744073709551615ULL){x=_83(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_84(x);c++;}
 W(c<18446744073709551615ULL){x=_85(x, x);c++;}
 W(c<18446744073709551615ULL){x=_86(x);c++;}
 W(c<18446744073709551615ULL){x=_87(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_88(x);c++;}
 W(c<18446744073709551615ULL){x=_89(x, x);c++;}
 W(c<18446744073709551615ULL){x=_90(x);c++;}
 W(c<18446744073709551615ULL){x=_91(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_92(x);c++;}
 W(c<18446744073709551615ULL){x=_93(x, x);c++;}
 W(c<18446744073709551615ULL){x=_94(x);c++;}
 W(c<18446744073709551615ULL){x=_95(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_96(x);c++;}
 W(c<18446744073709551615ULL){x=_97(x, x);c++;}
 W(c<18446744073709551615ULL){x=_98(x);c++;}
 W(c<18446744073709551615ULL){x=_99(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_100(x);c++;}
 W(c<18446744073709551615ULL){x=_101(x, x);c++;}
 W(c<18446744073709551615ULL){x=_102(x);c++;}
 W(c<18446744073709551615ULL){x=_103(x, x, x);c++;}
 W(c<18446744073709551615ULL){x=_104(x);c++;}
 W(c<18446744073709551615ULL){x=_105(x);c++;}
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);x=BIG(x,18446744073709551615ULL);
 x=SP_7(x);x=B_7(x);x=QU_7(x);x=BB_7(x);x=MV_7(x);x=OV_7(x);x=HHH(x);x=JJJ(x);x=KKK(x);x=LLL(x);x=MMM(x);x=NNN(x);x=OOO(x);x=PPP(x);x=QQQ(x);x=RRR(x);x=SSS(x);x=TTT(x);x=UUU(x);x=VVV(x);x=WWW(x);x=XXX(x);x=YYY(x);x=ZZZ(x);x=AAA(x);x=CCC(x);x=EEE(x);x=GGG(x);x=III(x);x=KKK2(x);x=MMM2(x);x=OOO2(x);x=QQQ2(x);x=SSS2(x);x=UUU2(x);x=VVV2(x);x=WWW2(x, x);x=XXX2(x);x=YYY2(x, x, x);x=ZZZ2(x);x=AAAA(x);x=BBBB(x, x);x=CCCC(x);x=DDDD(x, x, x);x=EEEE(x);x=FFFF(x, x);x=GGGG(x);x=HHHH(x, x, x);x=IIII(x);x=JJJJ(x, x);x=KKKK(x);x=LLLL(x, x, x);x=MMMM(x);x=NNNN(x, x);x=OOOO(x);x=PPPP(x, x, x);x=QQQQ(x);x=RRRR(x, x);x=SSSS(x);x=TTTT(x, x, x);x=UUUU(x);x=VVVV(x);x=WWWW(x, x);x=XXXX(x);x=YYYY(x, x, x);x=ZZZZ(x);x=_0(x);x=_2(x);x=_4(x);x=_6(x);x=_8(x);x=_10(x);x=_12(x);x=_14(x);x=_16(x);x=_18(x);x=_20(x);x=_21(x, x);x=_22(x);x=_23(x, x, x);x=_24(x);x=_25(x, x);x=_26(x);x=_27(x, x, x);x=_28(x);x=_29(x, x);x=_30(x);x=_31(x, x, x);x=_32(x);x=_33(x, x);x=_34(x);x=_35(x, x, x);x=_36(x);x=_37(x, x);x=_38(x);x=_39(x, x, x);x=_40(x);x=_41(x, x);x=_42(x);x=_43(x, x, x);x=_44(x);x=_45(x, x);x=_46(x);x=_47(x, x, x);x=_48(x);x=_49(x, x);x=_50(x);x=_51(x, x, x);x=_52(x);x=_53(x, x);x=_54(x);x=_55(x, x, x);x=_56(x);x=_57(x, x);x=_58(x);x=_59(x, x, x);x=_60(x);x=_61(x, x);x=_62(x);x=_63(x, x, x);x=_64(x);x=_65(x, x);x=_66(x);x=_67(x, x, x);x=_68(x);x=_69(x, x);x=_70(x);x=_71(x, x, x);x=_72(x);x=_73(x, x);x=_74(x);x=_75(x, x, x);x=_76(x);x=_77(x, x);x=_78(x);x=_79(x, x, x);x=_80(x);x=_81(x, x);x=_82(x);x=_83(x, x, x);x=_84(x);x=_85(x, x);x=_86(x);x=_87(x, x, x);x=_88(x);x=_89(x, x);x=_90(x);x=_91(x, x, x);x=_92(x);x=_93(x, x);x=_94(x);x=_95(x, x, x);x=_96(x);x=_97(x, x);x=_98(x);x=_99(x, x, x);x=_100(x);x=_101(x, x);x=_102(x);x=_103(x, x, x);x=_104(x);x=_105(x);
 x=SP_7(x);x=B_7(x);x=QU_7(x);x=BB_7(x);x=MV_7(x);x=OV_7(x);x=HHH(x);x=JJJ(x);x=KKK(x);x=LLL(x);x=MMM(x);x=NNN(x);x=OOO(x);x=PPP(x);x=QQQ(x);x=RRR(x);x=SSS(x);x=TTT(x);x=UUU(x);x=VVV(x);x=WWW(x);x=XXX(x);x=YYY(x);x=ZZZ(x);x=AAA(x);x=CCC(x);x=EEE(x);x=GGG(x);x=III(x);x=KKK2(x);x=MMM2(x);x=OOO2(x);x=QQQ2(x);x=SSS2(x);x=UUU2(x);x=VVV2(x);x=WWW2(x, x);x=XXX2(x);x=YYY2(x, x, x);x=ZZZ2(x);x=AAAA(x);x=BBBB(x, x);x=CCCC(x);x=DDDD(x, x, x);x=EEEE(x);x=FFFF(x, x);x=GGGG(x);x=HHHH(x, x, x);x=IIII(x);x=JJJJ(x, x);x=KKKK(x);x=LLLL(x, x, x);x=MMMM(x);x=NNNN(x, x);x=OOOO(x);x=PPPP(x, x, x);x=QQQQ(x);x=RRRR(x, x);x=SSSS(x);x=TTTT(x, x, x);x=UUUU(x);x=VVVV(x);x=WWWW(x, x);x=XXXX(x);x=YYYY(x, x, x);x=ZZZZ(x);x=_0(x);x=_2(x);x=_4(x);x=_6(x);x=_8(x);x=_10(x);x=_12(x);x=_14(x);x=_16(x);x=_18(x);x=_20(x);x=_21(x, x);x=_22(x);x=_23(x, x, x);x=_24(x);x=_25(x, x);x=_26(x);x=_27(x, x, x);x=_28(x);x=_29(x, x);x=_30(x);x=_31(x, x, x);x=_32(x);x=_33(x, x);x=_34(x);x=_35(x, x, x);x=_36(x);x=_37(x, x);x=_38(x);x=_39(x, x, x);x=_40(x);x=_41(x, x);x=_42(x);x=_43(x, x, x);x=_44(x);x=_45(x, x);x=_46(x);x=_47(x, x, x);x=_48(x);x=_49(x, x);x=_50(x);x=_51(x, x, x);x=_52(x);x=_53(x, x);x=_54(x);x=_55(x, x, x);x=_56(x);x=_57(x, x);x=_58(x);x=_59(x, x, x);x=_60(x);x=_61(x, x);x=_62(x);x=_63(x, x, x);x=_64(x);x=_65(x, x);x=_66(x);x=_67(x, x, x);x=_68(x);x=_69(x, x);x=_70(x);x=_71(x, x, x);x=_72(x);x=_73(x, x);x=_74(x);x=_75(x, x, x);x=_76(x);x=_77(x, x);x=_78(x);x=_79(x, x, x);x=_80(x);x=_81(x, x);x=_82(x);x=_83(x, x, x);x=_84(x);x=_85(x, x);x=_86(x);x=_87(x, x, x);x=_88(x);x=_89(x, x);x=_90(x);x=_91(x, x, x);x=_92(x);x=_93(x, x);x=_94(x);x=_95(x, x, x);x=_96(x);x=_97(x, x);x=_98(x);x=_99(x, x, x);x=_100(x);x=_101(x, x);x=_102(x);x=_103(x, x, x);x=_104(x);x=_105(x);
 x=SP_7(x);x=B_7(x);x=QU_7(x);x=BB_7(x);x=MV_7(x);x=OV_7(x);x=HHH(x);x=JJJ(x);x=KKK(x);x=LLL(x);x=MMM(x);x=NNN(x);x=OOO(x);x=PPP(x);x=QQQ(x);x=RRR(x);x=SSS(x);x=TTT(x);x=UUU(x);x=VVV(x);x=WWW(x);x=XXX(x);x=YYY(x);x=ZZZ(x);x=AAA(x);x=CCC(x);x=EEE(x);x=GGG(x);x=III(x);x=KKK2(x);x=MMM2(x);x=OOO2(x);x=QQQ2(x);x=SSS2(x);x=UUU2(x);x=VVV2(x);x=WWW2(x, x);x=XXX2(x);x=YYY2(x, x, x);x=ZZZ2(x);x=AAAA(x);x=BBBB(x, x);x=CCCC(x);x=DDDD(x, x, x);x=EEEE(x);x=FFFF(x, x);x=GGGG(x);x=HHHH(x, x, x);x=IIII(x);x=JJJJ(x, x);x=KKKK(x);x=LLLL(x, x, x);x=MMMM(x);x=NNNN(x, x);x=OOOO(x);x=PPPP(x, x, x);x=QQQQ(x);x=RRRR(x, x);x=SSSS(x);x=TTTT(x, x, x);x=UUUU(x);x=VVVV(x);x=WWWW(x, x);x=XXXX(x);x=YYYY(x, x, x);x=ZZZZ(x);x=_0(x);x=_2(x);x=_4(x);x=_6(x);x=_8(x);x=_10(x);x=_12(x);x=_14(x);x=_16(x);x=_18(x);x=_20(x);x=_21(x, x);x=_22(x);x=_23(x, x, x);x=_24(x);x=_25(x, x);x=_26(x);x=_27(x, x, x);x=_28(x);x=_29(x, x);x=_30(x);x=_31(x, x, x);x=_32(x);x=_33(x, x);x=_34(x);x=_35(x, x, x);x=_36(x);x=_37(x, x);x=_38(x);x=_39(x, x, x);x=_40(x);x=_41(x, x);x=_42(x);x=_43(x, x, x);x=_44(x);x=_45(x, x);x=_46(x);x=_47(x, x, x);x=_48(x);x=_49(x, x);x=_50(x);x=_51(x, x, x);x=_52(x);x=_53(x, x);x=_54(x);x=_55(x, x, x);x=_56(x);x=_57(x, x);x=_58(x);x=_59(x, x, x);x=_60(x);x=_61(x, x);x=_62(x);x=_63(x, x, x);x=_64(x);x=_65(x, x);x=_66(x);x=_67(x, x, x);x=_68(x);x=_69(x, x);x=_70(x);x=_71(x, x, x);x=_72(x);x=_73(x, x);x=_74(x);x=_75(x, x, x);x=_76(x);x=_77(x, x);x=_78(x);x=_79(x, x, x);x=_80(x);x=_81(x, x);x=_82(x);x=_83(x, x, x);x=_84(x);x=_85(x, x);x=_86(x);x=_87(x, x, x);x=_88(x);x=_89(x, x);x=_90(x);x=_91(x, x, x);x=_92(x);x=_93(x, x);x=_94(x);x=_95(x, x, x);x=_96(x);x=_97(x, x);x=_98(x);x=_99(x, x, x);x=_100(x);x=_101(x, x);x=_102(x);x=_103(x, x, x);x=_104(x);x=_105(x);
 x=_105(x);
 R x;
}
int main(int c,char**v){U n=c>1?strtoull(v[1],0,10):1;printf("%llu\n",RIJAM(n));R 0;}