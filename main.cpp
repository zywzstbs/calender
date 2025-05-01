#include <stdio.h>
#include <time.h>
#include <math.h>

void fun1();

void fun2();

void fun3();

void fun4();

void leapYear();

void maxDayOfMonth();

void weekday();

void festival();

int dayOfYear(int, int, int);

int printTable(int,int);

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
                printf("输入错误，请重新输入\n\n\n");
        }
    }
    return 0;
}

void fun1()
{
    int year,month;
    printf("请输入年份\n");
    scanf("%d", &year);
    char a[13][7]={"一","二","三","四","五","六","七","八","九","十","十一","十二"};
    for (month=1;month<=12;month++)
    {
        printf("%s月\n",a[month-1]);
        printTable(year,month);
        printf("\n\n");
    }

}

void fun2()
{
    int year,month;
    printf("请输入年份和月份，以/隔开\n");
    scanf("%d/%d", &year, &month);
    printTable(year,month);
    printf("\n\n");
}

void fun3()
{
    int year, month, day, numOfDay;
    printf("请输入年月日，中间以/隔开\n");
    scanf("%d/%d/%d", &year, &month, &day);

    numOfDay = dayOfYear(year, month, day);
    printf("这一天是该年的第%d天\n", numOfDay);

    time_t timep;
    struct tm *tm;
    time(&timep);
    tm = localtime(&timep);
    int date_i = tm->tm_mday;
    int month_i = tm->tm_mon + 1;
    int year_i = tm->tm_year + 1900;
    int numOfDay_today = dayOfYear(year_i, month_i, date_i);
    printf("这一天距离今天%d天\n\n\n", abs(numOfDay_today - numOfDay));
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
            printf("输入错误，请重新输入\n\n\n");
    }
}

void leapYear()
{
    int year;
    printf("请输入需要查询的年份\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("该年份是闰年\n\n\n");
    else
        printf("该年份不是闰年\n\n\n");
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
        printf("输入错误，请重新输入\n\n\n");
    printf("该月最大天数为%d\n\n\n", maxDay);
}

void weekday()
{
    int year, month, day, weekday, q, m, j, k;
    printf("请输入年月日，中间以/隔开\n");
    scanf("%d/%d/%d", &year, &month, &day);

    q = day;
    if (month == 1 || month == 2)
    {
        m = month + 12;
        year--;
    } else
        m = month;
    j = year / 100;
    k = year % 100;
    weekday = (q + (26 * (m + 1) / 10) + k + k / 4 + 5 * j + j / 4) % 7-2;
    if (weekday <0)
        weekday += 7;

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
    printf("\n\n");
}

void festival()
{
    printf("todo\n");
}

int dayOfYear(int year, int month, int day)
{
    int numOfDay = 0, i;
    for (i = 1; i < month; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            numOfDay += 31;
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            numOfDay += 30;
        else
        {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                numOfDay += 29;
            else
                numOfDay += 28;
        }
    }
    numOfDay += day;
    return numOfDay;
}

int printTable(int year, int month)
{
    int  weekday, i, count = 0, dateNum,q,m,j,k;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        dateNum = 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        dateNum = 30;
    else
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            dateNum = 29;
        else
            dateNum = 28;
    }

    q = 1;
    if (month == 1 || month == 2)
    {
        m = month + 12;
        year--;
    } else
        m = month;
    j = year / 100;
    k = year % 100;
    weekday = (q + (26 * (m + 1) / 10) + k + k / 4 + 5 * j + j / 4) % 7-1;
    if (weekday <0)
        weekday += 7;

    printf("日\t一\t二\t三\t四\t五\t六\t\n");

    if (weekday != 7)
    {
        for (i = 0; i < weekday; i++)
        {
            printf("\t");
            count++;
        }
    }
    for (i = 1; i <= dateNum; i++)
    {
        printf("%d\t", i);
        count++;
        if (count % 7 == 0)
            printf("\n");
    }
}