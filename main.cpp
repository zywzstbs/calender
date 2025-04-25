#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};
typedef struct date Date;

void fun1();
void fun2();
void fun3();
void fun4();
void leapYear(int);
void maxDayOfMonth(int);
void weekday(Date);

int main()
{
    while (1)
    {
        int n;
        printf("请输入查询内容\n");
        printf("1.显示年历\n");
        printf("2.显示月历\n");
        printf("3.日历统计\n");
        printf("4.查询年历\n");
        printf("5.退出\n");
        if (n==5)
            break;
        scanf("%d", &n);
        switch (n)
        {
            case 1:
                fun1();
                break;
            case 2:
                fun2();
                break;;
            case 3:
                fun3();
                break;
            case 4:
                fun4();
                break;
            default:
                printf("输入错误，请重新输入\n");
        }
    }
    return 0;
}

void fun1()
{
    int year;
    printf("请输入年份\n");
    scanf("%d", &year);
}

void fun2()
{
    printf("2\n");
}

void fun3()
{
    printf("3\n");
}

void fun4()
{
    int n;
    printf("1.查询是否是闰年\n");
    printf("2.查询某月的最大天数\n");
    printf("3.查询某年某月某日是星期几\n");
    printf("4.查询某年某月某日是否是阴历或公历节日");
    scanf("%d", &n);
}