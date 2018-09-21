#include <stdio.h>
#include <math.h>

int main(){
	
	float base, high,radius,side ;
	printf("Triangle Area Calculator\n") ;
	printf("Enter High : ") ;
		scanf("%f", &high) ;
	printf("Enter Base : ") ;
		scanf("%f", &base) ;
	printf("Area of Triangle = %.2f", 0.5*high*base) ;
	
	printf("\n--------------------------------\n") ;
	
	printf("Circle Area Calculator\n") ;
	printf("Enter Radius : ") ;
		scanf("%f", &radius) ;
	printf("Area of Triangle = %.2f", M_PI*(radius*radius)) ;
	
	printf("\n--------------------------------\n") ;
	
	printf("Square Area Calculator\n") ;
	printf("Enter Side : ") ;
		scanf("%f", &side) ;
	printf("Area of Triangle = %.2f", side*side) ;
	
	return 0 ;
}
