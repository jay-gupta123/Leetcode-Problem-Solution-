class Solution {
public:
    bool threeFibonacciSum(int n) {
        vector<long long> temp;
        long long num1 = 0;
        long long num2 = 1;
        
        temp.push_back(num1);
        
       
        while (num2 <= n) {
            temp.push_back(num2);
            long long sum = num1 + num2;
            num1 = num2;
            num2 = sum;
        }
        
      
        for (int i = 0; i + 2 < temp.size(); i++) {
            long long sum = temp[i] + temp[i + 1] + temp[i + 2];
            if (sum == n) return true;
        }
        
        return false;
    }
};