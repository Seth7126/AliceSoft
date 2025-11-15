// 函数: sub_589750
// 地址: 0x589750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 4)

if (eax != *arg2)
    eax.b = 0
    return eax

uint32_t eax_1

if (eax - 1 u<= 0xa)
    switch (eax + &jump_table_589804[4]:3)
        case &lookup_table_589818, &lookup_table_589818[9]
            return sub_5895c0(arg1, arg2)
        case &lookup_table_589818[1], &lookup_table_589818[0xa]
            return sub_589640(arg1) __tailcall
        case &lookup_table_589818[2]
            if (*(arg1 + 0x28) != 0)
                eax_1.b = *(arg1 + 0x2c)
                
                if (eax_1.b == 0)
                    void* edx_1 = &arg2[1]
                    void* ebx_1 = *(arg1 + 0x28)
                    void* esi_1 = edx_1 + 0x10
                    int32_t* ecx_1 = ebx_1 + 0x50
                    
                    if (*(edx_1 + 0x14) u>= 0x10)
                        edx_1 = *edx_1
                    
                    if (ecx_1[5] u>= 0x10)
                        ecx_1 = *ecx_1
                    
                    int32_t esi_2 = *esi_1
                    int32_t eax_4 = esi_2
                    int32_t edi_2 = ecx_1[4]
                    
                    if (edi_2 u< esi_2)
                        eax_4 = edi_2
                    
                    if (sub_406ac0(eax_4, edx_1, ecx_1, eax_4) != 0 || edi_2 u< esi_2
                            || edi_2 u> esi_2 || *(ebx_1 + 0x68) != arg2[0x85])
                        eax_1.b = 0
                        return eax_1
            
            eax_1.b = 1
            return eax_1
        case &lookup_table_589818[7]
            return sub_5896d0(arg1, arg2)

eax_1.b = 1
return eax_1
