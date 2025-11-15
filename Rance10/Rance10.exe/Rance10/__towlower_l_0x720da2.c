// 函数: __towlower_l
// 地址: 0x720da2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result = 0xffff

if (arg1 != 0xffff)
    void* var_1c
    int32_t ecx_2 = _LocaleUpdate::_LocaleUpdate(&var_1c, arg2)
    void* var_18
    int32_t eax_1 = *(var_18 + 0xa8)
    uint32_t eax_4
    
    if (eax_1 == 0)
        int16_t ecx_3 = (arg1.d).w
        
        if (ecx_3 - 0x41 u<= 0x19)
            uint32_t eax_3 = zx.d(ecx_3 + 0x20)
            uint32_t var_c_1 = eax_3
            ecx_3 = eax_3.w
        
        eax_4 = zx.d(ecx_3)
        uint32_t var_c_2 = eax_4
        goto label_720e11
    
    uint32_t result_2
    int16_t var_8
    
    if (arg1 u>= 0x100)
        if (___acrt_LCMapStringW(eax_1, 0x100, &arg1, 1, &var_8, 1) != 0)
            result.w = var_8
        else
            result.w = arg1
            result = zx.d(result.w)
            result_2 = result
    else
        uint16_t result_3
        
        if (_iswctype(eax_1.w, 0x100, ecx_2, (arg1.d).w, 1) != 0)
            result_3 = zx.w(*(*(var_18 + 0x94) + zx.d(arg1)))
        else
            eax_4.w = arg1
        label_720e11:
            result_3 = eax_4.w
        
        result = zx.d(result_3)
        uint32_t result_1 = result
        result = zx.d(result.w)
        result_2 = result
    char var_10
    
    if (var_10 != 0)
        void* ecx_6 = var_1c
        *(ecx_6 + 0x350) &= 0xfffffffd

return result
