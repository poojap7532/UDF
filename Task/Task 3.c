#include<stdio.h>

//WAP to create infinite calculator using UDF, switch case and Loop.//
void add(int a , int b){
	printf("sum : %d\n\n",a+b);
}
void sub(int a , int b){
	printf("sub : %d\n\n",a-b);
}
void multi(int a , int b){
	printf("multi : %d\n\n",a*b);
}
void div(int a , int b){
	printf("div : %d\n\n",a/b);
}
void mod(int a , int b){
	printf("mod : %d\n\n",a%b);
}
int main(){
	int fn,sn;
	char sl;
	
	while(1){
		
		printf("Enter First Number : ");
		scanf("%d",&fn);
		
		printf("Enter Second Number : ");
		scanf("%d",&sn);
		
		printf("Make Your Selection : + ,- , * , / , % ,\n ");
		
		printf("\n Enter Your Selection : ");
		scanf(" %c",&sl);
		
		switch(sl){
			
			case '+':
				add(fn,sn);
				break;
			case '-':
				add(fn,sn);
				break;
			case '*':
				add(fn,sn);
				break;
			case '/':
				add(fn,sn);
				break;
			case '%':
				add(fn,sn);
				break;
		}
    }
	return 0;
}

