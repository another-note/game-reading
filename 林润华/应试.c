﻿#define _CRT_SECURE_NO_WARNINGS/*本地化编译器配置*/
#pragma warning(disable:6031)/*本地化编译器配置*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
void 分钟制化小时制();
void 计算商和余数();
void 四舍五入();
void 三数交换();
void 每次加2数列加减();
void 计算e值();
void 输出闰年();
void 打印星形();
void 打印字符编码();
void 去数字空格();
void 统计输入行数();
void 统计小写字母();
void 字母金字塔();
int 累乘(int 上限值);
void 计算k从0到n的累乘的和();
bool 判断是否是素数(int 数值);
int 求余数(int 被除数, int 除数);
void 每次分母加1数列加减();
void 分母方累减(int 分母上限值);
void 一元二次方程求解(double 二次项系数, double 一次项系数, double 常数项);
float 浮点数相加减(float 浮点1, float 浮点2, float* 和, float* 差);
double 三数找最大(double 数1, double 数2, double 数3, double* 最大值);
void 统计数字个数();
void 删除数组元素();
void 数组取奇数();
void 字母由大到小排序();
void 有序数组插入数据();
void 十进制转二进制();
void 生成15个不同的随机数();
void 方阵中求和();
void 九九乘法表();
void 求矩阵行和最大值();
void 逆置矩阵();
void 获取一行输入();
void 输出一行();
bool 判断回文();
char* 删除字符();
void 命令行按要求打印(int 字符串个数, char** 字符串);
int 字符串转数字(char* 字符串);
void 递归十进制转二进制(int 数);
void 数列求和(int 数, int 和);
int 打印斐波那契数(int 项数);
/*
void main(int 字符串个数, char** 字符串)
{
    printf("%d", 打印斐波那契数(5));
}
*/
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
static void 每次加2数列加减()
{
    int 数 = -1;
    int 第几个数 = 0;
    int 和 = 0;
    while (数 < 101)
    {
        数 += 2;
        第几个数++;
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
        printf("\t%d", 字符);
        输出次数++;
        if (输出次数 % 3 == 0)
        {
            printf("\n");
        }
    }
}
static void 去数字空格()
{
    char 字符 = ' ';
    while ((字符 = getchar()) != '\n')
    {
        if (字符 != ' ')
        {
            putchar(字符);
        }
    }
}
static void 统计输入行数()
{
    char 字符 = ' ';
    int 行数 = 0;
    while ((字符 = getchar()) != '!')
    {
        if (字符 == '\n')
        {
            行数++;
        }
    }
    printf("%d行", 行数);
}
static void 统计小写字母()
{
    char 字符 = ' ';
    int 小写字母个数 = 0;
    while ((字符 = getchar()) != '\n')
    {
        if (字符 >= 'a' && 字符 <= 'z')
        {
            小写字母个数++;
        }
    }
    printf("小写字母有%d个", 小写字母个数);
}
static void 字母金字塔()
{
    int 总行数 = 0;
    printf("请输入行数:");
    scanf("%d", &总行数);
    int 当前所在行数 = 1;
    while (当前所在行数 <= 总行数)
    {
        int 空格数 = 总行数 - 当前所在行数;
        while (空格数-- > 0)
        {
            printf(" ");
        }
        int 字母数 = 1 + (当前所在行数 - 1) * 2;
        char 字母 = 'A' + 当前所在行数 - 1;
        while (字母数-- > 0)
        {
            printf("%c", 字母);
        }
        printf("\n");
        当前所在行数++;
    }
}
static int 累乘(int 上限值)
{
    int 最终值 = 1;
    int 计数 = 1;
    while (++计数 <= 上限值)
    {
        最终值 *= (最终值 + 1);
    }
    return 最终值;
}
static void 计算k从0到n的累乘的和()
{
    printf("请输入上限值:");
    int 上限值 = 0;
    scanf("%d", &上限值);
    long 和 = 0;
    int 索引 = 0;
    while (++索引 <= 上限值)
    {
        和 += 累乘(索引);
    }
    printf("%ld", 和);
}
static bool 判断是否是素数(int 数值)
{
    bool 是素数 = 1;
    int 除数 = 2;
    while (除数++ < 数值 / 2)
    {
        if (数值 % 除数 == 0)
        {
            是素数 = 0;
            break;
        }
    }
    return 是素数;
}
static int 求余数(int 被除数, int 除数)
{
    return 被除数 % 除数;
}
static void 每次分母加1数列加减()
{
    printf("请输入分母上限值:");
    int 分母上限值 = 0;
    scanf("%d", &分母上限值);
    double 和 = 0;
    int 分母 = 1;
    while (分母 <= 分母上限值)
    {
        和 += pow(-1, 分母 + 1) / 分母;
    }
    printf("%lf", 和);
}
static void 分母方累减(int 分母上限值)
{
    int 分母 = 1;
    double 和 = 1;
    while (++分母 <= 分母上限值)
    {
        和 -= 1 / (pow(分母, 2));
    }
}
static void 一元二次方程求解(double 二次项系数, double 一次项系数, double 常数项)
{
    double 判别式 = pow(一次项系数, 2) - 4 * 二次项系数 * 常数项;
    double x1 = (-一次项系数 - sqrt(判别式)) / 2 * 二次项系数;
    double x2 = (-一次项系数 + sqrt(判别式)) / 2 * 二次项系数;
}
static float 浮点数相加减(float 浮点1, float 浮点2,float* 和,float* 差)
{
    *和 = 浮点1 + 浮点2;
    *差 = 浮点1 - 浮点2;
}
static double 三数找最大(double 数1, double 数2, double 数3, double* 最大值)
{
    if (数1 >= 数2 && 数1 >= 数3)*最大值 = 数1;
    else if (数2 >= 数1 && 数2 >= 数3)*最大值 = 数2;
    else *最大值 = 数3;
}
static void 统计数字个数()
{
    int 个数[10] = { 0 };
    char 数字 = ' ';
    while ((数字 = getchar()) != '\n')
    {
        个数[数字 - '0']++;
    }
    for (int 索引 = 0; 索引 < 10; 索引++)
    {
        printf("%d:%d\n", 索引, 个数[索引]);
    }
}
static void 删除数组元素()
{
    int 数字 = 0;
    int 数组[10] = { 0 };
    for (int 索引 = 0; 索引 < 10; 索引++)
    {
        数字 = rand() % 100;
        数组[索引] = 数字;
        printf("数组[%d]:%d ", 索引, 数组[索引]);
    }
    printf("\n");
    printf("请输入删除元素的索引:");
    int 删除索引位 = 0;
    scanf("%d", &删除索引位);
    for (int 索引 = 删除索引位; 索引 < 10 - 1; 索引++)
    {
        数组[索引] = 数组[索引 + 1];
    }
    for (int 索引 = 0; 索引 < 10; 索引++)
    {
        printf("数组[%d]:%d ", 索引, 数组[索引]);
    }
    printf("\n");
}
static void 数组取奇数()
{
    int 奇数索引 = 0;
    int 奇数数组[5] = { 0 };
    int 数组[5] = { 1,2,3,4,5 };
    for (int 索引 = 0; 索引 < 5; 索引++)
    {
        if (数组[索引] % 2 == 1)
        {
            奇数数组[奇数索引++] = 数组[索引];
        }
    }
    for (int 索引 = 0; 索引 < 5; 索引++)
    {
        printf("%d\n", 奇数数组[索引]);
    }
}
void 字母由大到小排序()
{
    char 字母[5] = { 'h','s','a','w','q' };
    char 中间值 = ' ';
    for (int 最大字母位置 = 0; 最大字母位置 < 5 - 1; 最大字母位置++)
    {
        for (int 遍历位置 = 最大字母位置 + 1; 遍历位置 < 5; 遍历位置++)
        {
            if (字母[最大字母位置] < 字母[遍历位置])
            {
                中间值 = 字母[最大字母位置];
                字母[最大字母位置] = 字母[遍历位置];
                字母[遍历位置] = 中间值;
            }
        }
    }
    for (int 索引 = 0; 索引 < 5; 索引++)
    {
        printf("%c ", 字母[索引]);
    }
}
static void 有序数组插入数据()
{
    int 数组[5] = { 1,2,3,4,5 };
    int 数据 = 2;
    for (int 索引 = 0; 索引 < 5; 索引++)
    {
        if (数据 >= 数组[索引] && 数据 <= 数组[索引 + 1])
        {
            for (int 数组末端 = 4; 数组末端 > 索引; 数组末端--)
            {
                数组[数组末端] = 数组[数组末端 - 1];
            }
            数组[索引 + 1] = 数据;
            break;
        }
    }
    for (int 索引 = 0; 索引 < 5; 索引++)
    {
        printf("%d ", 数组[索引]);
    }
}
static void 十进制转二进制()
{
    int 十进制 = 99;
    int 二进制 = 0;
    int 数组[10] = { 0 };
    int 索引 = 0;
    for (int 余数 = 0; 十进制 >= 1; 十进制 /= 2)
    {
        余数 = 十进制 % 2;
        数组[索引] = 余数;
        索引++;
    }
    for (索引 = 10 - 1; 索引 >= 0; 索引--)
    {
        printf("%d", 数组[索引]);
    }
}
static void 生成15个不同的随机数()
{
    int 数 = 0;
    int 数组[15] = { 0 };
    int 索引 = 0;
    while (索引 < 15)
    {
        数 = rand() % 20;
        for (int 数组索引 = 0; 数组索引 < 15; 数组索引++)
        {
            if (数 == 数组[数组索引])
            {
                数 = rand() % 20;
                数组索引 = 0;
            }
        }
        数组[索引] = 数;
        索引++;
    }
    for (索引 = 0; 索引 < 15; 索引++)
    {
        printf("%d ", 数组[索引]);
    }
}
static void 方阵中求和()
{
    int 方阵[2][2] = { {1,2},{3,4} };
    int 第一行和 = 0;
    for (int 索引 = 0; 索引 < 2; 索引++)
    {
        第一行和 += 方阵[0][索引];
    }
    int 第一列和 = 0;
    for (int 索引 = 0; 索引 < 2; 索引++)
    {
        第一列和 += 方阵[索引][0];
    }
    int 对角线和 = 0;
    for (int 索引 = 0; 索引 < 2; 索引++)
    {
        对角线和 += 方阵[索引][索引];
    }
}
static void 九九乘法表()
{
    for (int 横索引 = 0; 横索引 <= 9; 横索引++)
    {
        printf("\t(%d)", 横索引);
    }
    printf("\n");
    for (int 纵索引 = 1; 纵索引 <= 9; 纵索引++)
    {
        printf("\t(%d)", 纵索引);
        for (int 内索引 = 1; 内索引 <= 9; 内索引++)
        {
            printf("\t%d", 纵索引 * 内索引);
        }
        printf("\n");
    }
    printf("\n");
}
static void 求矩阵行和最大值()
{
    int 矩阵[5][4] = { 0 };
    int 行和[4] = { 0 };
    for (int 行 = 0; 行 < 4; 行++)
    {
        for (int 列 = 0; 列 < 5; 列++)
        {
            矩阵[列][行] = rand() % 100;
        }
    }
    for (int 行 = 0; 行 < 4; 行++)
    {
        for (int 列 = 0; 列 < 5; 列++)
        {
            行和[行] += 矩阵[列][行];
        }
    }
    int 行和最大值 = 0;
    int 行和最大的行 = 0;
    for (int 行 = 0; 行 < 4; 行++)
    {
        if (行和最大值 < 行和[行])
        {
            行和最大值 = 行和[行];
            行和最大的行 = 行;
        }
    }
    int 中间值 = 0;
    for (int 列 = 0; 列 < 5; 列++)
    {
        中间值 = 矩阵[列][行和最大的行];
        矩阵[列][行和最大的行] = 矩阵[列][0];
        矩阵[列][0] = 中间值;
    }
    for (int 行 = 0; 行 < 4; 行++)
    {
        for (int 列 = 0; 列 < 5; 列++)
        {
            printf("\t%d", 矩阵[列][行]);
        }
        printf("\n");
    }
}
static void 逆置矩阵()
{
    int 矩阵[5][5] = { 0 };
    for (int 行 = 0; 行 < 5; 行++)
    {
        for (int 列 = 0; 列 < 5; 列++)
        {
            矩阵[列][行] = rand() % 100;
            printf("\t%d", 矩阵[列][行]);
        }
        printf("\n");
    }
    printf("\n");
    int 中间值 = 0;
    for (int 行 = 0; 行 < 5; 行++)
    {
        for (int 列 = 行; 列 < 5; 列++)
        {
            中间值 = 矩阵[列][行];
            矩阵[列][行] = 矩阵[行][列];
            矩阵[行][列] = 中间值;
        }
    }
    for (int 行 = 0; 行 < 5; 行++)
    {
        for (int 列 = 0; 列 < 5; 列++)
        {
            printf("\t%d", 矩阵[列][行]);
        }
        printf("\n");
    }
    printf("\n");
}
static void 获取一行输入()
{
    char 数组[50] = { ' ' };
    char 字符 = ' ';
    int 计数 = 0;
    while ((字符 = getchar()) != '\n')
    {
        数组[计数++] = 字符;
    }
}
static void 输出一行()
{
    char 数组[50] = { ' ' };
    int 计数 = 0;
    while (数组[计数] != '\n')
    {
        putchar(数组[计数++]);
    }
}
static bool 判断回文()
{
    char 数组[50] = { ' ' };
    int 正计数 = 0;
    int 倒计数 = 49;
    bool 是回文 = 1;
    while (正计数 < 倒计数)
    {
        if (数组[正计数] == 数组[倒计数])
        {
            正计数++;
            倒计数--;
        }
        else
        {
            是回文 = 0;
            break;
        }
    }
    return 是回文;
}
static char* 删除字符()
{
    int 字符索引 = 0;;
    char* 字符串 = "Hello!";
    int 字符串长度 = 7;
    while (字符索引 < 字符串长度 - 1)
    {
        字符串[字符索引] = 字符串[字符索引 + 1];
        字符索引++;
    }
}
void static 命令行按要求打印(int 字符串个数, char** 字符串)
{
    int 输出字符长度 = 0;
    if (字符串[1] == NULL)
    {
        输出字符长度 = -10;
    }
    else if (字符串[1] != NULL)
    {
        输出字符长度 = 字符串转数字(字符串[1]);
        //printf("%d\n", 输出字符长度);
    }
    int 实际字符串长度 = strlen(字符串[0]);
    int 索引 = 0;
    if (输出字符长度 >= 0)
    {
        索引 = 0;
        while (索引 < 输出字符长度)
        {
            printf("%c", 字符串[0][索引]);
            索引++;
        }
    }
    else if (输出字符长度 < 0)
    {
        索引 = 实际字符串长度 + 输出字符长度;
        if (索引 < 0)
        {
            索引 = 0;
        }
        while (索引 < 实际字符串长度)
        {
            printf("%c", 字符串[0][索引]);
            索引++;
        }
    }
    printf("\n");
}
static int 字符串转数字(char* 字符串)
{
    int 索引 = 0;
    int 字符串长度 = strlen(字符串);
    char 符号 = 字符串[0];
    if (符号 == '-' || 符号 == '+')
    {
        索引 = 1;
    }
    int 数字 = 0;
    while (索引 < 字符串长度)
    {
        数字 += (字符串[索引] - '0') * (int)pow((int)10, (int)字符串长度 - 1 - 索引);
        索引++;
    }
    if (符号 == '-')
    {
        数字 *= -1;
    }
    return 数字;
}
static void 递归十进制转二进制(int 数)
{
    if (数 > 0)
    {
        printf("%d", 数 % 2);
        递归十进制转二进制(数 /= 2);
    }
}
static void 数列求和(int 数, int 和)
{
    if (数 > 0)
    {
        和 += 数--;
        数列求和(数, 和);
    }
    else
    {
        printf("%d", 和);
    }
}
static int 打印斐波那契数(int 项数)
{
    if (项数 == 1 || 项数 == 2)
    {
        return 1;
    }
    else
    {
        return 打印斐波那契数(项数 - 1) + 打印斐波那契数(项数 - 2);
    }
}