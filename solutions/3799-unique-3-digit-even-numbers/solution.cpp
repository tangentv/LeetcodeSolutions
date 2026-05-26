class Solution {
public:

    int totalNumbers(vector<int>& digits) {
        int freq[10] = {0};
        
        // Count frequency of each digit
        for (int d : digits) {
            freq[d]++;
        }
        
        int count = 0;
        
        // Iterate through all possible 3-digit even numbers
        // First digit: 1-9, Second digit: 0-9, Third digit: 0,2,4,6,8
        for (int d1 = 1; d1 <= 9; d1++) {
            if (freq[d1] == 0) continue;
            freq[d1]--;
            
            for (int d2 = 0; d2 <= 9; d2++) {
                if (freq[d2] == 0) continue;
                freq[d2]--;
                
                for (int d3 = 0; d3 <= 8; d3 += 2) {  // Even digits only
                    if (freq[d3] == 0) continue;
                    count++;
                }
                
                freq[d2]++;
            }
            
            freq[d1]++;
        }
        
        return count;
    }
};
