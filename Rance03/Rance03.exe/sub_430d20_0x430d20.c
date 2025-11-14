// 函数: sub_430d20
// 地址: 0x430d20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

SetTextColor(arg2, arg6)
int32_t* eax

if (arg5[5] u< 0x10)
    eax = arg5
else
    eax = *arg5

sub_42c0d0(arg1, arg2, *arg3, arg4, eax)
int32_t result = arg5[4]
int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(*(arg1 + 0xc8) * result)
*arg3 += (eax_3 - edx) s>> 1
return result
