#include<stdio.h>
//int get_integer(void);
//int get_intege(int max);
////int factorial(int a);
//int  iacksu(int j);
//void Add(int val);
//int num;			��������

//int SimpleFuncOne(void) {		//num�Լ�
//	int num = 10;
//	num++;
//	printf("SImpleFuncOne num: %d \n", num);
//	return 0;
//}
//
//int SimpleFuncTwo(void) {				//num�Լ�
//	int num1 = 20;
//	int num2 = 30;;
//	num1++, num2--;
//	printf("num1 & num2; %d %d \n", num1, num2);
//	return 0;
//}

int main() {
	/*int j,count ;
	j = get_integer();		//�Ҽ� �Ǻ� ���
	count = iacksu(j);
	if (count <= 2) { printf("�Ҽ��Դϴ�."); }
	else { printf("�Ҽ��� �ƴմϴ�."); }*/


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
	printf("main kgant so wldurqustn num:%d \n ", num);			//���� �Լ��� num�� for���ȿ� num
	return 0;*/

	printf("num: %d \n", num);		//�������� �� ���
	Add(3);
	printf("num: %d \n", num);
	num++;
	printf("num: %d \n", num);
	return 0;
	}

void Add(int val) {
	num += val;
}


//int get_integer(void) {		//�� �Է¹ޱ�
//	int num;
//	printf("�����Է�:");
//	scanf_s("%d", &num);
//	return num;
//}
//int get_intege(int max) {		//�ִ밪
//	int num;
//	scanf_s("%d", &num);
//	if (max < num) { max = num; }
//	return max;
//}

/*int factorial(int a) {		//���丮��
	int sum = 1;
	for (int i = 1; i <= a; i++) {
		sum = sum * i;
	}
		return sum;
}*/

//int iacksu(int j) {		//���
//		int count = 0;
//	for (int i = 1; i <= j; i++) {
//		if (j % i == 0) { count += 1; /*printf("%d ", i); */}
//	}
//		return count;
//}

