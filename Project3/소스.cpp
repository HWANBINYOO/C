#include<stdio.h>
#include<string.h>
/*int fac(int a) {		//9번 함수
	if (a == 1) { return 1; }
	return  a * fac(a - 1);
}*/
/*int prime(int a) {		//10번 함수
	int cnt = 2;
	while (a % cnt != 0) {
		cnt++;
	}
	if (cnt == a) { return 1; }
	else return 0;
}*/
int main() {
	/*char arr[20];		1번
	scanf("%s", arr);
	switch (arr[7]) {
	case '1':
	case '3': printf("남자"); break;
	case '2':
	case '4':printf("여자"); break;
	}*/
	/*int i, j,num,sum=0;	2번
		printf("입력");
	do{
		scanf_s("%d", &num);
		 sum += num;
	}while (num!=0);
	printf("출력:%d", sum);*/

	/*int i, j;		3번
	printf("입력");
	scanf_s("%d",&num);
	for (i = 0; i < num; i++) {
		for(j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*int i = 0, j,num,sum=0;		4번
	printf("입력:");
	scanf("%d", &num);
	while (num != 0) {
		i = num % 10;
		sum += i;
		num = num / 10;
	}
	printf("자리수의 합 %d", sum);*/

	/*char a[10];		5번
	int j;
	printf("입력");
	scanf("%s", a);
	printf("출력");
	for (j = 0; a[j] != '\0'; j++) {
	}
	for (int i = j-1; i >= 0; i--) {
			printf("%c", a[i]);
	}*/

	/*char a[10],b[10];		6번
	printf("a배열 입력:");
	scanf("%s", a);
	for (int i = 0; i < sizeof(a); i++) {
		b[i] = a[i];
	}
	printf("a배열 출력%s\n", a);
	printf("b배열 출력%s", b);*/

	/*int a[11][11],l,h;		7번
	printf("입력");
	scanf_s("%d %d", &l, &h);
	
		for (int i = 0; i < sizeof(l)-1; i++) {
			for (int j = 0; j<sizeof(h); j++) {
				a[i][j] = (i+1)*(j+1);
			}
			
	}

		for (int i = 0; i < sizeof(l)-1; i++) {
			for (int j = 0; j<sizeof(h); j++) {
				printf("%d", a[i][j]);
			}
			printf("\n");
		}*/


	/*int a[10][10] = { 0 };		8번
		a[0][1] = 1;
	
	for (int i=1; i < 5; i++) {
		for (int j = 1; j <= i+1; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i-1][j];
		}
	}
	for (int i = 0; i < 5; i++) {		
		for (int j = 1; j <6; j++) {
			printf("%d", a[i][j]);
		}
		printf("\n");
	}*/

	/*int num;				팩토리얼 9번
	scanf_s("%d", &num);
	printf("%d",fac(num));

	*/

	/*int num,nn;			소수판별식 10번
	printf("입력");
	scanf_s("%d", &num);
	 nn=prime(num);
	 if (nn == 0) { printf("소수아닙니다."); }
	 else if (nn == 1) { printf("소수입니다."); }
	 */
	//char str[] = "komputer";		//문자열 수정
	//str[0] = 'c';
	//printf("%s", str);

	
	//char name[100];				//gets_s 사용
	//char address[100];

	//printf("이름이 뭐니?");
	//gets_s(name,99);
	//printf("주소는 뭐니?");
	//gets_s(address,99);
	//printf("%s에사는 %s입니다.", address, name);
	
//int i;							//문자열 수 strlen
char str[100] = "strawberry";
//for ( i = 0; str[i] != '\0'; i++) {}
//printf("%d", i);
//printf("%d", strlen(str));

//char str1[20];			//문자열 복사 strcpy
//strcpy(str1, str);
//
//printf("%s\n", str);
//printf("%s\n", str1);

char str2[] = "delicious";		//문자열 붙이기(strcat)
//strcat(str, str2);
//printf("%s\n", str);
//printf("%s\n", str2);

								
int res = strcmp(str, str2);		//문자열 비교하기(strcmp)
printf("%d", res);
}
