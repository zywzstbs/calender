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
                printf("�����������������\n");
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
    printf("3\n");
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
            printf("�����������������\n");
    }
}

void leapYear()
{
    int year;
    printf("��������Ҫ��ѯ�����\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
        printf("�����������\n");
    else
        printf("����ݲ�������\n");
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
        printf("�����������������\n");
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
