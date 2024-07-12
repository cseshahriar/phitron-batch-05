#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;
        for(char c:s) {
            if(c == '#') {
                // backspace hole agerta remove
                if(!s1.empty()) {
                    s1.pop();
                }
            } else { // else add
                s1.push(c);
            }
        }
        for(char c:t) {
            if(c == '#') {
                // backspace hole agerta remove
                if(!s2.empty()) {
                    s2.pop();
                }
            } else { // else add
                s2.push(c);
            }
        }
        if(s1 == s2) return true;
        else return false;
    }
};