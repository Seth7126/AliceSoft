// 函数: sub_10006732
// 地址: 0x10006732
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* entry_ebx

if (arg7 != 0)
    sub_100066a0(arg3, arg1, entry_ebx, arg7)

int32_t* var_c_2

var_c_2 = arg9 != 0 ? arg9 : arg1

sub_100027b0(var_c_2, arg3)
int32_t var_8_3 = *arg2
int32_t edx = sub_1000611d(arg1, arg5, arg6)
int32_t eax_1 = arg2[1] + 1
arg1[2] = eax_1
int32_t result = sub_10006385(eax_1, edx, entry_ebx[3], arg3, arg1, arg4, arg6, arg8, 0x100)

if (result == 0)
    return result

return _JumpToContinuation(result, arg1)
