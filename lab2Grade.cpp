#include <stdio.h>

int main(){
	
	int score ;
	printf("Enter your score : ") ;
	scanf("%d", &score) ;
	
	if(score>=80 && score<=100){
		printf("Grade = A") ;
	}
	else if(score>=75 && score<=79){
		printf("Grade = B+") ;
	}
	else if(score>=70 && score<=74){
		printf("Grade = B") ;
	}
	else if(score>=65 && score<=69){
		printf("Grade = C+") ;
	}
	else if(score>=60 && score<=64){
		printf("Grade = C") ;
	}
	else if(score>=55 && score<=59){
		printf("Grade = D+") ;
	}
	else if(score>=50 && score<=54){
		printf("Grade = D") ;
	}
	else if(score>=1 && score<=50){
		printf("Grade = F") ;
	}
	else{
		printf("Score Error !!") ;
	}
	return 0 ;	
}
