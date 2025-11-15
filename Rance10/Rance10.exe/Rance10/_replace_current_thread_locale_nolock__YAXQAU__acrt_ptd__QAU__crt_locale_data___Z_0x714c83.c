// 函数: ?replace_current_thread_locale_nolock@@YAXQAU__acrt_ptd@@QAU__crt_locale_data@@@Z
// 地址: 0x714c83
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x4c) != 0)
    ___acrt_release_locale_ref(*(arg1 + 0x4c))
    void* eax_1 = *(arg1 + 0x4c)
    
    if (eax_1 != data_7fcacc && eax_1 != &data_7e1740 && *(eax_1 + 0xc) == 0)
        ___acrt_free_locale(eax_1)

void* result = arg2
*(arg1 + 0x4c) = result

if (result != 0)
    result = ___acrt_add_locale_ref(result)

return result
