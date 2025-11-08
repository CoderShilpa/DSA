#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();   // clear newline after number input

    string result;
    getline(cin, result);  // read full string with spaces
    
    stack<string> st;
    string word = "";

    for(int i=0;i<n && i<result.size();i++){  // avoid going out of range
        if(result[i] != ' '){
            word += result[i];
        } else {
            if(!word.empty()){   // ✅ push word when found
                st.push(word);
                word = "";
            }
        }
    }
    if(!word.empty()) st.push(word); // push last word

    string final = "";
    while(!st.empty()){
        final += st.top();
        st.pop();
        if(!st.empty()) final += ' ';
    }

    cout << final;
}
