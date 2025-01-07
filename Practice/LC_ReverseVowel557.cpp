//Reverse the vowels in the string

class Solution {
public:
bool isVowel(char c){
            return(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
        }
    string reverseVowels(string s) {
        int low=0;
        int high=s.length()-1;
        
        while(low<high){
            if(!isVowel(s[low])){
           
            low++;
                continue;
            }
            if(!isVowel(s[high])){
           
            high--;
                continue;
            }
            swap(s[low],s[high]);
            low++;
            high--;
        }

       
        return s;
        
    }
};
