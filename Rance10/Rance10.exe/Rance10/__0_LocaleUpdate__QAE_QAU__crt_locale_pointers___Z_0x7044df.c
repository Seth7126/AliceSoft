// 函数: ??0_LocaleUpdate@@QAE@QAU__crt_locale_pointers@@@Z
// 地址: 0x7044df
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_8 = edi
arg1[3].b = 0

if (arg2 != 0)
    arg1[1] = *arg2
    arg1[2] = arg2[1]
else if (data_7fc704 != 0)
    void* eax_4 = sub_714cce()
    *arg1 = eax_4
    arg1[1] = *(eax_4 + 0x4c)
    arg1[2] = *(eax_4 + 0x48)
    ___acrt_update_multibyte_info(eax_4, &arg1[1])
    ___acrt_update_multibyte_info(*arg1, &arg1[2])
    void* ecx_3 = *arg1
    int32_t eax_5 = *(ecx_3 + 0x350)
    
    if ((eax_5.b & 2) == 0)
        *(ecx_3 + 0x350) = eax_5 | 2
        arg1[3].b = 1
else
    arg1[1] = data_7e17f8
    arg1[2] = data_7e17fc

return arg1
