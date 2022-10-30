class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n==0)
            return false;
        //for a number to be power of n its log(x)[base=n] is always integer
        if(ceil(log2(n)) == floor(log2(n)))
            return true;
        else
            return false;
        }
        return false;
    }
};
