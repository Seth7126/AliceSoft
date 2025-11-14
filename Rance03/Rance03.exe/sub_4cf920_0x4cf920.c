// 函数: sub_4cf920
// 地址: 0x4cf920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** eax = sub_417ed0(arg1 + 4, arg2)
char eax_2

if (eax != *(arg1 + 4))
    eax_2 = sub_40c3a0(arg2, &eax[4])

if (eax == *(arg1 + 4) || eax_2 != 0)
    arg2 = *(arg1 + 4)
else
    arg2 = eax

if (arg2 == *(arg1 + 4))
    int32_t eax_5
    eax_5.b = false
    return 0

int32_t result
result.b = arg2 != 0xffffffd8
return result
