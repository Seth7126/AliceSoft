// 函数: __mbsdec_l
// 地址: 0x720ec7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return nullptr

void* esi_1 = arg2

if (esi_1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else if (arg1 u< esi_1)
    void* var_14
    _LocaleUpdate::_LocaleUpdate(&var_14, arg3)
    void* var_c
    
    if (*(var_c + 8) != 0)
        char* ecx_2 = esi_1 - 1
        
        do
            ecx_2 -= 1
            
            if (arg1 u> ecx_2)
                break
        while ((*(zx.d(*ecx_2) + var_c + 0x19) & 4) != 0)
        
        esi_1 -= (esi_1 - ecx_2) & 1
    
    char var_8
    
    if (var_8 != 0)
        void* ecx_3 = var_14
        *(ecx_3 + 0x350) &= 0xfffffffd
    
    return esi_1 - 1

return nullptr
