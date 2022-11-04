#include  <stdio.h>
#include  <string.h>

int main(){
	char s1[999];
	char uc;
	int e;
	int en[53]={0,}; 
	printf("아무거나 입력 바람니다.:");
	scanf("%s",&s1);
	printf("그럼 추출을 시작합니다.\n"); 
	for(int i=0; i<999; i++){  
		for(int a=0; a<53; a++){
			if((a+97)*2==s1[i]+a+97){
				en[a]=en[a]+1;
			}
			if((a+65)*2==s1[i]+(a+65)){
				en[a]=en[a]+1;
			}
		}
	}
	for(int i=0; i<53;i++){
		e=e+en[i];
	}
	for(int i; ;){
		printf("홀과 짝중 하나를 고르세요.(홀:1,짝:2):");
		scanf("%c",&uc);
		if(uc=="1" || uc=="2"){
			break;
		}
	}
	printf("%d",e);
	if(e%2==0 && uc==2){
		printf("성공");
	}
	else if(e%2==1 && uc==1){
		printf("성공");
	}
	else{
		printf("실패");
	}
	
}
