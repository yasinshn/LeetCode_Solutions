#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v = vowels(s);
        reverse(v.begin(), v.end());
        int vectorItr = 0;
        for(int i = 0; i < s.size(); i++){
            if(isVowel(s[i])){
                s[i] = v[vectorItr];
                vectorItr++;
            }
        }
        return s;
    }

   std::vector<char> vowels(string str){
         std::vector<char> vw;
        for(int i = 0; i < str.size(); i++){
            if(isVowel(str[i]))
                vw.push_back(str[i]);
        }
        return vw;
    }

    bool isVowel(char c){
        return(c == 'a' || c == 'e'|| c == 'i'|| c == 'u' 
            || c == 'A' || c == 'E'|| c == 'I' || c == 'O' 
            || c == 'o' || c == 'U'
            );
    }
};

int main(){
    Solution sol;
    cout<<sol.reverseVowels("Yasin Sahin")<<endl;
}
