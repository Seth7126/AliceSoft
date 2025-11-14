// 函数: sub_5d5b90
// 地址: 0x5d5b90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2

if (result u< *(arg1 + 0x14))
    return sub_412de0(arg1 + 8, &arg2)

int32_t ecx = arg2

if (ecx == 0)
    return result

int32_t eax_1 = *ecx
arg2 = 1
jump(*eax_1)
