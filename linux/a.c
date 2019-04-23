
/*************************************************************************
	> File Name: zuoye.c
	> Author:bb 
	> Mail:657204541@qq.com 
	> Created Time: 2019年04月15日 星期一 09时04分43秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
int main(){
    printf("\033[1m\033[32mbb@bb-TM1701\033[0m");
  char buf[80];
    getcwd(buf,sizeof(buf));
    printf(":%s\n",buf);
    return 0;
}
