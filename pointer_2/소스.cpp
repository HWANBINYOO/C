#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
//int main() {
	
	////���� ������ ������ ���� �޸� �Ҵ�
	//int* x;
	//x = (int*)malloc(sizeof(int));
	//*x = 123;
	//printf("%d", *x);
	//free(x);

	//���� �迭�� �����ͷ� �̿��Ͽ� �����ϱ�
	//int x[5] = { 45,77,89,33,48 };
	//int sum = 0, i, * p;
	//	p = x;
	//for (i=0; i < 5; i++,p++) {
	//	sum += *p;
	//}
	//printf("%d", sum);

	//int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	//int* p1,*p2,*p3;
	//p1 = &arr[0];
	//p2 = &arr[1];
	//p3 = &arr[2];
	//printf("%d %d %d", *p1, *p2, *p3);
//}
//int main() {
//	int x[ROW][COL] = { 1,2,3,4,5,6,7,8,9 };
//	int y[ROW][COL] = { 9,8,7,6,5,4,3,2,1 };
//	int z[ROW][COL];  
//	int i, j, * x1, * y1, * z1;
//
//	x1 = &x[0][0];
//	y1 = (int*)y;
//	z1 = (int*)z;
//	for (i = 0; i < ROW * COL; i++, x1++, z1++) {
//		*z1 = *x1 + *y1;
//	}
//	z1 = (int*)z;
//
//	for (i = 0; i < ROW; i++) {
//		for (j = 0; j < COL; j++) {
//			printf("%3d", *z1++);
//		}
//		printf("\n");
//	}
//}

//int main() {
//	float i = 1.0, j = -1.75, * a;
//	a = &i;
//	printf("%p\n", a);
//	printf("%p\n", &i);
//
//	printf("%.1f\n", *a);
//	printf("%.1f\n", i);
//}

//�������� �뷮�� �޸𸮸� �Ҵ��Ͽ� �迭ó�� ����ϱ�
//int main() {
//	int* x, i, sum = 0;
//	double avg;
//	x = (int*)calloc(10, sizeof(int));
//
//		for (i = 0; i < 10; i++) {
//			printf("data input :");
//			scanf_s("%d",&x[i]);
//	}
//
//		for (i = 0; i < 10; i++) {
//			sum += x[i];
//	}
//		avg = sum / 10.0;
//		printf("�հ� : %d ���: %.1f",sum, avg);
//
//		free(x);
//}

//int main() {
	//char str[20] = "strawberry";
	//int ii = 0;
	/*char* str = "strawberry";
	for (int i = 0; i < 10; i++) {
		printf("%s", (str+1));
		printf("\n");
	}*/

	/*for (int j = 0; j < 20; j++) {
		for (int i = ii; i < sizeof(str); i++) {
			printf("%c", str[i]);
		}
	printf("\n");
	ii++;
	}*/
//}