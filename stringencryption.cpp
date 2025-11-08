#include<iostream>
#include<string>
using namespace std;

int main(){
    string plaintext;
    int key;
    getline(cin,plaintext);
    cin>>key;
    if(key <= 0){
        cout<<"INVAILD INPUT"<<endl;
        return 0;
    }

    string encryptText  = "";
     for(int i = 0;i<plaintext.length();i++){
        char ch = plaintext[i];
        if(ch >= '0' && ch <= '9'){
          encryptText += (char)((((ch-'0')+key)%10 +key)+'0');
        }
        else if(ch >= 'A' && ch <= 'Z'){
            encryptText += (char)((((ch-'A')+key)%26)+'A');
        }
         else if(ch >= 'a' && ch <= 'z'){
            encryptText += (char)((((ch-'a')+key)%26)+'a');
        } else{
            encryptText += ch;
        }
     }

     cout << encryptText << endl;

     return 0;
}

// cesar cipher
// encryptText += (char)((((ch-'0')+key)%10 +key)+'0');  i use here this (char) to change ascii to character