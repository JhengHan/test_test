// n2.cpp : �w�q�D���x���ε{�����i�J�I�C
//

// n1.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void fac(int, int *);


int main(void)
{
	int n, result;

	int i;
	for (i = 1; i <= 10; i++)
	{
		result = 1;
		fac(i, &result);
	}
	return 87;
}

void fac(int n, int *ans)
{
	int i;
	for (i = 1; i <= n; i++)
		*ans = *ans * i;
	printf("%d\n", *ans);
}




