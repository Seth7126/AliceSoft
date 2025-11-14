// 函数: sub_1000c360
// 地址: 0x1000c360
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg3 == 0)
    return 0x80004003

int32_t eax_2 = lstrcmpW(arg2, &data_1001bea0)

if (eax_2 != 0)
    *arg3 = 0
    return 0x80040216

void* eax_4 = (*(*(arg1 - 0xc) + 0x1c))(eax_2)
int32_t* eax_5

if (eax_4 == 0)
    eax_5 = nullptr
else
    eax_5 = eax_4 + 0xc

*arg3 = eax_5

if (eax_5 == 0)
    return 0x8007000e

(*(*eax_5 + 4))(eax_5)
return 0
