#include <cstdio>
#include<string>
#include<cstring>
#include<iostream>

using namespace std;

int compare(string str1, string str2) {
    if (str1.length() > str2.length()) return 1;
    else if (str1.length() < str2.length()) return -1;
    else return str1.compare(str2);
}

//高精度加法
//只能是两个正数相加
string add(string str1, string str2)//高精度加法
{
    string str;
    int len1 = str1.length();
    int len2 = str2.length();
    //前面补0，弄成长度相同
    if (len1 < len2) {
        for (int i = 1; i <= len2 - len1; i++)
            str1 = "0" + str1;
    } else {
        for (int i = 1; i <= len1 - len2; i++)
            str2 = "0" + str2;
    }
    len1 = str1.length();
    int cf = 0;
    int temp;
    for (int i = len1 - 1; i >= 0; i--) {
        temp = str1[i] - '0' + str2[i] - '0' + cf;
        cf = temp / 10;
        temp %= 10;
        str = char(temp + '0') + str;
    }
    if (cf != 0) str = char(cf + '0') + str;
    return str;
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    return 0;

}

