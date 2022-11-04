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
		printf("X,Y,Z값을 입력해주세요(정수10000이하)\n");
		printf("X값:");
		scanf("%d",&x);
		printf("Y값:");
		scanf("%d",&y);
		printf("Z값:");
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
				printf("%d번 째 개산결과:%d\n",i,answer);
			}
			if(sign[i]==1){
				answer=divide(x,y)+answer;
				a=x;
				x=y;
				y=z;
				z=a;
				d++;
				printf("%d번 째 개산결과:%d\n",i,answer);
			}
			if(sign[i]==2){
				answer=plus(x,y)+answer;
				a=x;
				x=y;
				y=z;
				z=a;
				p++;
				printf("%d번 째 개산결과:%d\n",i,answer);
			}
			if(sign[i]==3){
				answer=subtract(x,y)+answer;
				a=x;
				x=y;
				y=z;
				z=a;
				s++;
				printf("%d번 째 개산결과:%d\n",i,answer);
			}
			if(sign[i]==4){
				answer=remainder(x,y)+answer;
				a=x;
				x=y;
				y=z;
				z=a;
				r++;
				printf("%d번 째 개산결과:%d\n",i,answer);
			}	
		}
		printf("각부분 마다 1개의 사칙연산(+,-,X,/,%%(나머지))이 수행되서 원래 값에 더해집니다.\n각 사칙 연산을 몆번 했는지 마추시면 됨니다.\n");
		printf("더하기한 횟수:");
		scanf("%d",&ap);
		printf("빼기한 횟수:");
		scanf("%d",&as);
		printf("곱하기한 횟수:");
		scanf("%d",&am);
		printf("나누기한 횟수:");
		scanf("%d",&ad);
		printf("나머지한 횟수:");
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
		printf("당신의life: %d\n",a1);
		printf("정답은 \n");
		printf("더하기 %d\n빼기 %d\n곱하기 %d\n나누기 %d\n나머지 %d\n",p,s,m,d,r);	
		int go=0;
		printf("한번더:0 종료:1");
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
		printf("당신은이미 죽었습니다.\n");
	}
	if(a1>00){
		printf("욜\n");
	}
	
} 
