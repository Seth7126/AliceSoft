// 函数: sub_5cb160
// 地址: 0x5cb160
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x234) -= 4
int32_t edx = **(arg1 + 0x234)
*(arg1 + 0x234) -= 4
int32_t result = sub_5c9230(arg1, **(arg1 + 0x234), edx, "A_REVERSE")

if (result != 0 && *(result + 0x48) != 0)
    uint32_t ecx_1 = *(result + 0xc) u>> 2
    
    if (ecx_1 s> 0)
        int32_t edi_1
        
        if (*(result + 0xc) != 0)
            edi_1 = *(result + 8)
        else
            edi_1 = 0
        
        int32_t esi_1 = 0
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(ecx_1)
        result = eax_3 - edx_1
        int32_t ebx_2 = result s>> 1
        
        if (ebx_2 s> 0)
            void* ecx_3 = edi_1 + ((ecx_1 - 1) << 2)
            
            do
                int32_t edx_2 = *(edi_1 + (esi_1 << 2))
                ecx_3 -= 4
                result = *(ecx_3 + 4)
                *(edi_1 + (esi_1 << 2)) = result
                esi_1 += 1
                *(ecx_3 + 4) = edx_2
            while (esi_1 s< ebx_2)

return result
