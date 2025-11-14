// 函数: sub_4233c0
// 地址: 0x4233c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_24
int32_t eax_1 = __security_cookie ^ &var_24
int32_t var_38 = arg5
int32_t var_20
int32_t* eax_3 = sub_4691f0(&var_20, "[%6d]")
SetTextColor(arg2, 0xc00000)
int32_t* eax_4

if (eax_3[5] u< 0x10)
    eax_4 = eax_3
else
    eax_4 = *eax_3

sub_42c0d0(arg1, arg2, *arg3, arg4, eax_4)
int32_t result = eax_3[4]
int32_t eax_7
int32_t edx
edx:eax_7 = sx.q(*(arg1 + 0xc8) * result)
*arg3 += (eax_7 - edx) s>> 1
int32_t var_c

if (var_c u>= 0x10)
    j__free(var_20)

sub_69a5bc(eax_1 ^ &var_24)
return result
