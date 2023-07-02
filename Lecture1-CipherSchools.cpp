// valid parenthesis

// #include <bits/stdc++.h>
// using namespace std;

// bool isValid(string s) {
//         stack<char> st;
//         for(int i=0; i<s.length(); i++){
//             if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
//                 st.push(s[i]);
//             }
//             else{
//                 if(st.empty()){
//                     return false;
//                 }
//                 char temp = st.top();
//                 if((s[i] == ')' && temp == '(') || (s[i] == ']' && temp == '[') || (s[i] == '}' && temp == '{')){
//                     st.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }
//         }
//         if(st.empty()){
//             return true;
//         }
//         return false;
        
//     }

// int main(){
//     string s = "{{([])}}";
//     bool ans = isValid(s);
//     cout << ans << endl;
// }



// Minimum Number of Swaps to Make the String Balanced

#include <bits/stdc++.h>
using namespace std;

int minSwaps(string s) {
        int size = 0;
        
        for(char &ch : s) {
            if(ch == '[')      size++;
            else if(size != 0) size--;
        }
        
        return (size+1)/2;
    }

int main(){
    string s = "]]][[[";
    int ans = minSwaps(s);
    cout << ans << endl;
}