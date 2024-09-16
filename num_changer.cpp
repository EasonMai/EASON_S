#include <iostream>
#include <cstdio>
#include <stack>
#include <string>
using namespace std;
/*
 * M����ת����N����
 * */
int Char2Int(char target) {
    if (target >= '0' && target <= '9') {
        return target - '0';
    } else {
        return target - 'a' + 10;
    }
}
// M����ת����ʮ���Ƶ�������
int ConverM2T(string str,int m){
    int number = 0; //������10�����µı�ʾ
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
//ʮ����ת����N����
void ConvertT2N(int number,int n){
    stack<char> s;
    while (number) {
        s.push(Int2Char(number % n));
        number /= n;
    }
    if (s.empty()) {    //��������0ʱ�����Ҳ��0
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
        int number = ConverM2T(str, m);// M����ת����ʮ���Ƶ�������
        // �ٰѸ���ת����N����
        ConvertT2N(number, n);
    }
    return  0;
}
