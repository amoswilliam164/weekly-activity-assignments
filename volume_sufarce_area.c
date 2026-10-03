#include <stdio.h>
#define PI 3.14

int main(int argc, char** argv)
{
	//declare variables
	/* radius r
	height h
	*/
	float h, r; //%f
	double volume , surface_area; //%lf
	
	//prompt the user
	printf("Enter the radius:\t");
	scanf("%f", &r );
	
	printf("Enter the height:\t");
	scanf("%f", &h );
	
	// calculations based on provided formulas
	volume = PI*r*r*h;
	surface_area = (2*PI*r*r) + (2*PI*r*h);
	
	//displaying the results
	printf("The volume of the cyclinder is = %.2lf \n", volume);
	printf("The surface area of the cylinder is =%.2lf", surface_area);
	 
	
	
	
	
	return 0;
}