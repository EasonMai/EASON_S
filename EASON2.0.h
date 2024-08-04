// C++ includes used for precompiling -*- C++ -*-
 
// Copyright (C) 2003-2013 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
 
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
 
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
 
// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <Licenses - GNU Project - Free Software Foundation>.
 
/** @file EASON.h
 *  This is an implementation file for a precompiled header.
 */
 
// 17.4.1.2 Headers
 #include<fstream>
#include <tchar.h>
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <ctime>
#include <cstdlib>
#include <stdio.h>  
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <unistd.h>
#include <fstream>
#include<emmintrin.h>
// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif
 
// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
 
#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>


#define MAXCHAR 101 /*��������ַ�������*/
/*���ַ�ת��������*/

int char_to_num(char ch)

{

if(ch>='0' && ch<='9')

return ch-'0'; /*�������ַ�ת��������*/

else

return ch-'A'+10; /*����ĸ�ַ�ת��������*/

}

char num_to_char(int num)

{

if(num>=0 && num<=9)

return (char)('0'+num-0); /*��0~9֮�������ת�����ַ�*/

else

return (char)('A'+num-10); /*������10������ת�����ַ�*/

}

long source_to_decimal(char temp[], int source)

{

long decimal_num = 0; /*�洢չ��֮��ĺ�*/

int length;

int i;

for( i=0; temp[i]!='\0'; i++ );

length=i;

for( i=0; i<=length-1; i++ ) /*�ۼ�*/

decimal_num = (decimal_num*source) + char_to_num(temp[i]);

return decimal_num;

}

int decimal_to_object(char temp[], long decimal_num, int object)

{

int i=0;

while(decimal_num)

{

temp[i] = num_to_char(decimal_num % object); /*���������ת��Ϊ�ַ�*/

decimal_num = decimal_num / object; /*��ʮ���������Ի���*/

i++;

}

temp[i]='\0';

return i;

}
/*the main*/

int Base_converter(char temp[MAXCHAR];long decimal_num;int length;int object;int source;){

	
	
	 /*source�洢ԭ����*/

	 /*object�洢Ŀ������*/

	 /*length�洢ת����Ŀ�����ƺ��ַ�����ĳ���*/

	 /*decimal_num�洢ת���ɵ�10������*/

	 /*temp:�洢��ת������ֵ��ת�������ֵ*/
	




	decimal_num = source_to_decimal(temp, source);

	length = decimal_to_object(temp, decimal_num, object);

	return temp;
	

}


double rounding_off(double source;long want_to){
	int a;
	source*=100;
	source*=want_to;
	a=int(source);
	source-=int(source);
	source*=10;
	if (int(source)<=4)int(source)=0;
	else:a++;
	int(source)=0;
	int(source)=a;
	source/=100;
	source/=want_to;
	return source;
}
/*Tom ��Ʒ,����ѧϰʹ�ã�����δ������ͬ���ֹת�أ���*/ 


int bracket_left_position;			//��¼�����ŵ�λ�� 
int bracket_right_position;			//��¼�����ŵ�λ�� 
int bracket_counter;
char bracket_str[100];
void bracket(char bracket_left,char bracket_right,char str_bracketFunction[100])
{
	for (bracket_counter=0;bracket_counter<=99;++bracket_counter)
	{
		if (str_bracketFunction[bracket_counter]==bracket_right)
		{
			bracket_right_position=bracket_counter;
			break;
		}
	}
	
	
	
	for (bracket_counter=bracket_right_position;bracket_counter>=0;--bracket_counter)
	{
		if (str_bracketFunction[bracket_counter]==bracket_left)
		{
			bracket_left_position=bracket_counter;
			break;
		}
	}
	//cout<<"left:"<<bracket_left_position<<endl;
	//cout<<"right:"<<bracket_right_position<<endl;
	
	
	
	for (int bracket_str_counter=0,bracket_counter=bracket_left_position+1;
		bracket_str_counter<bracket_right_position-bracket_left_position-1,bracket_counter<bracket_right_position;
		++bracket_str_counter,++bracket_counter)
	{
		bracket_str[bracket_str_counter]=str_bracketFunction[bracket_counter];
	}
	return bracket_str 
}





