// 函数: sub_637900
// 地址: 0x637900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg2
int32_t ecx = arg6
int16_t* edi = arg5
void* var_44 = ebp

if (edi == ecx)
    *arg3 = arg4
    return arg3

int32_t* esi = arg4

do
    uint32_t eax_16 = zx.d(*edi)
    int16_t var_5c_1
    int32_t* ecx_1
    
    if (eax_16 == 0x24)
        edi = &edi[1]
        
        if (edi != ecx)
            uint32_t eax = zx.d(*edi)
            
            if (eax == 0x24)
                var_5c_1 = eax.w
                ecx_1 = esi
                goto label_637b0a
            
            if (eax == 0x60)
                int32_t eax_1 = *(ebp + 0x18)
                int16_t* ebx_1 = *(ebp + 0x14)
                int32_t ebp_1 = 0
                uint32_t ecx_6 = (eax_1 - ebx_1 + 1) u>> 1
                
                if (ebx_1 u> eax_1)
                    ecx_6 = 0
                
                uint32_t var_48_1 = ecx_6
                
                if (ecx_6 != 0)
                    do
                        sub_637b50(esi, *ebx_1)
                        ebp_1 += 1
                        ebx_1 = &ebx_1[1]
                    while (ebp_1 != ecx_6)
                
                ebp = var_44
                edi = &edi[1]
                arg4 = esi
            else if (eax == 0x27)
                edi = &edi[1]
                int32_t* var_3c
                esi = *sub_6361e0(eax, *(ebp + 0x20), &var_3c, *(ebp + 0x24), esi)
                arg4 = esi
            else if (eax != 0x26)
                if (0x30 u> eax.w || eax u> 0x39)
                    sub_637b50(esi, 0x24)
                    eax_16 = zx.d(*edi)
                    ecx_1 = arg4
                    goto label_637b09
                
                edi = &edi[1]
                int32_t ebx_2 = eax - 0x30
                uint32_t eax_9
                
                if (edi != ecx)
                    eax_9 = zx.d(*edi)
                
                if (edi == ecx || 0x30 u> eax_9.w || eax_9 u> 0x39)
                    arg5.b = 0
                else
                    arg5.b = 1
                    edi = &edi[1]
                    ebx_2 = eax_9 + ((ebx_2 * 5 - 0x18) << 1)
                
                if (ebx_2 != 0)
                    int32_t eax_10
                    int32_t edx_5
                    edx_5:eax_10 = muls.dp.d(0x2aaaaaab, *(ebp + 0xc) - *(ebp + 8))
                    int32_t edx_6 = edx_5 s>> 1
                    
                    if (ebx_2 s< (edx_6 u>> 0x1f) + edx_6)
                        int32_t eax_14 = *(ebp + 8)
                        int64_t xmm0_3 = *(eax_14 + ebx_2 * 0xc)
                        int32_t* var_34
                        esi = *sub_6361e0(eax_14, xmm0_3.d, &var_34, xmm0_3:4.d, esi)
                        arg4 = esi
                else
                    sub_637b50(esi, 0x24)
                    sub_637b50(arg4, 0x30)
                    
                    if (arg5.b != ebx_2.b)
                        sub_637b50(arg4, 0x30)
                    
                    esi = arg4
            else
                edi = &edi[1]
                int32_t eax_4
                int32_t edx_2
                edx_2:eax_4 = muls.dp.d(0x2aaaaaab, *(ebp + 0xc) - *(ebp + 8))
                int32_t edx_3 = edx_2 s>> 1
                uint32_t eax_6 = edx_3 u>> 0x1f
                
                if (eax_6 != neg.d(edx_3))
                    int64_t xmm0_1 = **(ebp + 8)
                    int32_t* var_38
                    esi = *sub_6361e0(eax_6 + edx_3, xmm0_1.d, &var_38, xmm0_1:4.d, esi)
                    arg4 = esi
        else
            sub_637b50(esi, 0x24)
            esi = arg4
    else
        ecx_1 = esi
    label_637b09:
        var_5c_1 = eax_16.w
    label_637b0a:
        sub_637b50(ecx_1, var_5c_1)
        edi = &edi[1]
        esi = arg4
    ecx = arg6
while (edi != ecx)

*arg3 = esi
return arg3
