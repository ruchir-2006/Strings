#include <bits/stdc++.h> 
vector<int> countVowelsConsonantsSpaces(string &s, int n) {
   
    int vowels= 0;
    int consonants=0;
    int spaces = 0;
    vector<int> ans;

    for(int i=0; i<n ; i++)
    {
        char ch = s[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
          if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;
            
          else
            consonants++;
            
        }

        else
          spaces++;
      


    }
    ans.push_back(vowels);
    ans.push_back(consonants);
    ans.push_back(spaces);

    
    return ans;
}
