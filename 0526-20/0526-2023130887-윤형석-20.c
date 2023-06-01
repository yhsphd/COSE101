/*
0526-2023130887-윤형석-20
두 수 바꾸기
두 숫자를 멤버로 갖는 구조체 num과
두 숫자를 교환하는 함수 exchange를 이용함
main()에서 입출력, 함수에서 두 수를 교환함
1. 구조체를 함수의 인수로 전달함
2. 구조체의 주소를 함수의 인수로 전달함
*/

#pragma warning(disable:4996)
#include <stdio.h>

struct num {
	int a;
	int b;
};

struct num exchange1(struct num n) {
	struct num nToReturn = { n.b,n.a };
	return nToReturn;
}

void exchange2(struct num* n) {
	int temp = n->a;
	n->a = n->b;
	n->b = temp;
}

int main() {
	struct num num_orig;
	struct num num_test;

	printf("두 수 입력: ");
	scanf("%d %d", &num_orig.a, &num_orig.b);

	num_test = num_orig;
	num_test = exchange1(num_test);
	printf("결과: %d %d\n", num_test.a, num_test.b);

	num_test = num_orig;
	exchange2(&num_test);
	printf("결과: %d %d\n", num_test.a, num_test.b);

	return 0;
}