// 函数: ?fp_format_e@@YAHQBNQADI1IH_NIQAU__crt_locale_pointers@@@Z
// 地址: 0x716a7a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_18 = edi
int32_t var_1c = arg5
int32_t var_10
sub_71edad(*arg1, arg1[1], arg6 + 1, &var_10, arg4)
int32_t ecx = 0xffffffff

if (arg3 != 0xffffffff)
    int32_t eax_1
    eax_1.b = var_10 == 0x2d
    int32_t eax_2
    eax_2.b = arg6 s> 0
    ecx = arg3 - eax_1 - eax_2

void* ecx_3
ecx_3.b = var_10 == 0x2d
void* const eax_3
eax_3.b = arg6 s> 0
int32_t result = ___acrt_fp_strflt_to_string(eax_3 + ecx_3 + arg2, ecx, arg6 + 1, &var_10)

if (result == 0)
    return sub_716b15(arg2, arg3, arg6, arg7, arg8, &var_10, 0, arg9)

*arg2 = 0
return result
