// 函数: ?fp_format_f@@YAHQBNQADI1IHQAU__crt_locale_pointers@@@Z
// 地址: 0x716c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_18 = edi
int32_t var_1c = arg5
int32_t var_10 = 0
void* var_c
int32_t* edi_1 = &var_c
*edi_1 = 0
edi_1[1] = 0
sub_71edad(*arg1, arg1[1], arg6, &var_10, arg4)
int32_t ecx = 0xffffffff

if (arg3 != 0xffffffff)
    int32_t eax_1
    eax_1.b = var_10 == 0x2d
    ecx = arg3 - eax_1

void* eax_4
eax_4.b = var_10 == 0x2d
int32_t result = ___acrt_fp_strflt_to_string(eax_4 + arg2, ecx, var_c + arg6, &var_10)

if (result == 0)
    return fp_format_f_internal(arg2, arg3, arg6, &var_10, 0, arg7)

*arg2 = 0
return result
