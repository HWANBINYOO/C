#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//void SimpleFunc(void) {
	/*static int num1 = 0;
	int num2 = 0;
	num1++, num2++;
	printf("sraric:%d,local:%d\n", num1.num2);*/
	//}
/*int check(void) {		//��й�ȣ �˻� �˰���
	int num,ii;
	static int count = 1, bi = 1234;
	printf("��й�ȣ�� �Է��Ͻÿ�");
	scanf_s("%d", &num);
	count++;
	if (count > 3) { printf("�α��� Ƚ���ʰ�"); return 0; }
		if (bi == num) { printf("�¾ƿ�\n");  return  0;}
		else if (bi != num) { printf("Ʋ�Ⱦ��\n"); return 1; }
}*/
/*void dkdk(void) {
	static int add=1, div=1, mul=1, sub=1;
	int num1, num2;
	char c;
	printf("������ �Է��Ͻÿ�");
	scanf_s("%d %c %d", &num1, &c, &num2);*/
	//if (c == '+') { printf("������ %d�� ����Ǿ����ϴ�.\n", pp); pp++ ; }
	//if (c == '*') { printf("������ %d�� ����Ǿ����ϴ�.\n", xx); xx++; }
	//if (c == '/') { printf("�������� %d�� ����Ǿ����ϴ�.\n", nn); nn++; }
	//if (c == '-') { printf("�E���� %d�� ����Ǿ����ϴ�.\n", pn); pn--; }
	/*switch (c) {																			//��Ģ����
	case '+': printf("������ %d�� ����Ǿ����ϴ�.\n", add); add++; break;
	case '*': printf("������ %d�� ����Ǿ����ϴ�.\n", div); div++; break;
	case '/': printf("������ %d�� ����Ǿ����ϴ�.\n", mul); mul++; break;
	case '-': printf("������ %d�� ����Ǿ����ϴ�.\n", sub); sub++; break;
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