// 函数: sub_636610
// 地址: 0x636610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t* eax

if (sub_636480(arg1, arg3, arg4).b != 0)
    if (*(arg1 + 0x28) != 0 || *(arg1 + 0x29) == 0)
        eax = *(arg1 + 0xc)
        
        if (eax == 0x18)
            if (*(arg1 + 0x29) != 0)
                int32_t* ecx_1 = data_75d544
                
                if (ecx_1 != 0)
                    eax = (*(*ecx_1 + 8))(*(arg1 + 4), *(arg1 + 8), 0x20)
                    goto label_636646
            else if (eax == 0x18 && *(arg1 + 0x29) == 0)
                int32_t* ecx_2 = data_75d544
                
                if (ecx_2 != 0)
                    eax = (*(*ecx_2 + 0xc))(*(arg1 + 4), *(arg1 + 8), 0x20)
                    
                    if (eax != 0)
                        goto label_6366a2
    else
        int32_t* ecx = data_75d544
        
        if (ecx != 0)
            eax = (*(*ecx + 0x10))(*(arg1 + 4), *(arg1 + 8))
        label_636646:
            
            if (eax != 0)
            label_6366a2:
                *(arg2 + 0x14) = eax
                
                if (*(arg1 + 0x28) != 0)
                    eax = sub_6366f0(arg1, eax)
                
                if (*(arg1 + 0x28) == 0 || eax.b != 0)
                    if (*(arg1 + 0x29) != 0)
                        eax = sub_636850(arg1, *(arg2 + 0x14))
                    
                    if (*(arg1 + 0x29) == 0 || eax.b != 0)
                        int32_t ecx_5 = *(arg1 + 0x14)
                        *(arg2 + 0x18) = *(arg1 + 0x10)
                        int32_t eax_4
                        eax_4.b = 1
                        *(arg2 + 0x1c) = ecx_5
                        return eax_4

eax.b = 0
return eax
