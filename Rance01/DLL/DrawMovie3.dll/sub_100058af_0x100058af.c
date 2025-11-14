// 函数: sub_100058af
// 地址: 0x100058af
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (data_1002364c == 0)
    ___initmbctable()

char* esi = data_10021a18
int32_t edi = 0

if (esi != 0)
    while (true)
        void* eax
        eax.b = *esi
        
        if (eax.b == 0)
            break
        
        if (eax.b != 0x3d)
            edi += 1
        
        esi = esi + _strlen(esi) + 1
    
    void* edi_2 = __calloc_crt(edi + 1, 4)
    data_100220a0 = edi_2
    
    if (edi_2 != 0)
        char* esi_1 = data_10021a18
        int32_t result
        
        while (true)
            if (*esi_1 == 0)
                sub_10003602(data_10021a18)
                data_10021a18 = 0
                *edi_2 = 0
                data_10023640 = 1
                result = 0
                break
            
            uint32_t ebx_2 = _strlen(esi_1) + 1
            
            if (*esi_1 != 0x3d)
                char* eax_3 = __calloc_crt(ebx_2, 1)
                *edi_2 = eax_3
                
                if (eax_3 == 0)
                    sub_10003602(data_100220a0)
                    data_100220a0 = 0
                    result = 0xffffffff
                    break
                
                if (sub_10003cd0(eax_3, ebx_2, esi_1) != 0)
                    int32_t var_20
                    __builtin_memset(&var_20, 0, 0x14)
                    sub_10001fbc()
                    noreturn
                
                edi_2 += 4
            
            esi_1 = &esi_1[ebx_2]
        
        return result

return 0xffffffff
