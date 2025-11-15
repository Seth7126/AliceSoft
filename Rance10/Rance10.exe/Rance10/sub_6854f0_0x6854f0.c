// 函数: sub_6854f0
// 地址: 0x6854f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_40
int32_t var_4 = __security_cookie ^ &var_40

if (*(arg1 + 8) == 0)
    int32_t eax_1
    eax_1.b = 0
    @__security_check_cookie@4(var_4 ^ &var_40)
    return eax_1

int32_t* ecx_2 = *(arg1 + 4)

if (ecx_2 != 0)
    (*(*ecx_2 + 8))(ecx_2)
    *(arg1 + 4) = 0

_memset(&var_40, 0, 0x3c)
var_40 = arg3
int32_t var_3c = arg4
int32_t eax_5 = 0

if (arg5 != 0)
    eax_5 = 0x3c

int32_t var_18 = 1
int32_t var_38 = eax_5
int32_t var_24 = arg6
int32_t var_20 = arg7
int32_t var_30 = 0x1c
int32_t var_34 = 1
int32_t var_1c = 0x20
int32_t var_14 = arg2
int32_t var_10 = 1
int32_t var_c = 0
int32_t eax_9
eax_9.b = (*(*arg8 + 0x28))(arg8, *(arg1 + 8), &var_40, arg1 + 4) s>= 0
@__security_check_cookie@4(var_4 ^ &var_40)
return eax_9
