// 函数: sub_608580
// 地址: 0x608580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg2
char* edx = *(esi + 4)
uint32_t* eax

if (&edx[4] u> *(esi + 8))
label_6086e4:
    eax.b = 0
    return eax

arg2 = nullptr
uint32_t ebp_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(esi + 4) = &edx[4]

if (ebp_7 s> 0)
    void* ecx_21
    
    do
        eax = *(esi + 4)
        int32_t ebx_1 = *(esi + 8)
        void* edi_1 = &eax[1]
        
        if (edi_1 u> ebx_1)
            goto label_6086e4
        
        int32_t edx_7 =
            ((zx.d(*(eax + 3)) << 8 | zx.d(*(eax + 2))) << 8 | zx.d(*(eax + 1))) << 8 | zx.d(*eax)
        *(esi + 4) = edi_1
        
        if (edi_1 + 4 u> ebx_1)
            goto label_6086e4
        
        uint32_t ecx_8 =
            ((zx.d(*(edi_1 + 3)) << 8 | zx.d(*(edi_1 + 2))) << 8 | zx.d(*(edi_1 + 1))) << 8
            | zx.d(*edi_1)
        *(esi + 4) = edi_1 + 4
        uint32_t var_c_1 = ecx_8
        
        if (edi_1 + 8 u> ebx_1)
            goto label_6086e4
        
        int32_t edx_15 =
            ((zx.d(*(edi_1 + 7)) << 8 | zx.d(*(edi_1 + 6))) << 8 | zx.d(*(edi_1 + 5))) << 8
            | zx.d(*(edi_1 + 4))
        *(esi + 4) = edi_1 + 8
        int32_t var_8_1 = edx_15
        
        if (edi_1 + 0xc u> ebx_1)
            goto label_6086e4
        
        uint32_t ecx_16 =
            ((zx.d(*(edi_1 + 0xb)) << 8 | zx.d(*(edi_1 + 0xa))) << 8 | zx.d(*(edi_1 + 9))) << 8
            | zx.d(*(edi_1 + 8))
        *(esi + 4) = edi_1 + 0xc
        uint32_t var_4_1 = ecx_16
        void var_18
        
        if (sub_468b70(esi, &var_18).b == 0)
            goto label_6086e4
        
        ecx_21 = arg2 + 1
        arg2 = ecx_21
        *sub_608b20(arg1 + 0x2c, &var_18) = edx_7.o
    while (ecx_21 s< ebp_7)

uint32_t eax_3
eax_3.b = 1
return eax_3
