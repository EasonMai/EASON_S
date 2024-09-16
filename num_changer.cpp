#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;
/*
 * M进制转换成N进制
 * */
int Char2Int(char target) {
    if (target >= '0' && target <= '9') {
        return target - '0';
    } else {
        return target - 'a' + 10;
    }
}
// M进制转换成十进制的数返回
int ConverM2T(string str,int m){
    int number = 0; //该数在10进制下的表示
    for (int i = 0; i < str.size(); ++i) {
        number *= m;
        number += Char2Int(str[i]);
    }
    return number;
}
 
char Int2Char(int target){
    if (target < 10) {
        return target + '0';
    } else {
        return target - 10 + 'a';
    }
}
//十进制转换成N进制
void ConvertT2N(int number,int n){
    stack<char> s;
    while (number) {
        s.push(Int2Char(number % n));
        number /= n;
    }
    if (s.empty()) {    //当输入是0时，输出也是0
        printf("0");
    }
    while (!s.empty()) {
        printf("%c", s.top());
        s.pop();
    }
    printf("\n");
}
 
int main(){
    int m,n;
    while (scanf("%d%d",&m,&n)!=EOF){
        string str;
        cin >> str;
        int number = ConverM2T(str, m);// M进制转换成十进制的数返回
        // 再把该数转换成N进制
        ConvertT2N(number, n);
    }
    return  0;
}
