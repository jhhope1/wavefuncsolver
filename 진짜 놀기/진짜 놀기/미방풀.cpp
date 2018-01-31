#include "stdafx.h"
double norm = 0;
double doubprimepsi(int n) {
	return -(E - V(dx*(double(n) - pointnum)))*psi[n]*m*2/hbar/hbar;
}
void findnext() {
	psi[0] = 0.;
	psi[1] = 0.0000000000001;
	for (int i = 0; i < pointnum * 2-1; i++) {
		psi[i + 2] = doubprimepsi(i+1)*dx*dx + 2 * psi[i + 1] - psi[i];
	}
}

void findnorm() {
	double sqsum = 0;
	for (int i = 0; i < 2 * pointnum + 1; i++) {
		sqsum += psi[i] * psi[i];}
	sqsum *= dx;
	norm = sqrt(sqsum);
	printf("%f\n", psi[pointnum]);
	printf("%f", sqsum);
	return ;
}

void normalize() {
	for (int i = 0; i < 2 * pointnum + 1; i++) {
		psi[i] /= norm;}
}

void solve(){
	findnext();
	findnorm();
	normalize();
}