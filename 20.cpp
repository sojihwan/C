#include <stdio.h>
#include <windows.h>

int main(){
	int gm;
	for(; ;){
		printf("게임모드를 선택하세요(1=100,2=1000,3=10000,4=100000000,그외 종료)");
		scanf("%d",&gm);
		if(gm==1){
			int a=50;
			int b=50;
			int u=0; 
			printf("제가 당신의 마음 속 숫자(1에서 100까지중 하나)를 맞춰보죠\n");
			printf("기회는 15번안에 맞춰보죠(업은 1 다운은 2 정답은 3)\n");
			for(int Q=1; Q<=15; Q++){
				printf("%d번 질문:%d\n",Q,a);
				scanf("%d",&u);
				if(u==1){
					b=b/2;
					if(b==0){
						b+1;
					}
					a=a+b+1;
					if(a>=100){
						a=100;
					}
				}
				else if(u==2){
					b=b/2;
					if(b==0){
						b+1;
					}
					a=a-b-1;
					if(a<=0){
						a=0;
					}
				}
				else if(u==3){
					printf("역시 점니다 ㅋㅋㅋㅋㅋ");
					
					break;
					
				}
				else if(Q==15){
					printf("흐음 거짓말 같군요");
					break;
					
				}
				else{
					printf("다른것 입력됨 너는 반칙패다");
					break; 
					
				}
			}
		}
		else if(gm==2){
			int a=500;
			int b=500;
			int u=0; 
			printf("제가 당신의 마음 속 숫자(1에서 1000까지중 하나)를 맞춰보죠\n");
			printf("기회는 15번안에 맞춰보죠(업은 1 다운은 2 정답은 3)\n");
			for(int Q=1; Q<=15; Q++){
				printf("%d번 질문:%d\n",Q,a);
				scanf("%d",&u);
				if(u==1){
					b=b/2;
					if(b==0){
						b+1;
					}
					a=a+b+1;
					if(a>=1000){
						a=1000;
					}
				}
				else if(u==2){
					b=b/2;
					if(b==0){
						b+1;
					}
					a=a-b-1;
					if(a<=0){
						a=0;
					}
				}
				else if(u==3){
					printf("역시 점니다 ㅋㅋㅋㅋㅋ");
					break;
					
				}
				else if(Q==15){
					printf("흐음 거짓말 같군요");
					break;
					
				}
				else{
					printf("다른것 입력됨 너는 반칙패다");
					break; 
					
				}
			}
		}
		else if(gm==3){
			int a=5000;
			int b=5000;
			int u=0; 
			printf("제가 당신의 마음 속 숫자(1에서 10000까지중 하나)를 맞춰보죠\n");
			printf("기회는 15번안에 맞춰보죠(업은 1 다운은 2 정답은 3)\n");
			for(int Q=1; Q<=15; Q++){
				printf("%d번 질문:%d\n",Q,a);
				scanf("%d",&u);
				if(u==1){
					b=b/2;
					if(b==0){
						b+1;
					}
					a=a+b+1;
					if(a>=10000){
						a=10000;
					}
				}
				else if(u==2){
					b=b/2;
					if(b==0){
						b+1;
					}
					a=a-b-1;
					if(a<=0){
						a=0;
					}
				}
				else if(u==3){
					printf("역시 점니다 ㅋㅋㅋㅋㅋ");
					break;
					
				}
				else if(Q==15){
					printf("흐음 거짓말 같군요");
					break;
					
				}
				else{
					printf("다른것 입력됨 너는 반칙패다");
					break; 
					
				}
			}
		}
		else if(gm==4){
			int a=50000000;
			int b=50000000;
			int u=0; 
			printf("제가 당신의 마음 속 숫자(1에서 100000000까지중 하나)를 맞춰보죠\n");
			printf("기회는 30번안에 맞춰보죠(업은 1 다운은 2 정답은 3)\n");
			for(int Q=1; Q<=30; Q++){
				printf("%d번 질문:%d\n",Q,a);
				scanf("%d",&u);
				if(u==1){
					b=b/2;
					if(b==0){
						b+1;
					}
					a=a+b+1;
					if(a>=100000000){
						a=100000000;
					}
				}
				else if(u==2){
					b=b/2;
					if(b==0){
						b+1;
					}
					a=a-b-1;
					if(a<=0){
						a=0;
					}
				}
				else if(u==3){
					printf("역시 점니다 ㅋㅋㅋㅋㅋ");
					break;
					
				}
				else if(Q==15){
					printf("흐음 거짓말 같군요");
					break;
					
				}
				else{
					printf("다른것 입력됨 너는 반칙패다");
					break; 
					
				}
			}
		}
		else{
			printf("프로그램을 종료합니다.");
			break; 
		}
		Sleep(1000);
		system( "cls" );
	}	 
}
