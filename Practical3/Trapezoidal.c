#include <stdio.h> 
#include <math.h>

int main(void){
	int N = 12;
	float a = 0;
	float b = 60;

	float b_radians;
	b_radians = (M_PI * b)/180;
	float sum = tan(a) + tan(b_radians);
	printf("The value of the sum before the loop is : %f\n",sum);
	
	int i = 5;
	while (i < 60)
	{
		sum += 2 * tan(i * M_PI/180);
		i += 5;
		
		switch (i % 2)
		{
		case 0:
			printf("I am even and here's the value of sum : %fn", sum);
			break ;
		}
	}

	printf("The value of sum after the loop is : %f\n", sum);
	sum = ((b_radians - a) / (2 * N)) * sum;
	printf("The final value of the sum is : %f\n", sum);
	printf("The actual value is %f\n", logf(2));

	float abs_diff = fabs(sum - logf(2));
	float rel_diff = fabs(1 - (sum / logf(2)));

	printf("The absolute difference = %f\n The real difference = %f\n", abs_diff, rel_diff);
	return 0 ;
}
