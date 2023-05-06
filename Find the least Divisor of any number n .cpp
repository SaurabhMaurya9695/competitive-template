int prime[1000009];
void SieveOfEratosthenes(int n)
{
    memset(prime, -1, sizeof(prime));
    prime[1]=1;
    for (int p=2; p<=n; p++)
    {
      
        if (prime[p] == -1)
        {
          
            for (int i=p; i<=n; i += p)
            if(prime[i]==-1)
                prime[i] = p;
        }
    }
 
}

// prime[n] gives the least divisor
