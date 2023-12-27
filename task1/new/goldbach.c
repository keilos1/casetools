/**
 * goldbach.c -- Проверка гипотезы Гольдбаха
 *
 * Copyright (c) 2022, Aleksei Artamonov <alesha_artamonov@list.ru>
 *
 * This code is licensed under MIT license.
 */

#include <stdio.h>
#include "calculate_primes.h"
#define N 10000000

int sieve[N];

int main()
{
    long n;
    long m;
    long a, b;
    int M = 0;
    scanf("%ld", &n);
    scanf("%ld", &m);
    n = n + n%2;
    m = m - m%2;
    calculate_primes(sieve, N);
    for (long l = n; l <= m; l += 2)
    {
	for (long i = 2; i < m; i++)
	    for (long j = i; j < m; j++)
		if ((i + j == l) && !(sieve[i] + sieve[j]))
		{
		    M++;
		    if (M == 1)
		    {
			a = i;
			b = j;
		    }
		    
		}
	printf("%ld %d %ld %ld\n", l, M, a, b);
	M = 0;
    }
}


