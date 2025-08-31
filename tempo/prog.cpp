#include <string>
#include <unordered_map>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, char> m;

        for(char c:s) m[c]++;

        for(char c:t){
            if(m[c]==0){
                return false;
            }
            m[c]--;
        }
    }
};