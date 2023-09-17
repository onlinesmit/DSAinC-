// #include<iostream>
// #include<string>
// using namespace std;

// //input= aabbbssssc  output= a2b3s4c

// string compress(const string& str){

//     if(str.empty()){
//         return " ";
//     }
//     string compressed;
//     char current_char = str[0];
//     int char_count =0;

//     for (size_t i = 0; i < str.length(); ++i)
//     {
//         if (str[i]==current_char)
//         {
//             char_count++;
//         }
//         else
//         {
//             compressed += current_char;
//             if (char_count>1)
//             {
//                 compressed += to_string(char_count);
//             }
//             current_char =str[i];
//             char_count = 1;
            
//         }
        
//     }

//     compressed += current_char;
//     if (char_count >1){
//         compressed += to_string(char_count);
//     }

//         return compressed;
    
// }
//     int main(){
//         string input;
//         cout << "Enter a string: ";
//         cin>>input;

//         string compressed = compress(input);
//         cout << "Compressed string is: " << compressed<< endl;

//         return 0;

//     }
    
    
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    map < char, int > m;
    for (auto i: s) m[i]++;
    for (auto i: m) cout << i.first << i.second;
}

