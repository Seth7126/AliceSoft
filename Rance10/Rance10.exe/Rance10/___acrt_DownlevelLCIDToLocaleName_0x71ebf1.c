// 函数: ___acrt_DownlevelLCIDToLocaleName
// 地址: 0x71ebf1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_10 = edi

if (arg1 != 0 && arg1 != 0x400 && arg1 != 0x800 && (arg2 != 0 || arg3 s<= 0) && arg3 s>= 0)
    int32_t edi_1 = 0
    int32_t ebx_1 = 0xe3
    int32_t eax_4
    
    while (true)
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(ebx_1 + edi_1)
        eax_4 = (eax_2 - edx_1) s>> 1
        
        if (arg1 == *((eax_4 << 3) + &data_757830))
            break
        
        if (arg1 - *((eax_4 << 3) + &data_757830) s>= 0)
            edi_1 = eax_4 + 1
        else
            ebx_1 = eax_4 - 1
        
        if (edi_1 s> ebx_1)
            eax_4 = 0xffffffff
            break
    
    if (eax_4 s>= 0)
        int16_t* ebx_2 = *((eax_4 << 3) + &data_757834)
        void invalid
        int32_t eax_5 = _wcsnlen(invalid, ebx_2, 0x55)
        
        if (arg3 s<= 0)
            return eax_5 + 1
        
        if (eax_5 s< arg3)
            if (_wcscpy_s(arg2, arg3, ebx_2) == 0)
                return eax_5 + 1
            
            int32_t var_24
            __builtin_memset(&var_24, 0, 0x14)
            __invoke_watson()
            noreturn

return 0
