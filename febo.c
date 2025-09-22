//WRITE A C PROGRAM TO PRINT FIBONACCI SERIES UP TO N TERMS USING A FOR LOOP
#include<stdio.h>

int main(){
	int a=0,b=1,ans,n;  //a=0 and b=1 as the first two numbers add must be '0' and'1'
	printf("n=");
	scanf("%d",&n);   
	if(n==0 ||n==1){
		if(n==0)
			printf("%d",a);
		else if(n==1)
			printf("%d\n%d\n",a,b);
	}else {
		printf("%d\n%d\n",a,b);
		for(int i=3;i<=n;i++){       // Loop to generate Fibonacci sequence
			ans=a+b;
			a=b;
			b=ans;
			printf("%d\n",ans);
		}
	}
	return 0;
}
