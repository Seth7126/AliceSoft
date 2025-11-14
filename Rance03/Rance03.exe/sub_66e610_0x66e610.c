// 函数: sub_66e610
// 地址: 0x66e610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = arg3
int32_t ebx
int32_t var_8 = ebx
void* esi = arg2
int32_t var_4 = arg3
void* edx = arg5
int128_t* eax_1 = arg6

if (arg3 != esi && arg4 != edx)
    bool cond:1_1
    
    do
        arg3.b = *(edx - 3)
        edx -= 0x28
        int32_t edi_1 = *(esi - 0x28)
        esi -= 0x28
        ebx.b = *(esi + 0x25)
        
        if (arg3.b == 0)
            if (ebx.b == 0 && *edx s>= edi_1)
                goto label_66e679
            
            goto label_66e656
        
        int64_t xmm0_3
        
        if (ebx.b == 0 || *edx s>= edi_1)
        label_66e679:
            eax_1 -= 0x28
            esi += 0x28
            cond:1_1 = arg4 != edx
            *eax_1 = *edx
            eax_1[1] = *(edx + 0x10)
            xmm0_3 = *(edx + 0x20)
        else
        label_66e656:
            eax_1 -= 0x28
            edx += 0x28
            cond:1_1 = var_4 != esi
            *eax_1 = *esi
            eax_1[1] = *(esi + 0x10)
            xmm0_3 = *(esi + 0x20)
        
        eax_1[2].q = xmm0_3
    while (cond:1_1)

int32_t var_18 = var_4
int128_t* eax_2 = sub_66f970(eax_1, edx, arg4, eax_1)
int32_t var_20 = var_4
return sub_66f970(eax_2, esi, var_4, eax_2)
