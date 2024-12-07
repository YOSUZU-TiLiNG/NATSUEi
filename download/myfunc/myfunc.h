#ifndef _MYFUNC_H_
#define _MYFUNC_H_

#ifdef __cplusplus
extern "C"
{
#endif

    // 交换两个int数据
    void swap(int *pa, int *pb);

    // 获取int数组中的最大最小值
    void maxminArrint(int arrint[], int arrLen, int *max, int *min);

    // 获取int数据的位数
    int numLen(int num);

    // 获取两自然数x的y次幂
    int powxy(int x, int y);

    // 获取两正数A和B的最大公约数
    int gcd(int A, int B);

    // 获取num对应的月份的字符串
    char* numToMonth(int num);

#ifdef __cplusplus
}
#endif

#endif
