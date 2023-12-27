/**
 * primes.c -- Гипотеза Гольдбаха
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
    scanf("%ld", &n);
    calculate_primes(sieve, n);
    for (int i = 0; i < n; i++)
	if (sieve[i] == 0)
	    printf("%d\n", i);
    return 0;
}
