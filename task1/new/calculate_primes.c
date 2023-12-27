void calculate_primes(int primes[], long n)
{
    primes[0] = 0;
    primes[1] = 0;
    
    for(int i = 2; i * i < n ; ++i)
	if (primes[i] == 0)
	     for (int k = i*i; k < n; k += i)
	     {
		 if (i*i < n)
		    primes[k] = 1;
		 //else
		 // continue;
		     
	     }
}
