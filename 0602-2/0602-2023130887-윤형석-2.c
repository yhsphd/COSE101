/*
0602-2023130887-윤형석-2
공용체
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	union ip_address {
		int value;
		char ip[4];
	};

	union ip_address ad;
	ad.ip[3] = 127;
	ad.ip[2] = 0;
	ad.ip[1] = 0;
	ad.ip[0] = 1;

	// ad.value = 0x7f000001;

	printf("16진수: %x\n", ad.value);
	printf("10진수: %d %d %d %d\n", ad.ip[3], ad.ip[2], ad.ip[1], ad.ip[0]);

	return 0;
}