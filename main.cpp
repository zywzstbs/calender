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
        printf("�������ѯ����\n");
        printf("1.��ʾ����\n");
        printf("2.��ʾ����\n");
        printf("3.����ͳ��\n");
        printf("4.��ѯ����\n");
        printf("5.�˳�\n");
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
    printf("4.��ѯĳ��ĳ��ĳ���Ƿ���������������");
    scanf("%d", &n);
}