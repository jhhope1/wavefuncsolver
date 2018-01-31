// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once


#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <math.h>
const double hbar = 1.;
const double E = 1.;
const int pointnum = 200;
const double dx = 0.01;
const double m = 1;

extern double V(double x);// now, we try 1 - dimensional
extern double psi[2 * pointnum + 1];
void solve(); 
void printpsi();

// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.
