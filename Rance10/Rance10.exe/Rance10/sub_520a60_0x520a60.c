// 函数: sub_520a60
// 地址: 0x520a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = data_7fcb64
char eax = sub_47d5a0(edi)
float result_1
float result_3
char eax_3

if (eax != 0)
    eax_3 = (***(edi + 0xc))(&result_1, &result_3)

float result_2

if (eax == 0 || eax_3 == 0)
    result_2 = result_3
else
    long double x87_r0
    long double x87_r1
    float result_4 = sub_63cd60(result_1, x87_r0, x87_r1)
    float result_5 = result_3
    result_1 = result_4
    long double x87_r2
    result_2 = sub_63cd60(result_5, x87_r1, x87_r2)

float result = result_1

if (*(arg1 + 0xc) != 0)
    result = result_2

*(arg1 + 0xb8) = result
return result
