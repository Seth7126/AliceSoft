// 函数: sub_4ca9c0
// 地址: 0x4ca9c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebp = arg2
void** eax = sub_417ed0(arg1 + 0x18, ebp)
char eax_2

if (eax != *(arg1 + 0x18))
    eax_2 = sub_40c3a0(ebp, &eax[4])

if (eax == *(arg1 + 0x18) || eax_2 != 0)
    arg2 = *(arg1 + 0x18)
else
    arg2 = eax

void** edi = arg2
void** eax_4 = sub_417ed0(arg1 + 0x18, ebp)
char eax_6

if (eax_4 != *(arg1 + 0x18))
    eax_6 = sub_40c3a0(ebp, &eax_4[4])

if (eax_4 == *(arg1 + 0x18) || eax_6 != 0)
    arg2 = *(arg1 + 0x18)
else
    arg2 = eax_4

if (*(arg1 + 0x18) != arg2)
    return sub_4e64d0(&edi[0xa], arg3, arg4)

int32_t result
result.b = 1
return result
