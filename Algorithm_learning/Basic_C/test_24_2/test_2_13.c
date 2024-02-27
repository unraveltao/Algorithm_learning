#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//进行猜数字
void game()    //定义一个无返回类型的函数
{
    //1.随机生成1-100的数
    int num_r = rand()%100+1;
    //2.猜数字
    int guess = 0;
    int count = 5;
    system("cls");     //cls     clear screen
    while(count)
    {
        
        printf("There are still %d times",count);
        printf("please guess number:\n");
        scanf("%d",&guess);
        if (guess > num_r)
            printf("large\n");
        else if (guess < num_r)
            printf("small\n");
        else
        {
            printf("Congratulations,you guessed it right\n");
            break;        
        }
        count--;
    } 
    if(count == 0)
        printf("It pity that you don't have a chance anymore\n");
}
//开始菜单
void menu()
{
    printf("******************\n");
    printf("***** 1.play *****\n");
    printf("***** 0.exit *****\n");
    printf("******************\n");    
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));  //建立时间戳，产生随机种子
    do
    {
        menu();
        printf("chose:");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
        	printf("play\n");
            game();
            break;
        case 0:
        	printf("exit\n");        
            break;
        default:
            printf("Error,please reselect\n");
            break;       
        }        
    }while(input);
    return 0; 
}