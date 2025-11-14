// 函数: sub_5c3170
// 地址: 0x5c3170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1
*(esi + 0x234) -= 4
int32_t edi = **(esi + 0x234)
*(esi + 0x234) -= 4
int32_t ebx = **(esi + 0x234)
int32_t edx

if (ebx u< (*(esi + 0x178) - *(esi + 0x174)) s>> 2)
    arg1 = *(*(esi + 0x174) + (ebx << 2))
    
    if (arg1 != 0)
        int32_t var_8
        int32_t result_1
        char eax_6
        eax_6, arg1, edx = sub_5d3590(arg1, edi, &var_8, &result_1)
        
        if (eax_6 != 0)
            int32_t ecx = *(esi + 0x22c)
            int32_t edi_3 = (*(esi + 0x234) - *(esi + 0x228)) s>> 2
            
            if (edi_3 + 1 u>= ecx)
                sub_64ad90(esi + 0x224, ecx * 2)
                *(esi + 0x234) = *(esi + 0x228) + (edi_3 << 2)
            
            **(esi + 0x234) = var_8
            *(esi + 0x234) += 4
            int32_t ecx_3 = *(esi + 0x22c)
            int32_t edi_6 = (*(esi + 0x234) - *(esi + 0x228)) s>> 2
            
            if (edi_6 + 1 u>= ecx_3)
                sub_64ad90(esi + 0x224, ecx_3 * 2)
                *(esi + 0x234) = *(esi + 0x228) + (edi_6 << 2)
            
            int32_t result = result_1
            **(esi + 0x234) = result
            *(esi + 0x234) += 4
            return result

int32_t var_18_4 = edi + 1
int32_t var_1c_2 = edi
int32_t var_20_2 = ebx
int32_t var_24 = 0x6e6954
return sub_5c2400(edi + 1, edx, arg1, esi, "REFREF")
