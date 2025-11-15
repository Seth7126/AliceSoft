// 函数: sub_6a5d50
// 地址: 0x6a5d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = nullptr
void* esi_1 = arg6 + 0x84
uint32_t ecx_2 = (zx.d(*(arg6 + 0x80)) << 8) + zx.d(*(esi_1 - 3))
arg6 = nullptr
uint32_t eax_2 = zx.d(*(esi_1 - 1))
uint32_t ecx_5 = ((ecx_2 << 8) + zx.d(*(esi_1 - 2))) << 8
uint32_t ecx_6 = ecx_5 + eax_2
uint32_t var_8 = ecx_6

if (ecx_5 != neg.d(eax_2))
    do
        uint32_t edi_7 = (((((zx.d(*esi_1) << 8) + zx.d(*(esi_1 + 1))) << 8) + zx.d(*(esi_1 + 2)))
            << 8) + zx.d(*(esi_1 + 3))
        uint32_t ebx_7 = (((((zx.d(*(esi_1 + 4)) << 8) + zx.d(*(esi_1 + 5))) << 8)
            + zx.d(*(esi_1 + 6))) << 8) + zx.d(*(esi_1 + 7))
        uint32_t eax_11 = zx.d(*(esi_1 + 0xb))
        uint32_t ebp_7 = (((((zx.d(*(esi_1 + 8)) << 8) + zx.d(*(esi_1 + 9))) << 8)
            + zx.d(*(esi_1 + 0xa))) << 8) + eax_11
        
        if ((ebx_7.b & 3) != 0)
            sub_6a5720(eax_11, nullptr, arg3, arg4, edi_7, 
                "ICC profile tag start not a multiple of 4")
            ecx_6 = var_8
            edx = arg6
        
        if (ebx_7 u> arg5)
            sub_6a5720(arg5, arg2, arg3, arg4, edi_7, "ICC profile tag outside profile")
            return 0
        
        int32_t eax_12 = arg5 - ebx_7
        
        if (ebp_7 u> eax_12)
            sub_6a5720(eax_12, arg2, arg3, arg4, edi_7, "ICC profile tag outside profile")
            return 0
        
        edx += 1
        esi_1 += 0xc
        arg6 = edx
    while (edx u< ecx_6)

return 1
