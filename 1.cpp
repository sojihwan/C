#include  <stdio.h>
#include  <string.h>

int main(){
	char s1[999];
	char uc;
	int e;
	int en[53]={0,}; 
	printf("�ƹ��ų� �Է� �ٶ��ϴ�.:");
	scanf("%s",&s1);
	printf("�׷� ������ �����մϴ�.\n"); 
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
		printf("Ȧ�� ¦�� �ϳ��� ������.(Ȧ:1,¦:2):");
		scanf("%c",&uc);
		if(uc=="1" || uc=="2"){
			break;
		}
	}
	printf("%d",e);
	if(e%2==0 && uc==2){
		printf("����");
	}
	else if(e%2==1 && uc==1){
		printf("����");
	}
	else{
		printf("����");
	}
	
}
