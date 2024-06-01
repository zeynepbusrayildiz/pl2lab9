#include <stdio.h>
#include <stdlib.h>

struct complex{
	int real;
	int im;
};

void printsum(struct complex z1, struct complex z2){
	printf("Sum of the complex numbers:\n%di+%d",z1.im + z2.im, z1.real + z2.real);
}

int main(){
	int x1, x2, y1, y2;
	struct complex z1, z2;
	printf("Enter the real part of the first complex number:\n");
	scanf("%d",&z1.real);
	printf("Enter the imaginary part of the first complex number:\n");
	scanf("%d",&z1.im);
	printf("Enter the real part of the second complex number:\n");
	scanf("%d",&z2.real);
	printf("Enter the imaginary part of the second complex number:\n");
	scanf("%d",&z2.im);
	printsum(z1,z2);
	return 0;
}

