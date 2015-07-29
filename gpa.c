#include "stdio.h"
typedef struct
{
	double credit, gpa;
}subject;

int main(int argc, char const *argv[])
{
	subject sub[15];
	int num_sub;
	int i;
	double gpa_avg = 0.0;
	double credit_tot = 0.0;
	scanf("%d", &num_sub);

	for(i=0; i<num_sub; i++)
	{
		scanf("%lf%lf", &sub[i].credit, &sub[i].gpa);
		credit_tot += sub[i].credit;
	}

	for(i=0; i<num_sub; i++)
	{
		gpa_avg += sub[i].credit/credit_tot * sub[i].gpa;
	}

	printf("%lf", gpa_avg);
	return 0;
}
