/*
0602-2023130887-������-4
enum �̿�: MON, TUE, WED, THU, FRI, SAT, SUN
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	enum days {
		MON = 1, TUE, WED, THU, FRI, SAT, SUN
	};

	enum days i;

	char* dayString[8] = {
		"",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday",
		"Sunday"
	};

	for (i = MON; i <= SUN; i++) {
		printf("%d��° ����: %s\n", i, dayString[i]);
	}

	return 0;
}