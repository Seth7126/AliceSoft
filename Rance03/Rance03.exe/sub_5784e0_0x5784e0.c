// 函数: sub_5784e0
// 地址: 0x5784e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (arg2 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x78787879, *(arg1 + 0x1c) - *(arg1 + 0x18))
    int32_t edx_4 = edx_3 s>> 5
    
    if (arg2 s< (edx_4 u>> 0x1f) + edx_4)
        if (arg3 s>= 0)
            int32_t ebx_3 = arg2 * 0x11
            int32_t esi_1 = *(arg1 + 0x18)
            int32_t eax_4
            int32_t edx_5
            edx_5:eax_4 = muls.dp.d(0x2aaaaaab, 
                *(esi_1 + (ebx_3 << 2) + 0x20) - *(esi_1 + (ebx_3 << 2) + 0x1c))
            int32_t edx_6 = edx_5 s>> 2
            
            if (arg3 s< (edx_6 u>> 0x1f) + edx_6)
                int32_t ebx_4 = *(esi_1 + (ebx_3 << 2) + 0x1c)
                int32_t edi_1 = arg3 * 3
                *arg4 = *(ebx_4 + (edi_1 << 3))
                *arg5 = *(ebx_4 + (edi_1 << 3) + 4)
                *arg6 = *(ebx_4 + (edi_1 << 3) + 8)
                
                for (void* i = *(ebx_4 + (edi_1 << 3) + 0xc); i != *(ebx_4 + (edi_1 << 3) + 0x10); 
                        i += 0xc)
                    sub_4158d0(arg7, i + 4)
                    sub_4158d0(arg8, i + 8)
                
                int32_t* eax_9
                eax_9.b = 1
                return eax_9
        
        eax.b = 0
        return eax

eax.b = 0
return eax
