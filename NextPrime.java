public static long nextPrime(long i) {
		// TODO Auto-generated method stub
		if(i<=2) {
			return 2;
		}if(i<=3) {
			return 3;
		}
		if(i<=5) {
			return 5;
		}if(i<=7) {
			return 7;
		}
		if(i<=10) {
			i=11;
		}
		if(i%2==0) {
			i++;
		}
		while(true) {
			if(i%5==0) {
				i+=2;
				continue;
			}
			if(isPrime(i)) {
				return i;
			}i+=2;
		}
	}

public static boolean isPrime(long i) {
		// TODO Auto-generated method stub
		for(long j=2;j*j<=i;j++) {
			if(i%j==0) {
				return false;
			}
		}return true;
	}
