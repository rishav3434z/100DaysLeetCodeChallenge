class Solution {
public:
    int maxFreqSum(string s) {
     int freq[26], maxVowel=0, maxConso=0;
     for(char c: s) {
        freq[c-'a']++;
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') 
             maxVowel=max(maxVowel,freq[c-'a']);
        else maxConso=max(maxConso,freq[c-'a']);
     }   
     return maxVowel+maxConso;
    }
};