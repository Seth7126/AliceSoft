// 函数: sub_5bd940
// 地址: 0x5bd940
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax = sub_417ed0(arg1 + 0xcc, arg2)
char eax_2

if (eax != *(arg1 + 0xcc))
    eax_2 = sub_40c3a0(arg2, &eax[4])

if (eax == *(arg1 + 0xcc) || eax_2 != 0)
    arg2 = *(arg1 + 0xcc)
else
    arg2 = eax

if (arg2 == *(arg1 + 0xcc))
    void** eax_4
    eax_4.b = 0
    return eax_4

*arg3 = arg2[0xa]
int32_t* eax_5
eax_5.b = 1
return eax_5
