#include<stdio.h>
												//피보나치수열
int fib(int a) {
	if (a == 0 || a==1) { return a; }	
	else {
	return fib(a - 2) + fib(a - 1);
	}
}
 void ex(int num) {		//이름
	if (num--) { printf("%d유환빈\n",num); }
}

int main() {
	int i, j,ii;

	char ar[8][6] = { "joung" ,"yoo" ,"yoon" ,"im" ,"oh", "lee","choi" };
	for (i = 0; i < 8; i++) {
			printf("%s", ar[i]);
		printf("\n");
	}

	int au[] = { 1,2,3,4,5,6,7,8,9,10 }, sount = 0;
	for (i=0; i <= 10; i++) {
		//au[i] =(i+1)*10;
		printf("%d", au[i]);
		printf("\n");
	}





	char arr[]= { "strawberry" };		//strawberry 앞에부터 하나씩없애서 출력
	for (i = 0; i < sizeof(arr);i++) {
		for (j = i; j < sizeof(arr); j++) {
			printf("%c", arr[j]);
		}
		printf("\n");
	}

	scanf_s("%d", &ii);			//입력받은 달의 마지막날 출력
	switch (ii) {
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
						printf("%d달의 막날 %d\n", ii, 31); break;
		case 4:case 6:case 9:case 11:
						printf("%d달의 막날 %d\n", ii, 30); break;
		case 2:			printf("%d달의 막날 %d\n", ii , 28); break;
	}


	for (int i = 0; i < 5; i++) {	//이름출력
	ex(i);
	}


	printf("%d\n",fib(6));		//피보나치수열 출력
	
									//별찍기(모래시계)
	for (i = 0; i < 3; i++) {			
		for (ii = 0; ii < i; ii++) {
		printf(" ");
		}
		for (j = 0; j <5-i*2 ; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i < 3; i++) {
		for (ii = 0; ii < 2-i; ii++) {
			printf(" ");
		}	
		for (j = 0; j < i * 2+1; j++) {
			printf("*");
		}
		printf("\n");
	}
	//1~10까지 합
	int count=0, sum=0;		
	while (1) {
		if (count >= 10) { break; }
		count++;
		sum += count;
	}
	printf("%d", sum);

}