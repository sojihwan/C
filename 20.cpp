#include <stdio.h>
#include <windows.h>

int main(){
	int gm;
	for(; ;){
		printf("惟績乞球研 識澱馬室推(1=100,2=1000,3=10000,4=100000000,益須 曽戟)");
		scanf("%d",&gm);
		if(gm==1){
			int a=50;
			int b=50;
			int u=0; 
			printf("薦亜 雁重税 原製 紗 収切(1拭辞 100猿走掻 馬蟹)研 限仲左倉\n");
			printf("奄噺澗 15腰照拭 限仲左倉(穣精 1 陥錘精 2 舛岩精 3)\n");
			for(int Q=1; Q<=15; Q++){
				printf("%d腰 霜庚:%d\n",Q,a);
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
					printf("蝕獣 繊艦陥 せせせせせ");
					
					break;
					
				}
				else if(Q==15){
					printf("斐製 暗憎源 旭浦推");
					break;
					
				}
				else{
					printf("陥献依 脊径喫 格澗 鋼帳鳶陥");
					break; 
					
				}
			}
		}
		else if(gm==2){
			int a=500;
			int b=500;
			int u=0; 
			printf("薦亜 雁重税 原製 紗 収切(1拭辞 1000猿走掻 馬蟹)研 限仲左倉\n");
			printf("奄噺澗 15腰照拭 限仲左倉(穣精 1 陥錘精 2 舛岩精 3)\n");
			for(int Q=1; Q<=15; Q++){
				printf("%d腰 霜庚:%d\n",Q,a);
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
					printf("蝕獣 繊艦陥 せせせせせ");
					break;
					
				}
				else if(Q==15){
					printf("斐製 暗憎源 旭浦推");
					break;
					
				}
				else{
					printf("陥献依 脊径喫 格澗 鋼帳鳶陥");
					break; 
					
				}
			}
		}
		else if(gm==3){
			int a=5000;
			int b=5000;
			int u=0; 
			printf("薦亜 雁重税 原製 紗 収切(1拭辞 10000猿走掻 馬蟹)研 限仲左倉\n");
			printf("奄噺澗 15腰照拭 限仲左倉(穣精 1 陥錘精 2 舛岩精 3)\n");
			for(int Q=1; Q<=15; Q++){
				printf("%d腰 霜庚:%d\n",Q,a);
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
					printf("蝕獣 繊艦陥 せせせせせ");
					break;
					
				}
				else if(Q==15){
					printf("斐製 暗憎源 旭浦推");
					break;
					
				}
				else{
					printf("陥献依 脊径喫 格澗 鋼帳鳶陥");
					break; 
					
				}
			}
		}
		else if(gm==4){
			int a=50000000;
			int b=50000000;
			int u=0; 
			printf("薦亜 雁重税 原製 紗 収切(1拭辞 100000000猿走掻 馬蟹)研 限仲左倉\n");
			printf("奄噺澗 30腰照拭 限仲左倉(穣精 1 陥錘精 2 舛岩精 3)\n");
			for(int Q=1; Q<=30; Q++){
				printf("%d腰 霜庚:%d\n",Q,a);
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
					printf("蝕獣 繊艦陥 せせせせせ");
					break;
					
				}
				else if(Q==15){
					printf("斐製 暗憎源 旭浦推");
					break;
					
				}
				else{
					printf("陥献依 脊径喫 格澗 鋼帳鳶陥");
					break; 
					
				}
			}
		}
		else{
			printf("覗稽益轡聖 曽戟杯艦陥.");
			break; 
		}
		Sleep(1000);
		system( "cls" );
	}	 
}
