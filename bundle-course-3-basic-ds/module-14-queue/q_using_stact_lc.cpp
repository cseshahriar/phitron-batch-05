#include <bits/stdc++.h>
using namespace std;

class MyQueue {
    public:
        stack<int> st;
        void push(int x) {
            st.push(x);
        }
        
        int pop() {
            stack<int> newSt;
            int last;
            while(!st.empty()) {
                int k = st.top();
                st.pop();
                if(st.empty()) {
                    last = k; // last element
                    break;
                }
                newSt.push(k);
            }

            while(!newSt.empty()) {
                st.push(newSt.top());
                newSt.pop();
            }
            return last;
        }
        
        int peek() {
            stack<int> newSt;
            int last;
            while(!st.empty()) {
                int k = st.top();
                st.pop();
                if(st.empty()) {
                    last = k; // last element
                }
                newSt.push(k);
            }

            while(!newSt.empty()) {
                st.push(newSt.top());
                newSt.pop();
            }
            return last;
        }
        
        bool empty() {
            return st.empty();
        }
};