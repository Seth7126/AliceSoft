// 函数: sub_578340
// 地址: 0x578340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t esi = arg2
char* edx = *(esi + 4)

if (&edx[4] u> *(esi + 8))
label_5784d0:
    uint32_t eax
    eax.b = 0
    return eax

uint32_t eax_3 = zx.d(*edx)
uint32_t ebx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8
*(esi + 4) = &edx[4]
uint32_t ebx_7 = ebx_6 | eax_3
struct _EXCEPTION_REGISTRATION_RECORD*** edi_1 = arg1 + 0x24
struct _EXCEPTION_REGISTRATION_RECORD*** var_2c_1 = edi_1
sub_578e90(edi_1, ebx_7)
arg2 = 0
uint32_t eax_4

if (ebx_7 s> 0)
    int32_t ebp_1 = 0
    
    while (true)
        void* edi_3 = *edi_1 + ebp_1
        
        if (sub_468d00(esi, edi_3).b == 0)
            goto label_5784d0
        
        char* edx_1 = *(esi + 4)
        
        if (&edx_1[4] u> *(esi + 8))
            goto label_5784d0
        
        *(edi_3 + 0x18) =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(esi + 4) += 4
        char* edx_2 = *(esi + 4)
        
        if (&edx_2[4] u> *(esi + 8))
            goto label_5784d0
        
        uint32_t ecx_11 = zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])
        uint32_t var_28 = 0
        float var_24_1 = 0f
        float var_20_1 = 0f
        *(edi_3 + 0x1c) = (ecx_11 << 8 | zx.d(edx_2[1])) << 8 | zx.d(*edx_2)
        *(esi + 4) += 4
        
        if (sub_5781d0(esi, &var_28).b == 0)
            goto label_5784d0
        
        int128_t var_10 = data_7093d0
        
        if (sub_578280(esi, &var_10).b == 0)
            goto label_5784d0
        
        ebp_1 += 0x40
        float xmm1_1 = *(arg1 + 4)
        *(edi_3 + 0x34) = _mm_unpacklo_ps(xmm1_1 f* var_28, var_24_1 * xmm1_1)
        int128_t xmm0_4 = var_10
        *(edi_3 + 0x3c) = var_20_1 * xmm1_1
        eax_4 = arg2 + 1
        arg2 = eax_4
        *(edi_3 + 0x24) = xmm0_4
        
        if (eax_4 s>= ebx_7)
            break
        
        edi_1 = var_2c_1

eax_4.b = 1
return eax_4
