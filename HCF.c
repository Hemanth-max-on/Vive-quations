#include<stdio.h>

int hcf(int *pt,int nu);

int main(){
	int ar[10],b,c,i;
	for(i=0;ar[i]<=10;i++){
		printf("ar[%d]=",i);
		scanf("%d",&ar[i]);
		if(ar[i]==0){
			break;
		}
	}
	c=hcf(ar,i);
	printf("HCF=%d\n",c);
	return 0;
}

int hcf(int *pt,int nu){
	int g=1,b=0,i=9;
	while(i>1){
		for(int j=0;j<nu;j++){
			if(pt[j]%i==0){
				b++;
			}
		}
		if(b==nu){
			for(int k=0;k<nu;k++){
				pt[k]/=i;
			}
			g*=i;
			i=9;
			b=0;
			continue;
		}
		b=0;
		i--;
	}
	return g;
}