bool is_emptys(struct Arr* arrs)
{
	if (arrs->cnt==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//չʾ����������Ԫ��

void show_arr(struct Arr& arr)
{
	//���������void show_arr(struct Arr* arr,int length)
	//��ôarrָ�����ָ��ṹ��arr�е�pabse������arr->pabase//������int*
	//&arr��ʾ����ȥָ�����arr�ĵ�ַ��ָ�����Ϊint �ͺţ�������struct arr*��ָ�����

	if (is_emptys(&arr))
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{ 
		for (int i = 0;i < arr.cnt;i++)
		{
			cout << "�����ֵ��СΪ��" << *(arr.pbase) << " " << "��ַΪ�� " << arr.pbase << endl;
			arr.pbase++;
		}
	
	}
	
}


//�����ʼ��

void init_arr(struct Arr* arrs,int length)
{
	arrs->pbase = (int*)malloc(sizeof(int) * length);  **//�൱��arrsָ�������ָ��ṹ������е�pbase**
	if (NULL == arrs->pbase)
	{
		printf("��̬�ڴ����ʧ��");
		exit(-1);//��ֹ��������
	}
	else
	{
		arrs->len = length;
		arrs->cnt = 0;
	}
	return;//������ֹ

}


//����׷��

bool append_arr(struct Arr* arrs, int val)
{
	if (is_full(arrs))
	{
		return false;
	}
	else
	{
		arrs->pbase[arrs->cnt] = val;
		(arrs->cnt)++;
		return true;
	}
}

//�ж������Ƿ���

bool is_full(struct Arr* arr)
{
	if (arr->cnt == arr->len)
	{
		printf("%s\n", "����������");
		return true;
	}
	else
	{
		return false;
	}
}

//��������

bool insert_arr(struct Arr* arrs, int pos, int val)
{
	if (is_full(arrs))
	{
		return false;
	}
	if (pos<1 || pos>arrs->cnt + 1)
		return false;
	//�ڵ�3��λ�ò�������8����ô����2�����������ȫ��Ҫƫ��  
	for (int i = arrs->cnt;i >=pos;i--)
	{
		arrs->pbase[i] = arrs->pbase[i-1];
			
	}
	arrs->pbase[pos - 1] = val;
	(arrs->cnt)++;

	
}


//ɾ��������ָ��λ��ɾ��ĳ��Ԫ��

bool delete_arr(struct Arr* arrs, int pos, int* pval)
{
	if (is_emptys(arrs))
	{
		cout << "����Ϊ��" << endl;
	}
	*pval=arrs->pbase[pos - 1];
	if (pos<1 || pos>arrs->cnt)
		return false;
	else
	{
		for (int i = pos-1;i < arrs->cnt;i++)
		{
			arrs->pbase[i] = arrs->pbase[i+1];
		}
		(arrs->cnt)--;
		
	}
	return true;
}


void swimming_pool_admin()//don't use
{
	char past_word="Github",a={},b[11];
	int num_of_times[1000]={},c,d=-1;
	cout<<"past_word:";
	cin>>a;
	
	if(past_word==a){
		ifstream f("swimming_data.txt")
		ofstream f("swimming_data.txt")
		char phone_num[1000]={},
		cout<<"please wait a moment..."
	    for(int i=0;i<=2000;i++){
	    	if((i+1)%2!=0){
	    		f.getline(phone_num,11)
			} 
			else {
				f.get(a)
			    f.getline(num_of_times,a)
			} 
		}
		while(1){
			system("cls")
		    cout<<"choose the things you want do:"
		    cout<<"1.add user"
		    cout<<"2.change user's number of times"
		    cout<<"3.exit"
		    cin>>a;
		    switch(a){
		    	case 1:{
		    		cout<<"name(telephone_number):"
		    		scanf("%s",&b);
		    		cout<<"number of times:"
		    		cin>>c;
					for(int i=0;i<=1000;i++){
		    			if(phone_num[i]==0){d=i+1;
		    			   break;
						}
						
						
					}
					phone_num[d]=b;
					num_of_times[d]=c;
					break;
				}
		    	case 2:{
		    		cout<<"name(telephone_number):"
		    		scanf("%s",&b);
		    		cout<<"number of times:"
		    		cin>>c;
		    		for(int i=0;i<=1000;i++){
		    			if(b==phone_num){d=i;
		    			   break;
						}
						
					}
					if(d=-1)cout<<"no found."
					else {
						num_of_times[d]=c;
						cout<<"Modified successfully!" 
					}
					break;
				}
		    	case 3:break; 
			}
			if(a==3){
				cout<<"admin,have a nice day!";
				break;
			}
			else continue;
		}
		ofstream truncateFile("swimming_data.txt", ios::trunc);
		for(int i=0;i<=2000;i++){
			if ((i+1)%2!=0)f<<phone_num[i]<<endl;
			else f<<num_of_times[i]<<endl;
		}
	}
	else cout<<"go away!guys.";
 } 
#endif
