#include<stdio.h>

int main(){
	int a=0,r=0,n=0;
	
	printf("Enter the first number 'A': ");
	scanf("%d",&a);
	printf("Enter the comman difference / Ratio 'R': ");
	scanf("%d",&r);
	printf("Enter the number of terms 'N': ");
	scanf("%d",&n);
	int ap[n],gp[n];
	float hp[n];
	if(n>0){
		int sum=a,mul=a;
		for(int i=0; i<n; i++){
			ap[i]=sum;
			sum=ap[i]+r;
			gp[i]=mul;
			mul=gp[i]*r;
			hp[i]=1/(float)(sum);
		}
		printf("\nAP = ");
	for(int i=0; i<n; i++){
		printf("%d ",ap[i]);
	}
	printf("\nGP = ");
	for(int i=0; i<n; i++){
		printf("%d ",gp[i]);
	}
	printf("\nGP = ");
	for(int i=0; i<n ; i++ ){
		printf("%f ",hp[i]);
	}
	}
	else printf("Inavlid input\n");
	
	return 0;
	
}