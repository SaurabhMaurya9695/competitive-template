for(int i=0;i<n;){
        ll cnt=0;
        if(s[i]=='1'){
            while ( i<n && s[i]=='1')
            {
                 cnt++;
                 i++;
            }
            ans=max(ans,cnt);
        }
        else{
            i++;
        }
    }

    cout<< ans << endl;
                                        // method 2


for(ll i=0;i<s.size();i++){
        if(s[i]=='1'){
                cnt++;
        }
        else{
                maxi=max(maxi,cnt);
                cnt=0;
        }
}
