// 函数: ___acrt_locale_initialize_time
// 地址: 0x71c906
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_c = edi
void* const esi

if (*(arg1 + 0xb4) != 0)
    void* eax_1 = __calloc_base(1, 0x164)
    esi = eax_1
    
    if (esi == 0)
        __free_base(eax_1)
        return 1
    
    if (initialize_lc_time(esi, arg1) == 0)
        ___acrt_locale_free_time(esi)
        __free_base(esi)
        return 1
    
    *(esi + 0xb0) = 1
    __free_base(0)
else
    esi = &data_7563b0

___acrt_locale_release_lc_time_reference(*(arg1 + 0x9c))
*(arg1 + 0x9c) = esi
return 0
