#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){
	for(;;){
		srand(time(NULL));
		int u; 
		printf("(���̵� �ؾ�)����� Ȯ���� ���źе� ȯ���մϴ�\n");
		printf("(1:����, 2:����, 3:�����, 4:ĸ���̽�,5: ����) ���̵��� �����ϼ���:");
		scanf("%d",&u);
		if(u==1){
			int H = rand() % 3;
			int H1 = rand() % 3;
			if(H==H1){
				printf("�� ������ ���������� ���̱���\n");
			}
		}
		if(u==2){
			int H = rand() % 10;
			int H1 = rand() % 10;
			if(H==H1){
				printf("�� ���� ����\n");
			}
		}
		if(u==3){
			int H = rand() % 20;
			int H1 = rand() % 20;
			if(H==H1){
				printf("�� ���並 �ֿ� ������ ���̱���\n");
			}
		}
		if(u==4){
			int H = rand() % 10000;
			int H1 = rand() % 10000;
			if(H==H1){
				printf("����ģ�ֳ���\n");
			}
		}
		if(u==5){
			break;	
		}
		system("pause");
		system("cls");
	}
	
}
