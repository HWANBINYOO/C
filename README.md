# -.c
야구게임 프로젝
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <mmsystem.h>		//소리
#pragma comment(lib, "winmm.lib")
#define MAX 1000
#define a "C:\\Users\\user\\source\\repos\\야야구게임.c\\야야구게임.c\\ami.wav"		//배경음악
#define b "C:\\Users\\user\\source\\repos\\야야구게임.c\\야야구게임.c\\BaseballBat (1).wav"		//야구빠따치는소리
#pragma warning(disable: 4996)

enum {
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKYBLUE,
	DARK_RED,
	DARK_VOILET,
	DAKR_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};
void setColor(unsigned short text) {			//폰트색상변경
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}

int main() {
	srand((unsigned int)time(NULL));
	int i, j, c, t;
	int al[3];
	int num1[3] = { 0, };
	int strike = 0, ball = 0, out = 0, cnt = 0;
	char name[30];
	for (i = 0; i < 3; i++) {
		al[i] = rand() % 9 + 1;
		for (j = 0; j < i; j++) {
			if (al[i] == al[j]) {
				i--;
			}
		}
		printf("%d\n", al[i]);
	}
ONE:
	PlaySound(TEXT(a), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	system("cls");
	setColor(SKYBLUE);
			printf("                               rih9sG:,sh:ssi:,,                                \n");
			printf("                           :ss9sr  ih ,s   ,,:rrss2ssi:                         \n");
			printf("                       r2h2r:,  s:i5G,,,r,           :r22s:                     \n");
			printf("                    rX9s,       s2  G,,:s                :sh2:                  \n");
			printf("                 i9Gr             rsS5 ,,s,                 :29s                \n");
			printf("               rMX,              9r  G,:r:,,                   rGs              \n");
			printf("             rBh                   rG2G   :r                     iG2            \n");
			printf("           ,BG                    hh  is,s2:r,                     rMi          \n");
			printf("          2B:                     r   MMM,  ,                        99         \n");
			printf("         BS                         ,Gr ,s,:s2r2                      rB,       \n");
			printf("       ,Br                          ss   BBh   ,                       ,Bi      \n");
			printf("      ,B,                               5h ,r ,s2sM                      Bi     \n");
			printf("     ,B,                               sM   rBB2     ,,                   B,    \n");
			printf("     B,                                     M9 :: iXGBr                    B    \n");
			printf("    Bs                                     iB   sBBs     5,                iM   \n");
			printf("   rB                                      rr   sB,,i sMB5                  Bi  \n");
			printf("   B                                            Mr  rBBs   ,Br               B  \n");
			printf("  sG                                           ,9    B,,rrSB2   B            i9 \n");
			printf("  B,                                                :B   MBs   MB  22 ,: , , ,BM\n");
			printf("  B                                                 ss   h9 ,9BM,  M2  B i9 G,:s\n");
			printf(" hs  ,s 2M  i,                                           Bs   B: sBB,,rG  M 2,iM\n");
			printf("i9 s 2,,M  :B,  S,                                       :    B,  hs iB,:Mrshrih\n");
			printf("BG,r h  h  9s  iB   ,                                        ,M   G,  S: :r s ,h\n");
			printf("GGr2s9rsM2,9B, h:   B                                             2   M  2r s r2\n");
			printf("hs: 2, B  rG, sB9: 2s   ,B                                            ,  s ,, B \n");
			printf("Bs s:M Bs B, :Br  rBM,  Mh                                                    B \n");
			printf(" MG, :  , G  BG  rBs,,,sBr   92                                              s2 \n");
			printf("  B          ,, rB:   XBG2, ,B,                                              B, \n");
			printf("  iM                rBs   ,rMG   ,h                                         :B  \n");
			printf("   B,               i:   i2MBM,  BS                                         B,  \n");
			printf("   :B                   B2r   :isB   ,i                                    X9   \n");
			printf("    GS                      ::iMBG   Bs                                   iB    \n");
			printf("     Br                    r9sr, ,2:XB                                   ,B     \n");
			printf("      Bi                       :,:GBBs   Ms                             ,B,     \n");
			printf("       Br                     :2rs,  :i,B5                             :B       \n");
			printf("        Bh                       ,s,:rMBB   h:                        2M        \n");
			printf("         hB,                     ,, ::  :, 92                       ,B2         \n");
			printf("          :B2                       h:,:sMBh  2i                   sB,          \n");
			printf("            sBr                       i:  ir 2S                  rM2            \n");
			printf("              SMs                     ssrrrXMi ,:              sM2              \n");
			printf("                sM5,                    si  9 i9:           :hMs                \n");
			printf("                  i9Gs,                 :si:2Mr Xi       :29X:                  \n");
			printf("                     rXG2r,              si,rGisr    :sh92:                     \n");
			printf("                     ,sh992s:,        5h iG:sM,s5Xsr				ㅑ구게임\n");



	
			setColor(WHITE);
	printf("--------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\t\t숫자야구게임 시작\n");
	printf("--------------------------------------------------------------------------------------------\n");
	printf("\t숫자야구시작:1");
	printf("\t\t숫자야구순위:2");
	printf("\t\t숫자야구 규칙:3");
	printf("\t\t종료:4");
	printf("\n입력:");
	scanf_s("%d", &c);

	if (c == 1) {					//게임시작
			PlaySound(NULL, 0, 0);
		system("cls");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("□□□ -기회10번\n");
		printf("--------------------------------------------------------------------------------------------\n");
		while (1) {
			setColor(WHITE);
			if (cnt < 10) {
				printf("숫자 3개를 입력하세요.\n");
				cnt++;
				scanf_s("%d%d%d", &num1[0], &num1[1], &num1[2]);
				PlaySound(TEXT(b), NULL, SND_ASYNC);

				for (i = 0; i < 3; i++) {
					for (j = 0; j < 3; j++) {
						if ((al[i] == num1[j]) && i == j) {
							strike++;
						}
						else if ((al[i] == num1[j]) && i != j) {
							ball++;
						}
					}
				}
			}
			else if (cnt >= 10) {
				printf("xox 횟수를 초과하였습니다.");
				setColor(DARK_GRAY);
				printf("돌아가기키(8)");
				scanf_s("%d", &t); 
				if (t == 8) {
					setColor(WHITE);
					goto ONE;
				}
			}
			if (strike == 3) {
				printf("홈런!!\n");
				printf("%d 번만에 성공하셨습니다.", cnt);
				printf("이름을 입력해주세요.\n");

				FILE* fp = fopen("test.txt", "a+");															//test파일을 w(쓰기) 모드로 열기
				scanf("%s", name);
				fprintf(fp, "%d번 ", cnt);
				fprintf(fp, "%s\n", name);																	//문자열 입력
				fclose(fp);																					//파일 포인터 닫기
				

				setColor(DARK_GRAY);
				printf("돌아가기키(8)");
				scanf_s("%d", &t);
				if (t == 8) {
					setColor(WHITE);
					goto ONE;
				}
			}
			else {
				Sleep(2500);
				printf("\t\t\t\t\t%d 스트라이크 %d 볼\n", strike, ball);
				ball = 0;
				strike = 0;
			}
		}
	}
	if (c == 2) {					//순위
		PlaySound(NULL, 0, 0);
		system("cls");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("클리어한 사람이름,번수\n");
		printf("--------------------------------------------------------------------------------------------\n");
		FILE* fp;
		fp = fopen("test.txt", "r");
		char buffer[MAX] = { 0, };

		fgets(buffer, sizeof(buffer), fp);
		printf("%s", buffer);

		while (feof(fp) == 0) {												//전체
			char str[MAX];
			fgets(str, MAX, fp);
			printf("%s", str);
		}

		fclose(fp); //파일 포인터 닫기
		setColor(DARK_GRAY);
		printf("돌아가기키(8)");
		scanf_s("%d", &t);
		if (t == 8) {
			setColor(WHITE);
			goto ONE;
		}
	}
	if (c == 3) {						//게임방법
		PlaySound(NULL, 0, 0);
		setColor(WHITE);
		system("cls");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("※규칙※\n");
		printf("--------------------------------------------------------------------------------------------\n");
		printf("1.al가 1~9까지 임의에 숫자3개를 고른다.\n");
		printf("2.내(맞추는 사람)가 숫자3개를 부른다. \n");
		printf("3.al가 내(맞추는 사람)가 부른 3자리수를 듣고 스트라이크(S),볼(B)의 개수를 알려준다.\n");
		printf("4.홈런(스트라이크3) 일 떄 게임이 끝난다.\n\n");

		setColor(RED);
		printf("※");
		setColor(WHITE);
		printf("임의의 숫자를 적을 때 모두 다른 숫자로 적어야한다.\n");
		printf("ex)545금지(5중복)\n\n");

		setColor(RED);
		printf("※");
		setColor(WHITE);
		printf("스트라이크(S),볼(B)의 개수의 의미\n");
		printf("al가 정한 3숫자중 자신이 부른 숫자가 있으면 볼(B),숫자하고 위치까지 맞으면 스트라이크(S)\n\n");
		setColor(DARK_GRAY);
		printf("돌아가기키(8)");
		scanf_s("%d", &t);
		if (t == 8) {
			setColor(WHITE);
			goto ONE;
		}
	}
	if (strike == 3) {
		exit(1);
	}
}
