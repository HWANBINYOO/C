#include<stdio.h>
//int get_integer(void);
//int get_intege(int max);
////int factorial(int a);
//int  iacksu(int j);
//void Add(int val);
//int num;			전역변수

//int SimpleFuncOne(void) {		//num함수
//	int num = 10;
//	num++;
//	printf("SImpleFuncOne num: %d \n", num);
//	return 0;
//}
//
//int SimpleFuncTwo(void) {				//num함수
//	int num1 = 20;
//	int num2 = 30;;
//	num1++, num2--;
//	printf("num1 & num2; %d %d \n", num1, num2);
//	return 0;
//}

int main() {
	/*int j,count ;
	j = get_integer();		//소수 판별 출력
	count = iacksu(j);
	if (count <= 2) { printf("소수입니다."); }
	else { printf("소수가 아닙니다."); }*/


	/*int num = 17;		//num 
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \n", num);
	return 0;*/


	/*int num = 1;
	if (num == 1) {
		int num = 7; num += 10;
		printf("ifans so wlrdurqustn num: %d \n", num);
	}
	printf("main kgant so wldurqustn num:%d \n ", num);			//매인 함수애 num과 for문안에 num
	return 0;*/

	printf("num: %d \n", num);		//전역변수 값 출력
	Add(3);
	printf("num: %d \n", num);
	num++;
	printf("num: %d \n", num);
	return 0;
	}

void Add(int val) {
	num += val;
}


//int get_integer(void) {		//수 입력받기
//	int num;
//	printf("정수입력:");
//	scanf_s("%d", &num);
//	return num;
//}
//int get_intege(int max) {		//최대값
//	int num;
//	scanf_s("%d", &num);
//	if (max < num) { max = num; }
//	return max;
//}

/*int factorial(int a) {		//팩토리얼
	int sum = 1;
	for (int i = 1; i <= a; i++) {
		sum = sum * i;
	}
		return sum;
}*/

//int iacksu(int j) {		//약수
//		int count = 0;
//	for (int i = 1; i <= j; i++) {
//		if (j % i == 0) { count += 1; /*printf("%d ", i); */}
//	}
//		return count;
//}

