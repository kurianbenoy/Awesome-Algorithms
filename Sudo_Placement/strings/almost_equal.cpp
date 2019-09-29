int countChars(string s1, string s2){
    
    // Your code here
    int chr[26] = {0};
    
    for(int i=0;i<s1.length();i++){
        chr[s1[i]-'a']++;
    }
    
    for(int i=0;i<s2.length();i++){
        chr[s2[i]-'a']--;
    }
    
    long long int ans=0;
    for(int i=0;i<26;i++){
        ans+=abs(chr[i]);
    }
    return ans;
}
