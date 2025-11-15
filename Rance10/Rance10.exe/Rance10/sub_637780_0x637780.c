// 函数: sub_637780
// 地址: 0x637780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg2
int32_t ecx = arg6
int16_t* edi = arg5
void* var_38 = ebp

if (edi == ecx)
    *arg3 = arg4
    return arg3

int32_t* esi = arg4

do
    uint32_t eax_5 = zx.d(*edi)
    
    if (eax_5 == 0x26)
        edi = &edi[1]
        int32_t eax
        int32_t edx_1
        edx_1:eax = muls.dp.d(0x2aaaaaab, *(ebp + 0xc) - *(ebp + 8))
        int32_t edx_2 = edx_1 s>> 1
        
        if (edx_2 u>> 0x1f != neg.d(edx_2))
            int32_t ebp_1 = 0
            int64_t xmm0_1 = **(ebp + 8)
            int16_t* ebx_1 = xmm0_1.d
            uint32_t ecx_7 = (xmm0_1:4.d - ebx_1 + 1) u>> 1
            
            if (ebx_1 u> xmm0_1:4.d)
                ecx_7 = 0
            
            if (ecx_7 != 0)
                do
                    sub_637b50(esi, *ebx_1)
                    ebp_1 += 1
                    ebx_1 = &ebx_1[1]
                while (ebp_1 != ecx_7)
            
            ebp = var_38
            arg4 = esi
    else if (eax_5 != 0x5c)
    label_6378af:
        sub_637b50(esi, eax_5.w)
        esi = arg4
        edi = &edi[1]
    else
        edi = &edi[1]
        
        if (edi == ecx)
            *arg3 = esi
            return arg3
        
        eax_5 = zx.d(*edi)
        
        if (0x30 u> eax_5.w || eax_5 u> 0x39)
            goto label_6378af
        
        int32_t eax_6
        int32_t edx_3
        edx_3:eax_6 = muls.dp.d(0x2aaaaaab, *(ebp + 0xc) - *(ebp + 8))
        edi = &edi[1]
        int32_t edx_4 = edx_3 s>> 1
        
        if (eax_5 - 0x30 s< (edx_4 u>> 0x1f) + edx_4)
            int32_t eax_10 = *(ebp + 8)
            int64_t xmm0_3 = *(eax_10 + (eax_5 - 0x30) * 0xc)
            int32_t* var_34
            esi = *sub_6361e0(eax_10, xmm0_3.d, &var_34, xmm0_3:4.d, esi)
            arg4 = esi
    
    ecx = arg6
while (edi != ecx)

*arg3 = esi
return arg3
