#include<stdio.h>
int main(void)
{
	int n=0; 
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		printf("%d: ",i);
			
		for(int j=2;j<=i;j++) {
			if(i%j==0) {
				printf("%d ",j);	
			}
		}
		printf("\n");
	}
	return 0;
}
