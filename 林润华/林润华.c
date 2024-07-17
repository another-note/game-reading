#define _CRT_SECURE_NO_WARNINGS/*本地化编译器配置*/
#pragma warning(disable:6031)/*本地化编译器配置*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void 分钟制化小时制();
void 计算商和余数();
void 四舍五入();
void 三数交换();
void 数列加减();
void 计算e值();
void 输出闰年();
void 打印星形();
void 打印字符编码();
void main()
{
    打印字符编码();
}
static void 分钟制化小时制()
{
    printf("请输入总分钟:");
    double 总分钟 = 0;
    scanf("%lf", &总分钟);
    int 整总分钟 = (int)总分钟;
    int 整总小时 = 整总分钟 / 60;
    int 余下的整数分钟数 = 整总分钟 % 60;
    double 余下的小数分钟数 = 总分钟 - (double)整总分钟;
    double 余下的全分钟数 = 余下的整数分钟数 + 余下的小数分钟数;
    printf("转换后的时间为:%d小时,%lf分.", 整总小时, 余下的全分钟数);
}
static void 计算商和余数()
{
    printf("请输入两个整数:");
    int 整数1 = 0;
    int 整数2 = 0;
    scanf("%d%d", &整数1, &整数2);
    double 商 = (double)整数1 / (double)整数2;
    int 余数 = 整数1 % 整数2;
    printf("两数之商:%lf,两数之余:%d.", 商, 余数);
}
static void 四舍五入()
{
    printf("请输入三个小数:");
    double 小数1 = 0;
    double 小数2 = 0;
    double 小数3 = 0;
    scanf("%lf%lf%lf", &小数1, &小数2, &小数3);
    double 平均值 = (小数1 + 小数2 + 小数3) / (double)3;
    int 平均值左移一位并截断的数 = (int)(平均值 * 10);
    double 平均值变一位小数 = (double)平均值左移一位并截断的数 / 10.0;
    int 平均值左移两位并截断的数 = (int)(平均值 * 100);
    int 小数第二位 = (int)平均值左移两位并截断的数 % 10;
    double 平均值变两位小数 = (double)平均值左移两位并截断的数 / 100.0;
    if (小数第二位 >= 5)
        平均值变一位小数 = 平均值变一位小数 + 0.1;
    printf("他们仨平均值为:%.1lf", 平均值变一位小数);
}
static void 三数交换()
{
    printf("请输入三个整数:");
    int 整数1 = 0;
    int 整数2 = 0;
    int 整数3 = 0;
    scanf("%d%d%d", &整数1, &整数2, &整数3);
    int 整数1备份 = 整数1;
    int 整数3备份 = 整数3;
    整数2 = 整数1备份;
    整数3 = 整数2;
    整数1 = 整数3备份;
    printf("交换后整数1=%d,整数2=%d,整数3=%d", 整数1, 整数2, 整数3);
}
static void 数列加减()
{
    int 数 = -1;
    int 第几个数 = 0;
    int 和 = 0;
    while (数 < 101)
    {
        数 += 2;
        第几个数 += 1;
        和 += (int)pow(-1, 第几个数 + 1) * 数;
    }   
    printf("总和为:%d", 和);
}
static void 计算e值()
{
    int 带分母项数 = 1000;
    double 和 = 1.0 + 1.0 / 1.0;
    int 带分母加数n项 = 3;
    int 分母 = 1;
    double 带分母加数 = 0.0;
    while (带分母加数n项 <= 带分母项数)
    {
        分母 *= 分母 + 1;
        带分母加数 = 1.0 / (double)分母;
        if (带分母加数 < pow(10, -6))
        {
            break;
        }
        和 += 带分母加数;
        带分母加数n项++;
    }
    printf("e的值为:%lf", 和);
}
static void 输出闰年()
{
    int 公元最小值 = 2000;
    int 公元最大值 = 3000;
    int 序号 = 0;
    while (公元最小值 <= 公元最大值)
    {
        bool 能被4整除 = 公元最小值 % 4 == 0;
        bool 不能被100整除 = 公元最小值 % 100 != 0;
        bool 能被400整除 = 公元最小值 % 400 == 0;
        if ((能被4整除 && 不能被100整除) || 能被400整除)
        {
            序号++;
            printf("\t%d", 公元最小值);
            if (序号 % 10 == 0)
            {
                printf("\n");
            }
        }
        公元最小值++;
    }
}
static void 打印星形()
{
    int 行数 = 0;
    printf("请输入要打印的行数:");
    scanf("%d", &行数);
    double 分界数中介 = (double)行数 / 2.0;
    int 分界数 = 0;
    if (行数 % 2 == 0)
    {
        分界数 = (int)分界数中介;
    }
    else if (行数 % 2 == 1)
    {
        分界数 = (int)分界数中介 + 1;
    }
    for (int 行数 = 1; 行数 <= 分界数; 行数++)
    {
        for (int 空格数 = 分界数 - 行数; 空格数 > 0; 空格数--)
        {
            printf(" ");
        }
        for (int 星形数 = 行数 * 2 - 1; 星形数 > 0; 星形数--)
        {
            printf("*");
        }
        printf("\n");
    }
    分界数 = (int)分界数中介;
    for (int 行数 = 分界数; 行数 > 0; 行数--)
    {
        for (int 空格数 = 分界数 - 行数 + 1; 空格数 > 0; 空格数--)
        {
            printf(" ");
        }
        for (int 星形数 = 行数 * 2 - 1; 星形数 > 0; 星形数--)
        {
            printf("*");
        }
        printf("\n");
    }
}
static void 打印字符编码()
{
    char 字符 = ' ';
    int 输出次数 = 0;
    while ((字符 = getchar()) != '\n')
    {

    }
}