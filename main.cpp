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

void leapYear();

void maxDayOfMonth();

void weekday();

void festival();

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
        if (n == 5)
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
    printf("4.查询某年某月某日是否是阴历或公历节日\n");
    printf("5.返回\n");
    scanf("%d", &n);
    switch (n)
    {
        case 1:
            leapYear();
            break;
        case 2:
            maxDayOfMonth();
            break;
        case 3:
            weekday();
            break;
        case 4:
            festival();
            break;
        case 5:
            return;
        default:
            printf("输入错误，请重新输入\n");
    }
}

void leapYear()
{
    int year;
    printf("请输入需要查询的年份\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
        printf("该年份是闰年\n");
    else
        printf("该年份不是闰年\n");
}

void maxDayOfMonth()
{
    int month, maxDay;
    printf("请输入需要查询的月份\n");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        maxDay = 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        maxDay = 30;
    else if (month == 2)
        maxDay = 29;
    else
        printf("输入错误，请重新输入\n");
}

void weekday()
{
    int year, month, day, weekday;
    printf("请输入年月日，中间以/隔开\n");
    scanf("%d/%d/%d", &year, &month, &day);
    weekday = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    switch (weekday)
    {
        case 0:
            printf("这一天是星期一\n");
            break;
        case 1:
            printf("这一天是星期二\n");
            break;
        case 2:
            printf("这一天是星期三\n");
            break;
        case 3:
            printf("这一天是星期四\n");
            break;
        case 4:
            printf("这一天是星期五\n");
            break;
        case 5:
            printf("这一天是星期六\n");
            break;
        case 6:
            printf("这一天是星期日\n");
            break;
    }
}

void festival()
{
    printf("todo\n");
}
