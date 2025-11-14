// 函数: sub_66cb50
// 地址: 0x66cb50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg2
int32_t* edx = arg5
int128_t* ecx = arg6

if (arg3 != esi && arg4 != edx)
    bool cond:1_1
    
    do
        arg1 = edx[-7]
        esi -= 0x28
        edx -= 0x28
        int32_t edi_1 = esi[3]
        int64_t xmm0_3
        
        if (arg1 s< edi_1)
        label_66cbad:
            ecx -= 0x28
            edx = &edx[0xa]
            cond:1_1 = arg3 != esi
            *ecx = *esi
            ecx[1] = *(esi + 0x10)
            xmm0_3 = *(esi + 0x20)
        else
            if (arg1 s<= edi_1)
                arg1 = *edx
                
                if (arg1 s< *esi)
                    goto label_66cbad
            
            ecx -= 0x28
            esi = &esi[0xa]
            cond:1_1 = arg4 != edx
            *ecx = *edx
            ecx[1] = *(edx + 0x10)
            xmm0_3 = *(edx + 0x20)
        
        ecx[2].q = xmm0_3
    while (cond:1_1)

int32_t var_18 = arg3
int128_t* eax = sub_66f970(arg1, edx, arg4, ecx)
int32_t var_20 = arg3
return sub_66f970(eax, esi, arg3, eax)
