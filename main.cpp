#include <stdio.h>
#include <time.h>

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

int dayOfYear(int,int,int);

int main()
{
    while (1)
    {
        int n;
        printf("�������ѯ����\n");
        printf("1.��ʾ����\n");
        printf("2.��ʾ����\n");
        printf("3.����ͳ��\n");
        printf("4.��ѯ����\n");
        printf("5.�˳�\n");
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
                printf("�����������������\n\n\n");
        }
    }
    return 0;
}

void fun1()
{
    int year;
    printf("���������\n");
    scanf("%d", &year);
}

void fun2()
{
    printf("2\n");
}

void fun3()
{
    int year, month, day, numOfDay;
    printf("�����������գ��м���/����\n");
    scanf("%d/%d/%d", &year, &month, &day);

    numOfDay = dayOfYear(year, month, day);
    printf("��һ���Ǹ���ĵ�%d��\n\n\n", numOfDay);


}

void fun4()
{
    int n;
    printf("1.��ѯ�Ƿ�������\n");
    printf("2.��ѯĳ�µ��������\n");
    printf("3.��ѯĳ��ĳ��ĳ�������ڼ�\n");
    printf("4.��ѯĳ��ĳ��ĳ���Ƿ���������������\n");
    printf("5.����\n");
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
            printf("�����������������\n\n\n");
    }
}

void leapYear()
{
    int year;
    printf("��������Ҫ��ѯ�����\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("�����������\n\n\n");
    else
        printf("����ݲ�������\n\n\n");
}

void maxDayOfMonth()
{
    int month, maxDay;
    printf("��������Ҫ��ѯ���·�\n");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        maxDay = 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        maxDay = 30;
    else if (month == 2)
        maxDay = 29;
    else
        printf("�����������������\n\n\n");
}

void weekday()
{
    int year, month, day, weekday;
    printf("�����������գ��м���/����\n");
    scanf("%d/%d/%d", &year, &month, &day);
    weekday = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    switch (weekday)
    {
        case 0:
            printf("��һ��������һ\n");
            break;
        case 1:
            printf("��һ�������ڶ�\n");
            break;
        case 2:
            printf("��һ����������\n");
            break;
        case 3:
            printf("��һ����������\n");
            break;
        case 4:
            printf("��һ����������\n");
            break;
        case 5:
            printf("��һ����������\n");
            break;
        case 6:
            printf("��һ����������\n");
            break;
    }
}

void festival()
{
    printf("todo\n");
}

int dayOfYear(int year, int month, int day)
{
    int numOfDay =0,i;
    for (i = 1; i < month; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            numOfDay+=31;
        else if (i == 4 || i == 6 || i == 9 || i == 11)
            numOfDay+=30;
        else
        {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                numOfDay+=29;
            else
                numOfDay+=28;
        }
    }
    numOfDay += day;
    return numOfDay;
}
