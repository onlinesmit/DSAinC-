class Solution {
private:
    bool isValid(char ch){
        if((ch >= 'a' && ch <='z') || (ch >='A' && ch <= 'Z') || (ch >= '0' && ch<='9') )
        {
            return 1;
        }
        return 0;
    }


char lowerCase(char ch){
    if((ch >= 'a' && ch <='z' )|| (ch>='0' && ch <='9')){
        return ch;
    }
    else{
        char temp =ch -'A' +'a';
            return temp;
    }

}
bool pelindrome(string a){
    int i=0;
    int e =a.length()-1;
    while(i<e){
    if( (a[i]) !=  (a[e])){
        return 0;
    }
    else{
        i++;
        e--;
    }
}
return 1;
}

public:
    bool isPalindrome(string s) {
        int i=0;
        string temp = "";  

        for(int j=0; j<s.length(); j++){
            if(isValid(s[j])){
                temp.push_back(s[j]);
            }
        }

for(int j =0; j<temp.length(); j++){
    temp[j] = lowerCase(temp[j]);
}

return pelindrome(temp);
    }
};