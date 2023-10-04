class Solution {
public:

    // sqrt method 
    // bool isPrime(int n){
    //     if(n<=1) return false;
    //     int sqrtN = sqrt(n);

    //     for(int i=2;i<=sqrtN;i++){
    //         if(n%i==0){
    //             return false;
    //         }
    //     }
    //     return true;
    // }


    // naive mmethod function
    // bool isPrime(int n){
    //     if(n<=1) return false;

    //     for(int i=2;i<n;i++){
    //         if(n%i==0){
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    int countPrimes(int n) {
        
        // Sieve of eratosthenes method
        if(n==0) return 0;

        vector<bool> prime(n,true); // marking true by default
        prime[0] =prime[1] = false; // 0 and 1 are not prime so marking them false

        int res=0;

        for(int i=2;i<n;i++){
            if(prime[i]){
                res++;

                int j=2*i;
                while(j<n){
                    prime[j] = false;
                    j+=i;
                }
            }
        }

        return res;



        // Naive approach   - (Time limit exceeded)

        // int c=0;
        // for(int i=0;i<n;i++){
        //     if(isPrime(i)){
        //         c++;
        //     }
        // }

        // return c;

    }
};