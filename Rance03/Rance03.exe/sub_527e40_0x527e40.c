// 函数: sub_527e40
// 地址: 0x527e40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg2 + 4)

if (&edx[4] u> *(arg2 + 8))
label_527fdb:
    char* eax
    eax.b = 0
    return eax

uint32_t edi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]
sub_528030(arg1 + 4, edi_7)
int32_t var_18_1 = 0
int32_t eax_4

if (edi_7 s> 0)
    int32_t edi_8 = 0
    
    do
        if (sub_468d00(arg2, *(arg1 + 4) + edi_8).b == 0)
            goto label_527fdb
        
        char* edx_1 = *(arg2 + 4)
        
        if (&edx_1[4] u> *(arg2 + 8))
            goto label_527fdb
        
        *(edi_8 + *(arg1 + 4) + 0x18) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) += 4
        char* edx_2 = *(arg2 + 4)
        void* eax_12 = *(arg1 + 4) + edi_8
        
        if (&edx_2[4] u> *(arg2 + 8))
            goto label_527fdb
        
        uint32_t ecx_16 =
            ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8 | zx.d(*edx_2)
        *(arg2 + 4) = &edx_2[4]
        *(eax_12 + 0x1c) = ecx_16
        
        if (sub_468bc0(arg2, *(arg1 + 4) + 0x20 + edi_8).b == 0)
            goto label_527fdb
        
        if (sub_468bc0(arg2, *(arg1 + 4) + 0x24 + edi_8).b == 0)
            goto label_527fdb
        
        if (sub_468bc0(arg2, *(arg1 + 4) + 0x28 + edi_8).b == 0)
            goto label_527fdb
        
        if (sub_468bc0(arg2, *(arg1 + 4) + 0x2c + edi_8).b == 0)
            goto label_527fdb
        
        if (sub_468bc0(arg2, *(arg1 + 4) + 0x30 + edi_8).b == 0)
            goto label_527fdb
        
        if (sub_468ab0(arg2, *(arg1 + 4) + 0x34 + edi_8).b == 0)
            goto label_527fdb
        
        edi_8 += 0x38
        eax_4 = var_18_1 + 1
        var_18_1 = eax_4
    while (eax_4 s< edi_7)

eax_4.b = 1
return eax_4
