#include <stdio.h>
main()
{
	int setect ;
    printf("Please Select Your Case ( 1 2 3 4 5 ) : ") ;
    scanf("%d", &setect) ;
     
	switch(setect){
		case 1: int n1,n2,n3;
				printf("Please Enter your Number1: ");
					scanf("%d",&n1);
				printf("Please Enter your Number2: ");
					scanf("%d",&n2);
				printf("Please Enter your Number3: ");
					scanf("%d",&n3);
					
				if(n1>n2 && n2>n3){
					printf("Max = %d  Min = %d", n1, n3) ;
				}
				else if(n2>n1 && n1>n3){
					printf("Max = %d  Min = %d", n2, n3) ;
				}
				else if(n2>n3 && n3>n1){
					printf("Max = %d  Min = %d", n2, n1) ;
				}
				else if(n3>n1 && n1>n2){
					printf(" Max = %d  Min = %d", n3, n2) ;
				}
				else if(n3>n2 && n2>n1){
					printf("Max = %d  Min = %d", n3, n1) ;
				}
				else if(n1>n3 && n3>n2){
					printf("Max = %d  Min = %d", n1, n2) ;
				}
				else if(n1==n2 && n2==n3){
					printf("Max = %d  Min = %d", n1, n3) ;
				} ; break ;
		
		case 2: int score ;
				printf("Please Enter your score = ") ;
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
				} ; break ;
				
		case 3: int num1, num2 ;
			
				printf("Please Enter your Number1 : ") ;
					scanf("%d",&num1) ;
				printf("Please Enter your Number2 : ") ;
					scanf("%d",&num2) ;
				printf("Plus is %d", num1+num2) ; break ;
				
		case 4: int num_input ;
				printf("Please Enter your Number : ") ;
				  	scanf("%d",&num_input) ;
				
				for(int i=1 ; i<=12 ; i++){
					printf("%d x %d = %d", num_input, i, num_input*i) ;
				} ; break ;
		
		case 5: 
				for(int i=0 ; i<=29 ; i++){
					if(i==2 || i==3 || i==5 || i==7 && i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
						printf("Prime Numer is : %d", i) ;
					}
				} ; break ;
		
	}
	return 0 ;
}
