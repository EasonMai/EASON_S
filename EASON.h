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


#endif