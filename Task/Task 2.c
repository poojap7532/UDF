#include<stdio.h>
//.WAP to find if a given number is divisible by 3 & 5 both or not,  using UDF.//
int div(int a){
	
	printf("Enter Number : ");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0){
		printf("The number is divisible by 3&5");
	}
	else{
		printf("The number is not divisible by 3&5");
	}
	return a;
}

int main(){
	int b;
	div(b);
	
	return 0;
}
