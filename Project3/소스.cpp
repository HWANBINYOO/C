#include<stdio.h>
#include<string.h>
/*int fac(int a) {		//9�� �Լ�
	if (a == 1) { return 1; }
	return  a * fac(a - 1);
}*/
/*int prime(int a) {		//10�� �Լ�
	int cnt = 2;
	while (a % cnt != 0) {
		cnt++;
	}
	if (cnt == a) { return 1; }
	else return 0;
}*/
int main() {
	/*char arr[20];		1��
	scanf("%s", arr);
	switch (arr[7]) {
	case '1':
	case '3': printf("����"); break;
	case '2':
	case '4':printf("����"); break;
	}*/
	/*int i, j,num,sum=0;	2��
		printf("�Է�");
	do{
		scanf_s("%d", &num);
		 sum += num;
	}while (num!=0);
	printf("���:%d", sum);*/

	/*int i, j;		3��
	printf("�Է�");
	scanf_s("%d",&num);
	for (i = 0; i < num; i++) {
		for(j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	/*int i = 0, j,num,sum=0;		4��
	printf("�Է�:");
	scanf("%d", &num);
	while (num != 0) {
		i = num % 10;
		sum += i;
		num = num / 10;
	}
	printf("�ڸ����� �� %d", sum);*/

	/*char a[10];		5��
	int j;
	printf("�Է�");
	scanf("%s", a);
	printf("���");
	for (j = 0; a[j] != '\0'; j++) {
	}
	for (int i = j-1; i >= 0; i--) {
			printf("%c", a[i]);
	}*/

	/*char a[10],b[10];		6��
	printf("a�迭 �Է�:");
	scanf("%s", a);
	for (int i = 0; i < sizeof(a); i++) {
		b[i] = a[i];
	}
	printf("a�迭 ���%s\n", a);
	printf("b�迭 ���%s", b);*/

	/*int a[11][11],l,h;		7��
	printf("�Է�");
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


	/*int a[10][10] = { 0 };		8��
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

	/*int num;				���丮�� 9��
	scanf_s("%d", &num);
	printf("%d",fac(num));

	*/

	/*int num,nn;			�Ҽ��Ǻ��� 10��
	printf("�Է�");
	scanf_s("%d", &num);
	 nn=prime(num);
	 if (nn == 0) { printf("�Ҽ��ƴմϴ�."); }
	 else if (nn == 1) { printf("�Ҽ��Դϴ�."); }
	 */
	//char str[] = "komputer";		//���ڿ� ����
	//str[0] = 'c';
	//printf("%s", str);

	
	//char name[100];				//gets_s ���
	//char address[100];

	//printf("�̸��� ����?");
	//gets_s(name,99);
	//printf("�ּҴ� ����?");
	//gets_s(address,99);
	//printf("%s����� %s�Դϴ�.", address, name);
	
//int i;							//���ڿ� �� strlen
char str[100] = "strawberry";
//for ( i = 0; str[i] != '\0'; i++) {}
//printf("%d", i);
//printf("%d", strlen(str));

//char str1[20];			//���ڿ� ���� strcpy
//strcpy(str1, str);
//
//printf("%s\n", str);
//printf("%s\n", str1);

char str2[] = "delicious";		//���ڿ� ���̱�(strcat)
//strcat(str, str2);
//printf("%s\n", str);
//printf("%s\n", str2);

								
int res = strcmp(str, str2);		//���ڿ� ���ϱ�(strcmp)
printf("%d", res);
}
