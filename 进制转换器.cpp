#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int number;  //��ת��������
    cout<<"����Ҫת�������� :";
    cin>>number;
    int jinzhi;   //����ת��Ϊ�����ƣ�2���ƾ�����Ϊ2��3���ƾ�����Ϊ3 ���ر�ע�⣺����10��������ʹ�ã���ת��2-9������Ч��
    cout<<"����ת��Ϊ������ ��";
    cin>>jinzhi;
    int mid_trans[100];   //��ʱ�洢ת�����
    memset(mid_trans,-1,sizeof(mid_trans));   //��ʼ����������Ԫ��Ϊ-1
    int yu = number;
    int k=0;
    while(yu>=jinzhi)
    {
        mid_trans[k]=yu%jinzhi;  //��ת�������ʱ������mid_trans������
        yu = yu/jinzhi;
        k++;
    }
    mid_trans[k]=yu;
    int Final[100];
    int jj=0;
    memset(Final, -1, sizeof(Final));
    for(int i=0;i<100;i++)    //��ת�������������ս��������
    {
        if(mid_trans[i]!=-1)
        {
            Final[jj]=mid_trans[i];
            jj++;
        }
        else break;
    }
    cout<<"ת�����Ϊ��";
    for(int i=jj-1;i>=0;i--)   //����������
    {
        cout<<Final[i]<<" ";
    }
    cout<<endl;
    return  0;
}

