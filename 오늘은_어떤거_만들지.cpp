#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int multiply(int x,int y){
	return x*y;
}
int divide(int x,int y){
	return x/y;
}
int plus(int x, int y){
	return x+y;
}
int subtract(int x,int y){
	return x-y;
}
int remainder(int x,int y){
	return x%y;
}

int main(){
	int a1=10;
	for( ; ; ){
		srand(time(NULL));
		int m = 0,d = 0,p = 0,s = 0 ,r = 0;
		int am = 0,ad = 0,ap = 0,as = 0 ,ar = 0;
		int x=0;
		int y=0;
		int z=0;
		int a=0;
		int x1=0;
		int y1=0;
		int z1=0;
		int signum = rand() % 4+2;
		int sign[signum-1] = {0};
		int answer = 0;
		for(int i=0; i<=signum; i++){
			sign[i]= rand() % 5;
		}
		printf("X,Y,Z���� �Է����ּ���(����10000����)\n");
		printf("X��:");
		scanf("%d",&x);
		printf("Y��:");
		scanf("%d",&y);
		printf("Z��:");
		scanf("%d",&z);
		x1=x;
		y1=y;
		z1=z;
		for(int i=0; i<=signum; i++){
			if(sign[i]==0){
				answer=multiply(x,y)+answer;
				a=x;
				x=y;
				y=z;
				z=a;
				m++;
				printf("%d�� ° ������:%d\n",i,answer);
			}
			if(sign[i]==1){
				answer=divide(x,y)+answer;
				a=x;
				x=y;
				y=z;
				z=a;
				d++;
				printf("%d�� ° ������:%d\n",i,answer);
			}
			if(sign[i]==2){
				answer=plus(x,y)+answer;
				a=x;
				x=y;
				y=z;
				z=a;
				p++;
				printf("%d�� ° ������:%d\n",i,answer);
			}
			if(sign[i]==3){
				answer=subtract(x,y)+answer;
				a=x;
				x=y;
				y=z;
				z=a;
				s++;
				printf("%d�� ° ������:%d\n",i,answer);
			}
			if(sign[i]==4){
				answer=remainder(x,y)+answer;
				a=x;
				x=y;
				y=z;
				z=a;
				r++;
				printf("%d�� ° ������:%d\n",i,answer);
			}	
		}
		printf("���κ� ���� 1���� ��Ģ����(+,-,X,/,%%(������))�� ����Ǽ� ���� ���� �������ϴ�.\n�� ��Ģ ������ �p�� �ߴ��� ���߽ø� �ʴϴ�.\n");
		printf("���ϱ��� Ƚ��:");
		scanf("%d",&ap);
		printf("������ Ƚ��:");
		scanf("%d",&as);
		printf("���ϱ��� Ƚ��:");
		scanf("%d",&am);
		printf("�������� Ƚ��:");
		scanf("%d",&ad);
		printf("�������� Ƚ��:");
		scanf("%d",&ar);
		if(am!=m){
			a1--;
		}
		if(as!=s){
			a1--;
		}
		if(ap!=p){
			a1--;
		}
		if(ad!=d){
		
		5
			a1--;
		}
		if(ar!=r){
			a1--;
		}
		printf("�����life: %d\n",a1);
		printf("������ \n");
		printf("���ϱ� %d\n���� %d\n���ϱ� %d\n������ %d\n������ %d\n",p,s,m,d,r);	
		int go=0;
		printf("�ѹ���:0 ����:1");
		scanf("%d",&go);
		if(go==1){
			break;
		} 
		if(a1<0){
			break;
		} 
		system("cls");
	}
	if(a1<0){
		printf("������̹� �׾����ϴ�.\n");
	}
	if(a1>00){
		printf("��\n");
	}
	
} 
