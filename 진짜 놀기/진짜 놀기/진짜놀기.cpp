// 진짜놀기.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
//제대로 놀아보자!! 이얏호 time independent wave function solver
//f(V) == wavefunction
//wave eq : hbar^2 / 2m * d^2psi/dx^2 + (E-V)psi = 0
#include "stdafx.h"


int main()
{
	solve();
	printpsi();
    return 0;
}

