const ll nax = 1e5 + 5 ;//Check constraints from question again
//Global Variable ahead make sure to reinitialise them in case of multiple TC's
 
vector<ll> primes ;   // all the prime number stores in this 
vector<bool> sieve(nax , true) ; // this is just as vis array;
 
void pre(){
    sieve[0] = sieve[1] = false ;
    for(int i=2 ; i<nax; ++i){
        if(sieve[i]){
            primes.pb(i) ;
            for(int j=2*i ; j<nax ; j+=i){
                sieve[j] = false ;
            }
        }
    }
}

cout<< primes[x] <<endl; // prime

// and just call it before solve()

```````````````````````````````````````````````````````````````

O(sqrt(n))
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
