// 函数: sub_4b1880
// 地址: 0x4b1880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2
int32_t edx = *(arg1 + 0xb4)
int32_t edx_1 = neg.d(edx)

if (ebx == (sbb.d(edx_1, edx_1, edx != 0) & (edx + 0xc)))
label_4b18f2:
    void* eax_5 = sub_4b3890(arg1)
    void* edi_1 = *(arg1 + 0x158)
    int32_t eax_6 = *(edi_1 + 0x40)
    void* eax_8
    
    if (eax_5 == 0)
        eax_8 = edi_1
        arg2 = edi_1
    else
        edi_1 = sub_4addd0(eax_5, eax_6)
        eax_8 = sub_4ade40(eax_5, eax_6)
        arg2 = eax_8
    
    if (edi_1 == 0)
        edi_1 = *(arg1 + 0x158)
    
    if (eax_8 == 0)
        arg2 = *(arg1 + 0x158)
    
    float xmm0_5
    
    if (*(edi_1 + 0x218) == 0)
        xmm0_5 = *(edi_1 + 0x90)
    else
        void* ebp_2 = data_7fcbbc
        int32_t eax_10
        
        if (ebp_2 != 0)
            if (sub_63c080(ebp_2) != 0)
                eax_10 = (*(**(ebp_2 + 0x2c) + 0x50))()
            else
                eax_10 = 0
        else
            eax_10 = 0
        
        long double x87_r0
        long double x87_r1
        xmm0_5 = sub_63ce00(_mm_cvtepi32_ps(zx.o(eax_10)), x87_r0, x87_r1) * *(edi_1 + 0x90)
    
    *(arg1 + 0x160) = int.d(xmm0_5)
    float xmm0_10
    
    if (*(edi_1 + 0x218) == 0)
        xmm0_10 = *(edi_1 + 0x94)
    else
        void* ebp_3 = data_7fcbbc
        int32_t eax_14
        
        if (ebp_3 != 0)
            if (sub_63c080(ebp_3) != 0)
                eax_14 = (*(**(ebp_3 + 0x2c) + 0x54))()
            else
                eax_14 = 0
        else
            eax_14 = 0
        
        xmm0_10 = sub_63ce00(_mm_cvtepi32_ps(zx.o(eax_14))) * *(edi_1 + 0x94)
    
    *(arg1 + 0x164) = int.d(xmm0_10)
    *(arg1 + 0x168) = (*(**(arg2 + 0x74) + 0x24))(1)
    int32_t eax_19
    
    if (eax_5 != 0)
        eax_19 = sub_4ab9b0(eax_5 + 0xa0, eax_6)
    
    if (eax_5 == 0 || eax_19.b == 0)
        eax_19.b = 0
    else
        eax_19.b = 1
    
    int32_t* ecx_26
    
    if (*(arg1 + 0x173) != 0 || eax_19.b != 0)
        ecx_26 = *(*(arg1 + 0x158) + 0x74)
    else
        ecx_26 = *(arg2 + 0x74)
    
    *(arg1 + 0x16c) = (*(*ecx_26 + 0x28))(1)
else
    int32_t ecx = *(arg1 + 0xbc)
    int32_t ecx_1 = neg.d(ecx)
    
    if (ebx == (sbb.d(ecx_1, ecx_1, ecx != 0) & (ecx + 0xc)))
        goto label_4b18f2
    
    int32_t ecx_4 = *(arg1 + 0xc0)
    int32_t ecx_5 = neg.d(ecx_4)
    
    if (ebx == (sbb.d(ecx_5, ecx_5, ecx_4 != 0) & (ecx_4 + 0xc)))
        goto label_4b18f2
    
    int32_t ecx_8 = *(arg1 + 0xc4)
    int32_t ecx_9 = neg.d(ecx_8)
    
    if (ebx == (sbb.d(ecx_9, ecx_9, ecx_8 != 0) & (ecx_8 + 0xc)))
        goto label_4b18f2
    
    int32_t ecx_12 = *(arg1 + 0xc8)
    int32_t ecx_13 = neg.d(ecx_12)
    
    if (ebx == (sbb.d(ecx_13, ecx_13, ecx_12 != 0) & (ecx_12 + 0xc)))
        goto label_4b18f2

int32_t ecx_28 = neg.d(ebx)
*(arg1 + 0xdc) = sbb.d(ecx_28, ecx_28, ebx != 0) & (ebx - 0xc)
return sub_4cbd50(arg1 + 0xc, arg3, ebx)
