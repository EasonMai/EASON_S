#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int number;  //被转化的数字
    cout<<"输入要转换的数字 :";
    cin>>number;
    int jinzhi;   //设置转化为几进制，2进制就设置为2，3进制就设置为3 （特别注意：仅限10进制以下使用，即转换2-9进制有效）
    cout<<"输入转换为几进制 ：";
    cin>>jinzhi;
    int mid_trans[100];   //暂时存储转换结果
    memset(mid_trans,-1,sizeof(mid_trans));   //初始化数组所有元素为-1
    int yu = number;
    int k=0;
    while(yu>=jinzhi)
    {
        mid_trans[k]=yu%jinzhi;  //将转换结果暂时保存在mid_trans数组中
        yu = yu/jinzhi;
        k++;
    }
    mid_trans[k]=yu;
    int Final[100];
    int jj=0;
    memset(Final, -1, sizeof(Final));
    for(int i=0;i<100;i++)    //将转化结果存放在最终结果数组中
    {
        if(mid_trans[i]!=-1)
        {
            Final[jj]=mid_trans[i];
            jj++;
        }
        else break;
    }
    cout<<"转化结果为：";
    for(int i=jj-1;i>=0;i--)   //逆序输出结果
    {
        cout<<Final[i]<<" ";
    }
    cout<<endl;
    return  0;
}

