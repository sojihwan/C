#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int key=0;
	int Encryption_key=0;
	printf("��й�ȣ�� �Է����ּ���.:");
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
	printf("��ȣȭ�� Ű �Դϴ�.:%X\n",Encryption_key);
	printf("Ű�� �Է����ּ���.:");
	scanf("%X",&Encryption_key);
	printf("��ȣȭ�� Ű �Դϴ�.:%d\n",Encryption_key);
}
