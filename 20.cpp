#include <stdio.h>
#include <windows.h>

int main(){
	int gm;
	for(; ;){
		printf("���Ӹ�带 �����ϼ���(1=100,2=1000,3=10000,4=100000000,�׿� ����)");
		scanf("%d",&gm);
		if(gm==1){
			int a=50;
			int b=50;
			int u=0; 
			printf("���� ����� ���� �� ����(1���� 100������ �ϳ�)�� ���纸��\n");
			printf("��ȸ�� 15���ȿ� ���纸��(���� 1 �ٿ��� 2 ������ 3)\n");
			for(int Q=1; Q<=15; Q++){
				printf("%d�� ����:%d\n",Q,a);
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
					printf("���� ���ϴ� ����������");
					
					break;
					
				}
				else if(Q==15){
					printf("���� ������ ������");
					break;
					
				}
				else{
					printf("�ٸ��� �Էµ� �ʴ� ��Ģ�д�");
					break; 
					
				}
			}
		}
		else if(gm==2){
			int a=500;
			int b=500;
			int u=0; 
			printf("���� ����� ���� �� ����(1���� 1000������ �ϳ�)�� ���纸��\n");
			printf("��ȸ�� 15���ȿ� ���纸��(���� 1 �ٿ��� 2 ������ 3)\n");
			for(int Q=1; Q<=15; Q++){
				printf("%d�� ����:%d\n",Q,a);
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
					printf("���� ���ϴ� ����������");
					break;
					
				}
				else if(Q==15){
					printf("���� ������ ������");
					break;
					
				}
				else{
					printf("�ٸ��� �Էµ� �ʴ� ��Ģ�д�");
					break; 
					
				}
			}
		}
		else if(gm==3){
			int a=5000;
			int b=5000;
			int u=0; 
			printf("���� ����� ���� �� ����(1���� 10000������ �ϳ�)�� ���纸��\n");
			printf("��ȸ�� 15���ȿ� ���纸��(���� 1 �ٿ��� 2 ������ 3)\n");
			for(int Q=1; Q<=15; Q++){
				printf("%d�� ����:%d\n",Q,a);
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
					printf("���� ���ϴ� ����������");
					break;
					
				}
				else if(Q==15){
					printf("���� ������ ������");
					break;
					
				}
				else{
					printf("�ٸ��� �Էµ� �ʴ� ��Ģ�д�");
					break; 
					
				}
			}
		}
		else if(gm==4){
			int a=50000000;
			int b=50000000;
			int u=0; 
			printf("���� ����� ���� �� ����(1���� 100000000������ �ϳ�)�� ���纸��\n");
			printf("��ȸ�� 30���ȿ� ���纸��(���� 1 �ٿ��� 2 ������ 3)\n");
			for(int Q=1; Q<=30; Q++){
				printf("%d�� ����:%d\n",Q,a);
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
					printf("���� ���ϴ� ����������");
					break;
					
				}
				else if(Q==15){
					printf("���� ������ ������");
					break;
					
				}
				else{
					printf("�ٸ��� �Էµ� �ʴ� ��Ģ�д�");
					break; 
					
				}
			}
		}
		else{
			printf("���α׷��� �����մϴ�.");
			break; 
		}
		Sleep(1000);
		system( "cls" );
	}	 
}
