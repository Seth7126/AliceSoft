// 函数: sub_65e4f0
// 地址: 0x65e4f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1
int32_t* edx = *arg4
arg4 = edx
int32_t ecx = *(edi + 0x1b8)
int32_t i = *(arg2 + 4)
int32_t i_1 = 0
uint32_t esi = zx.d(*(i + ecx + 0x8c))
uint32_t ecx_1 = zx.d(*(i + ecx + 0x96))
uint32_t var_8 = esi
arg2 = ecx_1

if (*(edi + 0x11c) s> 0)
    do
        int32_t ebp_1 = *edx
        int32_t eax_3 = *(edi + 0x5c) + ebp_1
        char* ebx_2 = *arg3
        int32_t var_4_1 = eax_3
        
        if (ebp_1 u< eax_3)
            do
                edx.b = *ebx_2
                ebx_2 = &ebx_2[1]
                
                if (esi != 0)
                    eax_3.b = edx.b
                    int32_t eax_5 = zx.d(eax_3.b) * 0x1010101
                    int32_t ecx_4
                    int32_t edi_2
                    edi_2, ecx_4 = __memfill_u32(ebp_1, eax_5, esi u>> 2)
                    uint32_t ecx_5 = esi
                    esi = var_8
                    ebp_1 += esi
                    int32_t ecx_7
                    int32_t edi_3
                    edi_3, ecx_7 = __memfill_u8(edi_2, eax_5.b, ecx_5 & 3)
                    eax_3 = var_4_1
            while (ebp_1 u< eax_3)
            
            edx = arg4
            ecx_1 = arg2
            edi = arg1
        
        if (ecx_1 u> 1)
            void* ebp_2 = *(edi + 0x5c)
            void* esi_1 = &edx[1]
            int32_t j = ecx_1 - 1
            
            if (j s> 0)
                int32_t* ebx_4 = edx - esi_1
                
                do
                    char* eax_6 = *(ebx_4 + esi_1)
                    esi_1 += 4
                    sub_700660(*(esi_1 - 4), eax_6, ebp_2)
                    j -= 1
                while (j s> 0)
                
                edx = arg4
                ecx_1 = arg2
            
            edi = arg1
        
        arg3 = &arg3[1]
        i = i_1 + ecx_1
        esi = var_8
        edx = &edx[ecx_1]
        i_1 = i
        arg4 = edx
    while (i s< *(edi + 0x11c))

return i
