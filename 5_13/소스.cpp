#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//void SimpleFunc(void) {
	/*static int num1 = 0;
	int num2 = 0;
	num1++, num2++;
	printf("sraric:%d,local:%d\n", num1.num2);*/
	//}
/*int check(void) {		//비밀번호 검사 알고리즘
	int num,ii;
	static int count = 1, bi = 1234;
	printf("비밀번호를 입력하시요");
	scanf_s("%d", &num);
	count++;
	if (count > 3) { printf("로그인 횟수초과"); return 0; }
		if (bi == num) { printf("맞아요\n");  return  0;}
		else if (bi != num) { printf("틀렸어요\n"); return 1; }
}*/
/*void dkdk(void) {
	static int add=1, div=1, mul=1, sub=1;
	int num1, num2;
	char c;
	printf("연산을 입력하시요");
	scanf_s("%d %c %d", &num1, &c, &num2);*/
	//if (c == '+') { printf("덧셈은 %d번 실행되었습니다.\n", pp); pp++ ; }
	//if (c == '*') { printf("곱셈은 %d번 실행되었습니다.\n", xx); xx++; }
	//if (c == '/') { printf("나눗셈은 %d번 실행되었습니다.\n", nn); nn++; }
	//if (c == '-') { printf("뺼셈은 %d번 실행되었습니다.\n", pn); pn--; }
	/*switch (c) {																			//사칙연산
	case '+': printf("덧셈은 %d번 실행되었습니다.\n", add); add++; break;
	case '*': printf("덧셈은 %d번 실행되었습니다.\n", div); div++; break;
	case '/': printf("덧셈은 %d번 실행되었습니다.\n", mul); mul++; break;
	case '-': printf("덧셈은 %d번 실행되었습니다.\n", sub); sub++; break;
	}
}*/
void dice(void) {
	
	static int i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0;
	int ii = rand() % 6 + 1;
	if (ii == 1) { i1++;}
	if (ii == 2) { i2++; }
	if (ii == 3) { i3++; }
	if (ii == 4) { i4++; }
	if (ii == 5) { i5++; }
	if (ii == 6) { i6++; }

	if (i1 + i2 + i3 + i4 + i5 + i6 >= 100) {
	printf("1:%d\n2:%d\n3:%d\n4:%d\n5:%d\n6:%d", i1, i2, i3, i4, i5, i6);
	}

}



int main() {
	srand((unsigned int)time(NULL));
	int i;
	for (i = 0; i <100; i++) {
		dice();
	}





	return 0;
}