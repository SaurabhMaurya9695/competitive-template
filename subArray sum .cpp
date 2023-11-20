int i= 0 , j= 0;
    int n = arr.size() ;
    int cnt = 0 ;
    int sum = 0 ;
    while (j < n){
        sum += arr[j] ;
        if(sum == k){
            cnt ++ ;
        }

        while(sum >= k){
            sum -= arr[i] ;
            if(sum == k){
                cnt ++ ;
            }
            i ++ ;
        }
        j ++ ;
    }

    return cnt ;
