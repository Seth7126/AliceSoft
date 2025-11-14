// 函数: sub_66caa0
// 地址: 0x66caa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* eax = arg6
int32_t* esi = arg4
int32_t* edi = arg3

if (edi != arg2 && esi != arg5)
    bool cond:1_1
    
    do
        int32_t ecx_1 = esi[3]
        int32_t edx = edi[3]
        
        if (ecx_1 s< edx || (ecx_1 s<= edx && *esi s< *edi))
            *eax = *esi
            eax[1] = *(esi + 0x10)
            int64_t xmm0_6 = *(esi + 0x20)
            esi = &esi[0xa]
            eax[2].q = xmm0_6
            eax += 0x28
            cond:1_1 = esi != arg5
        else
            *eax = *edi
            eax[1] = *(edi + 0x10)
            int64_t xmm0_3 = *(edi + 0x20)
            edi = &edi[0xa]
            eax[2].q = xmm0_3
            eax += 0x28
            cond:1_1 = edi != arg2
    while (cond:1_1)

int32_t* var_18 = arg3
int128_t* eax_1 = sub_66f9b0(eax, arg2, edi, eax)
int32_t* var_20 = arg3
return sub_66f9b0(eax_1, arg5, esi, eax_1)
