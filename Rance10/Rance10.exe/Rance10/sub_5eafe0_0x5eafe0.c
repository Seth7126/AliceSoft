// 函数: sub_5eafe0
// 地址: 0x5eafe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_5665c0(data_7fd4cc, arg2, arg4)

if (eax != 0)
    void* ecx_1 = *(eax + 0x220)
    
    if (ecx_1 != 0)
        if (arg3 == 2)
            *(ecx_1 + 0x10) = arg5
        label_5eb021:
            void* eax_3 = *(eax + 0x220)
            int32_t ecx_2 = *(eax_3 + 0x10)
            
            if (ecx_2 != 0xffffffff)
                eax_3 = *(eax_3 + 0x14)
                
                if (eax_3 != 0xffffffff)
                    *(eax + 0x184) = _mm_cvtepi32_ps(zx.o(ecx_2))
                    *(eax + 0x188) = _mm_cvtepi32_ps(zx.o(eax_3))
            
            eax_3.b = 1
            return eax_3
        
        if (arg3 == 3)
            *(ecx_1 + 0x14) = arg5
            goto label_5eb021

eax.b = 0
return eax
