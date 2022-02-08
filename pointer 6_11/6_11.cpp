#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void swap_ab(int *a, int *b);
//void get_sum_sub(int x, int y, int* p_sum, int* p_sub);
//void sub(int* ptr);
//void arr_copy(int* a, int* b, int size);
//void arr_copy(int* a, int* b, int* c, int size);
int seach(int* a, int size, int search_value);
//void arr_fill(int* a, int size);
int main() {

	//int a, b;		//포인터 스왑문(a,b)
	//a = 10;
	//b = 20;
	//swap_ab(&a, &b);
	//printf("%d %d ", a, b);

	//int x=0,y=0;
	//printf(" 두 수의 숫자를 입력하세요");		//포인터두수의 합과 차
	//scanf_s("%d %d", &x, &y);
	//get_sum_sub(x, y, &x, &y);
	//printf("두수의 합:%d 두수의 차는 %d", x, y);

	//int a[] = { 10,20,30,40,50 };		//배열 주소값 (1)
	//printf("%d\n", a);
	//printf("%d\n", &a[0]);
	//printf("%d\n", &a[1]);
	//printf("%d\n", a[2]);
	//printf("%d\n", *(a+2));//=a[2]
	/*int a[] = { 10,20,30,40,50 };				//(2)
	int* p;

	p = a;
	printf("%d %d %d\n", a[0], a[1], a[2]);
	printf("%d %d %d", p[0], p[1], p[2]);*/

	//int large_data[] = { 1,2,3,4,5,6,7,8,9,10,11 };		//(3)
	//sub(large_data);
	
//	int a[] = { 1, 2, 3, 0, 0, 0, 0, 0, 0, 0, }, b[11] = { 0 };		//배열값 복사
//	arr_copy(a, b, 10);
//	for (int i = 0; i < 10; i++) {
//	printf("%d", b[i]);
//	}
	//int a[] = { 1,2,3,4,5 };
	//int b[] = { 2,2,3,3,3, };
	//int c[10];
	//arr_copy(a,b,c,6);
	//for (int i = 0; i <5; i++) {
	//	printf("%d",c[i]);
	//}
	/*srand(time(NULL));
	int a[100];
	arr_fill(a,10);
	for (int i = 0; i < 10; i++) {
			printf("%d",a[i]);
	}*/
	int a[] = { 100,200,10,70 }, num,ii;
	printf("입력:");
	scanf_s("%d", &num);
	ii=seach(a, 10, num);
	printf("월급이 %d만원인사람의 인덱스%d", num, ii);
}
int seach(int* a, int size, int search_value) {
	int i;
	for (i = 0; i < size; i++) {
		if (a[i] == search_value) {
			return i;
		}
	}
}

//void arr_fill(int* a, int size) {
//	for (int i=0; i < size; i++) {
//		a[i] = rand()%10;
//	}
//}

/*void arr_copy(int* a, int* b, int* c, int size) {
	for (int i = 0; i < size; i++) {
		c[i] = a[i] + b[i];
	}
}*/
//void arr_copy(int* a, int* b, int size) {		////배열값 복사 함수
//	for (int i = 0; i < size; i++) {
//		b[i] = a[i];
//	}
//}

//void sub(int* ptr) {					//(3) 함수
//	printf("%d \n", ptr[10]);
//}

//void get_sum_sub(int x, int y, int* p_sum, int* p_sub) {		//포인터두수의 합과 차 함수
//	*p_sum = x + y;
//	*p_sub = x - y;
//}

//void swap_ab(int *a , int *b) {		// 포인터 스왑문함수
//	int temp=0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}