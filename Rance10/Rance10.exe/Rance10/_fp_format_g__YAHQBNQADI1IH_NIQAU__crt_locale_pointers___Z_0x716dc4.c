// 函数: ?fp_format_g@@YAHQBNQADI1IH_NIQAU__crt_locale_pointers@@@Z
// 地址: 0x716dc4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_20 = edi
int32_t var_24 = arg5
int32_t var_14 = 0
int32_t var_10
int32_t* edi_1 = &var_10
*edi_1 = 0
edi_1[1] = 0
sub_71edad(*arg1, arg1[1], arg6, &var_14, arg4)
void* ecx
ecx.b = var_14 == 0x2d
int32_t eax_2 = var_10 - 1
void* eax_3 = 0xffffffff
char* esi = ecx + arg2

if (arg3 != 0xffffffff)
    eax_3 = arg3 - ecx

int32_t result = ___acrt_fp_strflt_to_string(esi, eax_3, arg6, &var_14)

if (result != 0)
    *arg2 = 0
    return result

if (var_10 - 1 s< 0xfffffffc || var_10 - 1 s>= arg6)
    return sub_716b15(arg2, arg3, arg6, arg7, arg8, &var_14, 1, arg9)

if (eax_2 s< var_10 - 1)
    int32_t eax_6
    
    do
        eax_6.b = *esi
        esi = &esi[1]
    while (eax_6.b != 0)
    
    esi[0xfffffffe] = eax_6.b

return fp_format_f_internal(arg2, arg3, arg6, &var_14, 1, arg9)
