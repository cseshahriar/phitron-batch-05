#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st; //  last in first out LIFO
        for(char c:s) {
            if(c == '(' || c == '{' || c == '[') {
                st.push(c); // opening add to stack
            } else {
                if(st.empty()) {
                    return false;
                } else {
                    // jora mile gele pop
                    if(c == ')' && st.top() == '(') {
                        // c ar age opening match kina
                        st.pop();
                    } else if(c == '}' && st.top() == '{') {
                        st.pop();
                    } else if(c == ']' && st.top() == '[') {
                        st.pop();
                    } 
                    else {
                        return false;;;
                    }
                }
            }
        }
        // if(st.empty()) return true;
        // else return false;
        return st.empty();
    }
};