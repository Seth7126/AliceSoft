// 函数: sub_4bbff0
// 地址: 0x4bbff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[7]

if (edi != 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x51eb851f, arg1[9] - edi)
    int32_t edx_2 = edx_1 s>> 5
    sub_403160(edi, (edx_2 u>> 0x1f) + edx_2, 0x64)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

int32_t eax_6 = arg1[5]

if (eax_6 u>= 0x10)
    eax_6 = sub_403160(*arg1, eax_6 + 1, 1)

arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:0)
    *arg1 = 0
    return eax_6

char* eax_7 = *arg1
*eax_7 = 0
return eax_7
