// 函数: sub_431190
// 地址: 0x431190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_1c
int32_t eax_1 = __security_cookie ^ &var_1c
int32_t eax_2 = *(arg1 + 0xc8)
int32_t esi_1 = arg4 + eax_2
RECT lprc
lprc.left = arg3
lprc.bottom = esi_1
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(eax_2 * arg5)
lprc.top = esi_1 - 1
lprc.right = ((eax_4 - edx) s>> 1) + arg3
int32_t result = arg6

if (*(arg1 + 0xec) == result)
    result = FillRect(arg2, &lprc, *(arg1 + 0xdc))
else if (result == *(arg1 + 0xe8))
    HBRUSH hbr
    
    if (arg7 == 0xffffffff)
        hbr = *(arg1 + 0xd4)
    else if (sub_4315a0(arg7) != 0)
        hbr = *(arg1 + 0xd4)
    else
        hbr = *(arg1 + 0xd8)
    
    result = FillRect(arg2, &lprc, hbr)

sub_69a5bc(eax_1 ^ &var_1c)
return result
