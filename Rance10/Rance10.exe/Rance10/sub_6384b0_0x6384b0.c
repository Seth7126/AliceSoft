// 函数: sub_6384b0
// 地址: 0x6384b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c
int32_t* esi = arg1
int32_t result

while (true)
    result = sub_638f00(arg1)
    
    if (result == 0)
        break
    
    if (result != 2)
        if (esi[0x11] == 0 && (esi[0x14] & 0x100000) == 0)
            sub_6d0967(2)
            noreturn
        
        uint32_t var_28
        
        if (esi[0x13] != 0x2d)
            int32_t* edx_3 = zx.d(esi[0x11].w)
            
            if (edx_3.w u>= 0x100)
                sub_6393a0(&esi[9], edx_3)
            else
                int16_t ebx_2 = edx_3.w
                
                if ((esi[0xb] & 0x100) != 0)
                    ebx_2 = (*(**(esi[0xc] + 4) + 0x20))(edx_3)
                
                void* edi_4 = esi[0xa]
                
                if (*(edi_4 + 0x18) == 0)
                    uint32_t eax_16 = sub_6e810c(0x20)
                    var_28 = eax_16
                    __builtin_memset(eax_16, 0, 0x20)
                    *(edi_4 + 0x18) = eax_16
                
                uint32_t edx_4 = zx.d(ebx_2)
                char* ecx_12 = *(edi_4 + 0x18) + (edx_4 u>> 3)
                *ecx_12 |= (1 << ((edx_4 & 7) u% 0x20)).b
                arg1 = esi
                continue
        else
            int16_t* edi_1 = *esi
            
            if (edi_1 != esi[2])
                if (*edi_1 == 0x5c && sub_636a80(esi) != 0)
                    *esi = &edi_1[1]
                
                *esi += 2
            
            sub_635790(esi)
            uint32_t edi_2 = zx.d(esi[0x11].w)
            int32_t eax_4 = sub_638f00(esi)
            
            if (eax_4 == 0)
                uint32_t edx_6 = zx.d(esi[0x11].w)
                
                if (edx_6.w u>= 0x100)
                    sub_6393a0(&esi[9], edx_6)
                else
                    int16_t ebx_3 = edx_6.w
                    
                    if ((esi[0xb] & 0x100) != 0)
                        ebx_3 = (*(**(esi[0xc] + 4) + 0x20))(edx_6)
                    
                    void* edi_5 = esi[0xa]
                    
                    if (*(edi_5 + 0x18) == 0)
                        uint32_t eax_24 = sub_6e810c(0x20)
                        var_28 = eax_24
                        __builtin_memset(eax_24, 0, 0x20)
                        *(edi_5 + 0x18) = eax_24
                    
                    uint32_t edx_7 = zx.d(ebx_3)
                    char* ecx_16 = *(edi_5 + 0x18) + (edx_7 u>> 3)
                    *ecx_16 |= (1 << ((edx_7 & 7) u% 0x20)).b
                
                int16_t edi_6 = 0x2d
                
                if ((esi[0xb] & 0x100) != 0)
                    edi_6 = (*(**(esi[0xc] + 4) + 0x20))(0x2d)
                
                void* esi_1 = esi[0xa]
                
                if (*(esi_1 + 0x18) == 0)
                    uint32_t eax_32 = sub_6e810c(0x20)
                    var_28 = eax_32
                    __builtin_memset(eax_32, 0, 0x20)
                    *(esi_1 + 0x18) = eax_32
                
                uint32_t edx_9 = zx.d(edi_6)
                char* ecx_20 = *(esi_1 + 0x18) + (edx_9 u>> 3)
                result = zx.d(*ecx_20) | 1 << ((edx_9 & 7) u% 0x20)
                *ecx_20 = result.b
                break
            
            int16_t eax_12
            
            if (eax_4 != 2)
                if ((esi[0x10] & 0x800) != 0)
                    int32_t* ecx_3 = esi[0xf]
                    var_28 = zx.d(esi[0x11].w)
                    int32_t* var_24
                    sub_633ee0(*ecx_3, &var_24, &var_28, &var_28:2)
                    int32_t* edx_1 = var_24
                    int32_t var_14
                    int32_t var_10
                    int16_t ebx_1
                    
                    if (var_14 != 1)
                        ebx_1 = var_28.w
                    else
                        int32_t* eax_6 = &var_24
                        
                        if (var_10 u>= 8)
                            eax_6 = edx_1
                        
                        ebx_1 = *eax_6
                    
                    if (var_10 u>= 8)
                        sub_403160(edx_1, var_10 + 1, 2)
                    
                    int32_t* ecx_6 = esi[0xf]
                    esi[0x11] = zx.d(ebx_1)
                    var_28 = edi_2
                    sub_633ee0(*ecx_6, &var_24, &var_28, &var_28:2)
                    int32_t** edx_2 = var_24
                    int16_t edi_3
                    
                    if (var_14 != 1)
                        edi_3 = var_28.w
                    else
                        int32_t** eax_10 = &var_24
                        
                        if (var_10 u>= 8)
                            eax_10 = edx_2
                        
                        edi_3 = *eax_10
                    
                    if (var_10 u>= 8)
                        sub_403160(edx_2, var_10 + 1, 2)
                    
                    edi_2 = zx.d(edi_3)
                
                eax_12 = esi[0x11].w
            
            if (eax_4 == 2 || eax_12 u< edi_2.w)
                sub_6d0967(8)
                noreturn
            
            sub_639140(&esi[9], edi_2.w, eax_12)
            arg1 = esi
            continue
    
    arg1 = esi

@__security_check_cookie@4(eax_1 ^ &var_2c)
return result
