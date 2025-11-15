// 函数: sub_54e0c0
// 地址: 0x54e0c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *arg1

if (esi == 0)
    return 0

if (arg2 s> 0 && arg3 s> 0)
    int32_t* esi_1 = *(esi + 0x118)
    
    if (esi_1 != 0)
        int32_t ebx
        ebx.b = (*(*esi_1 + 0x24))()
        char eax = (*(*esi_1 + 0x28))()
        int32_t* eax_7
        
        if (ebx.b != 0)
            int32_t eax_4 = *esi_1
            
            if (eax == 0)
                int32_t eax_8 = (*(eax_4 + 0x18))()
                int32_t* ecx_4 = arg1[2]
                
                if (ecx_4 == 0)
                    goto label_54e15d
                
                eax_7 = (*(*ecx_4 + 0xc))(arg2, arg3, eax_8)
                goto label_54e16c
            
            int32_t eax_5 = (*(eax_4 + 0x18))()
            int32_t* ecx_3 = arg1[2]
            
            if (ecx_3 == 0)
                goto label_54e15d
            
            eax_7 = (*(*ecx_3 + 8))(arg2, arg3, eax_5)
            goto label_54e16c
        
        if (eax != 0)
            int32_t* ecx_5 = arg1[2]
            int32_t* edi_1
            
            if (ecx_5 != 0)
                eax_7 = (*(*ecx_5 + 0x10))(arg2, arg3)
            label_54e16c:
                edi_1 = eax_7
            else
            label_54e15d:
                edi_1 = nullptr
            
            int32_t eax_12
            int32_t __saved_ebx_7
            eax_12, __saved_ebx_7 = (*(*esi_1 + 0x14))()
            int32_t __saved_ebx_4 = __saved_ebx_7
            uint128_t xmm0_2 = zx.o((*(*esi_1 + 0x10))(_mm_cvtepi32_ps(zx.o(eax_12))))
            int32_t eax_15 = *edi_1
            int32_t var_14_4 = _mm_cvtepi32_ps(xmm0_2)
            int32_t eax_16
            int32_t ecx_9
            eax_16, ecx_9 = (*(eax_15 + 0x14))(esi_1)
            int32_t var_24 = ecx_9
            int32_t eax_18
            int32_t ecx_11
            eax_18, ecx_11 = (*(*edi_1 + 0x10))(_mm_cvtepi32_ps(zx.o(eax_16)))
            int32_t var_28 = ecx_11
            sub_54c4d0(&arg1[3], edi_1, _mm_cvtepi32_ps(zx.o(eax_18)))
            sub_54ea10(arg1, edi_1)
            (*(*edi_1 + 4))()
            int32_t result
            result.b = 1
            return result

return 0
