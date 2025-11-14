// 函数: sub_66bc90
// 地址: 0x66bc90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int128_t* eax = arg6
int32_t* esi = arg2
void* edx = arg5

if (arg3 != esi && arg4 != edx)
    bool cond:0_1
    
    do
        int32_t ecx = *(edx - 0x28)
        edx -= 0x28
        esi -= 0x28
        eax -= 0x28
        int64_t xmm0_3
        
        if (ecx s>= *esi)
            esi = &esi[0xa]
            cond:0_1 = arg4 != edx
            *eax = *edx
            eax[1] = *(edx + 0x10)
            xmm0_3 = *(edx + 0x20)
        else
            edx += 0x28
            cond:0_1 = arg3 != esi
            *eax = *esi
            eax[1] = *(esi + 0x10)
            xmm0_3 = *(esi + 0x20)
        
        eax[2].q = xmm0_3
    while (cond:0_1)

int32_t var_14 = arg3
int128_t* eax_1 = sub_66f970(eax, edx, arg4, eax)
int32_t var_1c = arg3
return sub_66f970(eax_1, esi, arg3, eax_1)
