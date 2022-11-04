#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){
	for(;;){
		srand(time(NULL));
		int u; 
		printf("(난이도 극악)행운의 확률에 오신분들 환영합니다\n");
		printf("(1:쉬운, 2:보통, 3:어려운, 4:캡사이신,5: 종료) 난이도를 선택하세요:");
		scanf("%d",&u);
		if(u==1){
			int H = rand() % 3;
			int H1 = rand() % 3;
			if(H==H1){
				printf("오 팀운이 좋을정도의 운이군요\n");
			}
		}
		if(u==2){
			int H = rand() % 10;
			int H1 = rand() % 10;
			if(H==H1){
				printf("오 행운아 군요\n");
			}
		}
		if(u==3){
			int H = rand() % 20;
			int H1 = rand() % 20;
			if(H==H1){
				printf("오 지페를 주울 정도의 운이군요\n");
			}
		}
		if(u==4){
			int H = rand() % 10000;
			int H1 = rand() % 10000;
			if(H==H1){
				printf("오여친있나요\n");
			}
		}
		if(u==5){
			break;	
		}
		system("pause");
		system("cls");
	}
	
}
