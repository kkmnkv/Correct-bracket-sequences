#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector <char> v;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            v.push_back(s[i]);
        }
        if    ( v.empty() &&(  (s[i] == ')') ||  (s[i] == '}') || (s[i] == ']') )) {
            cout <<"NO";
            return 0;
        }
        if ( (s[i] == ')') && ( !v.empty() ) && ( v.back() == '(') ) {
            v.pop_back();
        }
        
        
        if ( (s[i] == '}') && ( !v.empty() ) && ( v.back() == '{') ) {
            v.pop_back();
        }
        
        if ( (s[i] == ']') && ( !v.empty() ) && ( v.back() ==  '[') ) {
            v.pop_back();
        }
        
    }
    if (!v.empty())
        cout <<"NO";
    else
        cout <<"YES";
    return 0;
    
}
