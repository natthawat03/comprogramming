#include <stdio.h>
int main(){
	int n1, n2, n3 ;
	
	printf("Enter your 3 Number = ") ;
	scanf("%d %d %d", &n1, &n2, &n3) ;
	
	if(n1>n2 && n2>n3){
		printf("Max = %d | Min = %d", n1, n3) ;
	}
	else if(n2>n1 && n1>n3){
		printf("Max = %d | Min = %d", n2, n3) ;
	}
	else if(n2>n3 && n3>n1){
		printf("Max = %d | Min = %d", n2, n1) ;
	}
	else if(n3>n1 && n1>n2){
		printf(" Max = %d | Min = %d", n3, n2) ;
	}
	else if(n3>n2 && n2>n1){
		printf("Max = %d | Min = %d", n3, n1) ;
	}
	else if(n1>n3 && n3>n2){
		printf("Max = %d | Min = %d", n1, n2) ;
	}
	else if(n1==n2 && n2==n3){
		printf("Max = %d | Min = %d", n1, n3) ;
	}
	return 0 ;
}
