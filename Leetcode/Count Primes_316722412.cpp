class Solution {
public:
    int countPrimes(int n) {
        vector<bool> is_not_prime(n + 5,0);
        
        int limits = sqrt(n + .0) + 1;
        
        for(int i = 2;i <= limits;i++){
            if(is_not_prime[i])
                continue;
            for(int j = i*i; j <= n;j += i){
                is_not_prime[j] = true; 
            }
        }
        
        int pi_n = 0;
        for(int i = 2;i < n;i++)
            if(!is_not_prime[i])
                ++pi_n;
        return pi_n;
    }
};