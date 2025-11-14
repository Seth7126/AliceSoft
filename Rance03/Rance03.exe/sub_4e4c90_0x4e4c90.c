// 函数: sub_4e4c90
// 地址: 0x4e4c90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_4 = arg1
sub_4e4b30(arg1)
void* edi = arg2
void* eax = *(edi + 4)

if (eax + 1 u<= *(edi + 8))
    bool cond:0_1 = *eax == 1
    *(edi + 4) = eax + 1
    arg2.b = cond:0_1
    
    if (sub_468d00(edi, arg1 + 0x2c).b != 0)
        char eax_2 = sub_468b20(edi, arg1 + 0x48)
        
        if (eax_2 == 0)
            return eax_2
        
        uint32_t* eax_3
        
        if (sub_468b20(edi, arg1 + 0x4c).b != 0 && sub_468b20(edi, arg1 + 0x50).b != 0
                && sub_468b20(edi, arg1 + 0x54).b != 0 && sub_468b20(edi, arg1 + 0x58).b != 0)
            var_4 = 0
            
            if (sub_468b20(edi, &var_4).b != 0)
                if (arg2.b == 0)
                label_4e4d8b:
                    *(arg1 + 0x5c) = 1
                    eax_3.b = 1
                    return eax_3
                
                if (sub_4e48e0(arg1, arg1 + 0x2c, *(arg1 + 0x48), *(arg1 + 0x4c), *(arg1 + 0x50), 
                        *(arg1 + 0x54), *(arg1 + 0x58)).b != 0)
                    void* ecx_11 = *(arg1 + 0x44)
                    
                    if (ecx_11 != 0 && sub_442e10(ecx_11).b != 0)
                        eax_3 = var_4
                        
                        if (eax_3 s> 0)
                            int32_t* ecx_12 = *(arg1 + 0x44)
                            
                            if (ecx_12 != 0)
                                sub_443090(ecx_12, eax_3)
                        
                        goto label_4e4d8b
        
        eax_3.b = 0
        return eax_3

eax.b = 0
return eax
