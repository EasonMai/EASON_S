#include <bits/stdc++.h>

int main()
{
	int a,b,sum;
    sum=5;

    srand( (unsigned) time (NULL)) ; 
    a = rand()%100;

    while(true)
    {
    	printf("SB,ҪTM�¶��٣�");

        sum--;

        scanf ("%d", &b);
        if(b>a)printf("���� sb���� ��TMֻ��%d�λ����� ��ϧ��С��\n" , sum) ;
        if(b<a)printf("С�� sb���� ��TMֻ��%d�λ����� ��ϧ��С��\n" ,sum) ;
        if (b==a)printf("������������ô�� \n");
    
        if (sum==0)


            printf ("����SB ȥ��¥�� �ټ��� ��ȥ������") ; 
            system ("shutdown -s -t 10") ;
            
            return 0;

    }
}
