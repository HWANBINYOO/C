#include<stdio.h>
void Recursive(int num)
{
	if (num <= 0)
		return ;
	Recursive(num-1);
	 printf(" %d recursive call! \n",num);
}

int Factorral(int n) {		//팩토리얼
	if (n <= 1)
		return 1;
	else
		return n * Factorral(n - 1);
}
int pp(int n) {		//1+,+,+,+,n
	if (n <= 1)
		return 1;
	else
		return n*n*n + pp(n - 1);
}
int power(int b, int pow_r) {		//제곱수
	if (pow_r <= 1)
		return b;
	else

		return b * power(b,pow_r -1);
}
void digit(int a) {
	/*if (a > 0) {		// 각자리수 방법1
		printf("%d\n", a % 10);
		return digit(a / 10);
	}*/
	if (a <= 0)		//방법2
	{
		return ;
	}
	digit(a / 10);
	printf("%d\n", a % 10);
}

int ack(int a, int b) {		//최소공약수 
	int temp;
	if (a % b == 0) {
		return b;
	}
	else {
		temp = b; b = a % b; a = temp; 
		return ack(a, b);
	}
}

int main() {
	Recursive(3);
	printf("1! =%d\n", Factorral(1));		//팩토리얼 매인
	printf("2! =%d\n", Factorral(2));
	printf("4! =%d\n", Factorral(4));


	printf("%d", pp(10));			//덧셈
	printf("\n%d\n",power(2, 3));			//제곱수

	digit(1234);		//자릿수
	printf("\n%d", ack(8, 20));		//최소공약수
	return 0;
}