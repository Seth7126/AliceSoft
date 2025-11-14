// 函数: sub_425500
// 地址: 0x425500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg4
int32_t ebp_2 = (*(esi + 0x2c) - *(esi + 0x28)) s>> 2
arg4 = ebp_2
int32_t eax_1

if (arg5 != (*(**(esi + 8) + 0x20))())
    int32_t edi_1 = 0
    
    if (ebp_2 s> 0)
        int32_t eax_21
        
        do
            int32_t ebx_1
            
            if (edi_1 s< 0 || edi_1 s>= (*(esi + 0x2c) - *(esi + 0x28)) s>> 2)
                ebx_1 = 0xffffffff
            else
                ebx_1 = *(*(esi + 0x28) + (edi_1 << 2))
            
            int32_t eax_11 = (*(**(esi + 0xc) + 0x18))(ebx_1)
            
            if (eax_11 == 0xc || eax_11 == 0xd || eax_11 == 0x3f || eax_11 - 0xe u<= 3
                    || eax_11 - 0x16 u<= 3 || eax_11 == 0x1e || eax_11 == 0x20 || eax_11 == 0x32
                    || eax_11 == 0x34)
                int32_t* eax_14 = (*(**(esi + 8) + 4))((*(**(esi + 8) + 0x20))())
                
                if (eax_14 == 0 || ebx_1 s< 0)
                    ebp_2 = arg4
                    eax_21 = 0xffffffff
                else
                    int32_t eax_16
                    int32_t edx_3
                    edx_3:eax_16 = sx.q((*(*eax_14 + 0x14))())
                    
                    if (ebx_1 s>= (eax_16 + (edx_3 & 3)) s>> 2)
                        ebp_2 = arg4
                        eax_21 = 0xffffffff
                    else
                        int32_t eax_20 = (*(*eax_14 + 0x18))()
                        
                        if (eax_20 == 0)
                            ebp_2 = arg4
                            eax_21 = 0xffffffff
                        else
                            eax_21 = *(eax_20 + (ebx_1 << 2))
                            ebp_2 = arg4
            else
                eax_21 = 0xffffffff
            
            if (arg5 == eax_21)
                *arg3 = edi_1
                *arg2 = 0xffffffff
                int32_t* eax_23
                eax_23.b = 1
                return eax_23
            
            edi_1 += 1
        while (edi_1 s< ebp_2)
        
        eax_21.b = 0
        return eax_21
else
    int32_t ecx_1 = 0
    
    if (ebp_2 s> 0)
        do
            if (ecx_1 s< 0 || ecx_1 s>= (*(esi + 0x2c) - *(esi + 0x28)) s>> 2)
                eax_1 = 0xffffffff
            else
                eax_1 = *(*(esi + 0x28) + (ecx_1 << 2))
            
            if (eax_1 == arg6)
                *arg3 = ecx_1
                eax_1.b = 1
                *arg2 = 0xffffffff
                return eax_1
            
            ecx_1 += 1
        while (ecx_1 s< ebp_2)

eax_1.b = 0
return eax_1
