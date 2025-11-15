// 函数: sub_5b34c0
// 地址: 0x5b34c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[0xd]

if (edi != 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x4bda12f7, arg1[0xf] - edi)
    int32_t edx_2 = edx_1 s>> 5
    sub_403160(edi, (edx_2 u>> 0x1f) + edx_2, 0x6c)
    arg1[0xd] = 0
    arg1[0xe] = 0
    arg1[0xf] = 0

void* ecx_2 = arg1[0xa]

if (ecx_2 != 0)
    sub_403160(ecx_2, (arg1[0xc] - ecx_2) s>> 3, 8)
    arg1[0xa] = 0
    arg1[0xb] = 0
    arg1[0xc] = 0

sub_5b4b60(&arg1[7])
int32_t eax_8 = arg1[5]

if (eax_8 u>= 0x10)
    eax_8 = sub_403160(*arg1, eax_8 + 1, 1)

arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:0)
    *arg1 = 0
    return eax_8

char* eax_10 = *arg1
*eax_10 = 0
return eax_10
