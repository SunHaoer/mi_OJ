#include<iostream>
#include<algorithm>
using namespace std;

void init1(string input, string &str1, string &str2) {
    int index = input.find('-');
    for(int i = 0; i < input.length(); i++) {
        if(i < index) str1 += input[i];
        else if(i > index) str2 += input[i];
    }
}

void init2(string str1, string &str2) {
    while(str2.length() < str1.length()) {
        str2 = '0' + str2;
    }
}

string substract(string str1, string str2) {
    string str = "";
    int len = str1.length();
    int a = 0, b = 0, c = 0;
    for(int i = len - 1; i >= 0; i--) {
        a = str1[i] - '0';
        b = str2[i] - '0';
        str += ((a - b - c + 10) % 10) + '0';
        if(a - b - c >= 0) c = 0;
        else c = 1;
    }
    reverse(str.begin(), str.end());
    return str;
}

void print(string str) {
    while(str[0] == '0') {
        str.erase(str.begin());
    }
    if(str.length() == 0) str = "0";
    cout<<str<<endl;
}

int main()
{
    string input, str, str1, str2;
    while(cin>>input) {
        init1(input, str1, str2);
        init2(str1, str2);
        str = substract(str1, str2);
        print(str);
    }
    return 0;
}
