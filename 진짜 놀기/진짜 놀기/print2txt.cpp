#include "stdafx.h"
void printpsi() {
	FILE *fp;
	fopen_s(&fp, "psi.txt", "w");
	for (int i = 0; i < 2 * pointnum; i++)
		fprintf(fp,"%f\n", psi[i]);
	fclose(fp);
}