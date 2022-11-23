////LeetCode Question to reverse the string q-344

class Solution {
public:
    void reverseString(vector<char>& s) {
        int low=0;
        int high=s.size()-1;
        while(low<(s.size()/2)){
            swap(s[low++],s[high--]);
        }
        
    }
};
