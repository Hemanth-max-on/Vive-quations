#include<stdio.h>

int hcf(int *pt,int num);

int main(){
	int ar[10],ans,i;
	for(i=0;ar[i]<=10;i++){
		printf("Enter num=");
		scanf("%d",&ar[i]);
		if(ar[i]==0){        //Condition to break the loop when we store '0' in the array
			break;
		}
	}
	ans=hcf(ar,i);          // Calling the HCF function
	printf("HCF=%d\n",ans);   // Printing the final answer
	return 0;
}

int hcf(int *pt,int num){
	int mul=1,ref=0,i=9;  
	while(i>1){
		for(int j=0;j<num;j++){
			if(pt[j]%i==0){
				ref++;
			}
		}
		if(ref==num){                 // Using ref (reference counter) to compare with num
			for(int k=0;k<num;k++){
				pt[k]/=i;
			}
			mul*=i;           // mul stores the product for the final answerv
			i=9;
			ref=0;
			continue;
		}
		ref=0;
		i--;
	}
	return mul;
}
