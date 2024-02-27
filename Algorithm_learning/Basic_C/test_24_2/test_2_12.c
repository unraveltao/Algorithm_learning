#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char input[20] = { 0 };
    //system库函数，可执行系统文件    
    system("shutdown -s -t 60\n");   //关机程序
again:
    printf("entering :stop,to cancel the shutdown\n");
    scanf("%s",input);
    //两字符串的比较不能使用 == ，而使用strcmp函数
    //strcmp 如果判断两字符的内容相同，则返回0
    if(strcmp(input,"stop")== 0)
    {
        system("shutdown -a\n");
    }
    else
    {
        goto again;
    }
    return 0;
}
