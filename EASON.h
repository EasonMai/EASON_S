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


#define MAXCHAR 101 /*最大允许字符串长度*/
/*将字符转换成数字*/

int char_to_num(char ch)

{

if(ch>='0' && ch<='9')

return ch-'0'; /*将数字字符转换成数字*/

else

return ch-'A'+10; /*将字母字符转换成数字*/

}

char num_to_char(int num)

{

if(num>=0 && num<=9)

return (char)('0'+num-0); /*将0~9之间的数字转换成字符*/

else

return (char)('A'+num-10); /*将大于10的数字转换成字符*/

}

long source_to_decimal(char temp[], int source)

{

long decimal_num = 0; /*存储展开之后的和*/

int length;

int i;

for( i=0; temp[i]!='\0'; i++ );

length=i;

for( i=0; i<=length-1; i++ ) /*累加*/

decimal_num = (decimal_num*source) + char_to_num(temp[i]);

return decimal_num;

}

int decimal_to_object(char temp[], long decimal_num, int object)

{

int i=0;

while(decimal_num)

{

temp[i] = num_to_char(decimal_num % object); /*求出余数并转换为字符*/

decimal_num = decimal_num / object; /*用十进制数除以基数*/

i++;

}

temp[i]='\0';

return i;

}
/*the main*/

int Base_converter(char temp[MAXCHAR];long decimal_num;int length;int object;int source;){

	
	
	 /*source存储原数制*/

	 /*object存储目标数制*/

	 /*length存储转换成目标数制后字符数组的长度*/

	 /*decimal_num存储转换成的10进制数*/

	 /*temp:存储待转换的数值和转换后的数值*/
	




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
/*Tom li出品,仅供学习使用！！！未经作者同意禁止转载！！*/ 


int bracket_left_position;			//记录左括号的位置 
int bracket_right_position;			//记录右括号的位置 
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

#endif
