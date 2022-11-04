#include  <stdio.h>

int main(){
	int s=0, n=1;
	for( ;s<100; ){
		s=s+n;
		n=n+2;
		printf("%d %d\n",s,n);
	}
	printf("%d %d\n",s,n);
} 
