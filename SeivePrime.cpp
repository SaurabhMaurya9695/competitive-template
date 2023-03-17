const ll nax = 1e5 + 5 ;//Check constraints from question again
//Global Variable ahead make sure to reinitialise them in case of multiple TC's
 
vector<ll> primes ;
vector<bool> sieve(nax , true) ;
 
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

// and just call it before solve()
