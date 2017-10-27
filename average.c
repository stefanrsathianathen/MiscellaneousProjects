#include <stdio.h>


int main(int argc, char const *argv[])
{
	double sum = 0;
	double totalNumbers = 0;
	int temp;
	while(scanf("%d", &temp) == 1){
		sum += temp;
		totalNumbers++;
	}

	printf("The average of those numbers is: %f\n", sum/totalNumbers );
	return 0;
}