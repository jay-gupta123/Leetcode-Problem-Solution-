class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i=0;
        int index = 0;
        while(i < n){
            char curr_char = chars[i];
            int count =0;
            while(i<n && curr_char == chars[i]){
                i++;
                count++;
            }

            chars[index] = curr_char;
            index++;
            if(count>1){
                string fetch_char = to_string(count);
                for(auto it:fetch_char){
                    chars[index] = it;
                    index++;
                }
            }
        }
        return index;

    }
};