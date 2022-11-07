#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int key=0;
	int Encryption_key=0;
	printf("비밀번호를 입력해주세요.:");
	scanf("%d",&key);
	for(;;){
		srand(time(NULL));
		Encryption_key = rand()% 1000000+100000;
		Encryption_key*key;
		int i, cnt=0;
		for (i=2; i<Encryption_key; i++) {
       	if (Encryption_key % i == 0)
            cnt++;
   		}
   		if ( cnt == 0 ){
    		break;	
		}
	}
	printf("암호화된 키 입니다.:%X\n",Encryption_key);
	printf("키를 입력해주세요.:");
	scanf("%X",&Encryption_key);
	printf("암호화된 키 입니다.:%d\n",Encryption_key);
}
