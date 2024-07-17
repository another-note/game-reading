#define _CRT_SECURE_NO_WARNINGS/*本地化编译器配置*/
#pragma warning(disable:6031)/*本地化编译器配置*/
#include <stdio.h>
void 分钟制化小时制();
void 计算商和余数();
void 四舍五入();
void 三数交换();
void main()
{
    四舍五入();
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
    printf("他们仨平均值为:%.1lf.", 平均值变一位小数);
}
static void 三数交换()
{
    printf("请输入三个整数:");
    int 整数1 = 0;
    int 整数2 = 0;
    int 整数3 = 0;
    scanf("%d%d%d", &整数1, &整数2, &整数3);
    int 中间数 = 0;
    中间数 = 整数2;
    整数2 = 整数1;
    整数3 = 中间数;
    整数1 = 整数3;

}