// 函数: sub_5d9af0
// 地址: 0x5d9af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax = sub_417ed0(arg3 + 0xe4, arg1)

if (eax == *(arg3 + 0xe4))
    arg1 = *(arg3 + 0xe4)
else if (sub_40c3a0(arg1, &eax[4]) != 0)
    arg1 = *(arg3 + 0xe4)
else
    arg1 = eax

if (arg1 == *(arg3 + 0xe4))
    *arg2 = 0xffffffff
    int32_t* eax_5
    eax_5.b = 0
    return eax_5

int32_t ecx_1 = arg1[0xa]
*arg2 = ecx_1
int32_t* eax_6

if (ecx_1 != 0xffffffff)
    eax_6.b = 1
    return eax_6

eax_6.b = 0
return eax_6
