#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//typedef struct student {
//	char name[10];
//	int age;
//	double height;
//}stu;
//typedef struct teacher1 {
//	char age[10];
//	char name[10];
//	char gwa[10];
//}st1;
//typedef struct one {
//	int a;
//	int b;
//}point;
typedef struct yoohwanbin {
	char name[10];
	int scorep;
	int scorem;
}na;
//int main() {
//	struct student s;
//	s.age = 17;
//	s.height = 173.8;
//	//s.name="홍길동";
//	strcpy(s.name, "홍길동");
//	printf("이름 : %s, 나이:%d, 키: %.1f", s.name, s.age, s.height);
//}
//int main() {
//	/*stu s = { "홍길동",11,111.1 };
//	printf("이름 : %s, 나이:%d, 키: %.1f", s.name, s.age, s.height);*/
//	
//	/*st1 teacher1 = { "1-1","이한별","영어" };
//	st1 teacher2 = { "1-2","이지영","과학" };
//	printf("이름 : %s, 나이:%s, 키: %s", teacher1.name, teacher1.age, teacher1.gwa);
//	printf("이름 : %s, 나이:%s, 키: %s", teacher2.name, teacher2.age, teacher2.gwa);*/
//
//	/*stu s[] = { {"고길동",30,170.1}, {"홍길동",11,111.1 },{"윤집인",17,173.8}
//	};
//	for (int i=0; i < 3; i++) {
//	printf("이름 : %s, 나이:%d, 키: %.1f\n", s[i].name, s[i].age, s[i].height);
//	}*/
//	st1 s[100] = { "" };
//	for (int i = 0; i < 4; i++) {
//	scanf_s("%s %s %s", s[i].name, s[i].age, s[i].gwa);
//	}
//	for (int i = 0; i < 4; i++) {
//		printf("이름 : %s, 나이:%s, 키: %s", s[i].name, s[i].age, s[i].gwa);
//	}
//
//}
//int main() {
//	point p1 = { 10,20 }, p2 = { 30,40 };
//	int at = (p1.a - p2.a)* (p1.a - p2.a);
//	int bt = (p1.b - p2.b) * (p1.b - p2.b);
//	printf("%.1f", sqrt(at+bt));
//}
int main() {
	na name1[2];
	for (int i = 0; i < 2; i++) {
		scanf_s("%s %d %d", name1[i].name, &name1[i].scorep, &name1[i].scorem);
	}
	for (int i = 0; i < 2; i++) {
		printf("%s %d %.1f", name1[i].name, name1[i].scorep + name1[i].scorem, (name1[i].scorep + name1[i].scorem) / 2);
	}
}
v