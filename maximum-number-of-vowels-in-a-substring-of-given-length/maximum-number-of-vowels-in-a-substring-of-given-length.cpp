class Solution {
public:
bool isvowel(char ch)
{
    // Make the list of vowels
    string str = "aeiouAEIOU";
    return (str.find(ch) != string::npos);
}
    int maxVowels(string s, int k) {
        int vowel=0,maxvowel=0;
        for(int i=0;i<k;i++){
            if(isvowel(s[i])){
                vowel++;
            }
        }
        maxvowel=vowel;
        for(int i=k;i<s.size();i++){
            if(isvowel(s[i]))
            vowel++;
            if(isvowel(s[i-k]))
            vowel--;
            maxvowel=max(maxvowel,vowel);
        }
        return maxvowel;
    }
};