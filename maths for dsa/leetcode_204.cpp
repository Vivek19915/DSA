// Given an integer n, return the number of prime numbers that are strictly less than n.

// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0


// SOLUTION
class Solution {
    //iss function se pata chelga ki vo number prime h ya nhi
    bool isPrime(int n){
    if (n<=1)
    {
        return 0;
    }
    //we not include 1 and 0 because they are already non prime numbers
    for (int  i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            // tab vo number non prime ho jayega 
            return false;
        }
           
    }
    //varna vo prime hoga 
    return true;

}
public:
    int countPrimes(int n) {
        int count =0;
        for(int i =2;i<n;i++){
        
                if(isPrime(i)==true){
                    count ++;
                }
           
        }return count;
    }
};