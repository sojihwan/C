#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int winningnum0 = rand() % 1000;
	int list[90]= {0};
	int winningnum1[1000] = {0};
	int infinite2=5;
	int half=0;
	int up=2;
	int count=0;
	char character[7][9] = {{"대상"},{"2등상"},{"3등상"},{"4등상"},{"5등상"},{"6등상"},{"참여상"}};
	int select;
	for(; ;){
		for(int infinite=0; infinite<=90; infinite++){
			if(74<infinite){
				infinite2=infinite2+60;
				if(89<=infinite){
					infinite2==1000;
				}
			}
			
			for(int infinite1=0;infinite1<=infinite2;infinite1++){
				winningnum1[infinite1] = rand() % 1000;
				for(int absolute=0;absolute<infinite1;absolute++){
					if(winningnum1[infinite1]==winningnum1[absolute]){
						infinite1--;
					}
				}
			}
			for(int infinite1=0;infinite1<=infinite2;infinite1++){
				if(winningnum0==winningnum1[infinite1]){
					list[infinite]=1;
					break;
				}
				else{
					list[infinite]=0;
				}
			}
			
			if(list[infinite]==1){
				half= rand() % up;
				if(half==0){
					count=infinite+count;
					printf("%d회 만에 뽑았습니다.(당첨:%s)\n",count,character[half]);
					return 0;
				} 
				else{
					half= rand() % 6+1;
					count=infinite+count;
					printf("%d회 만에 뽑았습니다.(당첨:%s)\n",count,character[half]);
					infinite = 0;
					up=up-1;
					winningnum0 = rand() % 1000;
					infinite2=5;	
				} 
			}
		}	
	}
}
//printf("winningnum0:%d\n winningnum1:%d\n winningnum2:%d\n winningnum3%d\n winningnum4%d\n winningnum5%d\n winningnum6%d\n list[%d]:%d",winningnum0,winningnum1,winningnum2,winningnum3,winningnum4,winningnum5,winningnum6,infinite,list[infinite]);
