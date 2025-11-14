// 函数: sub_5b0970
// 地址: 0x5b0970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebp - 1)
int32_t edi_1 = (eax_1 - edx) s>> 1

while (arg4 s< ebp)
    int32_t edx_2 = edi_1 * 7
    int32_t eax_3 = *(arg3 + (edx_2 << 2))
    
    if (eax_3 s>= *arg5)
        break
    
    int32_t ecx_1 = ebp * 7
    ebp = edi_1
    *(arg3 + (ecx_1 << 2)) = eax_3
    *(arg3 + (ecx_1 << 2) + 4) = *(arg3 + (edx_2 << 2) + 4)
    *(arg3 + (ecx_1 << 2) + 0xc) = *(arg3 + (edx_2 << 2) + 0xc)
    *(arg3 + (ecx_1 << 2) + 0x10) = *(arg3 + (edx_2 << 2) + 0x10)
    *(arg3 + (ecx_1 << 2) + 0x14) = *(arg3 + (edx_2 << 2) + 0x14)
    *(arg3 + (ecx_1 << 2) + 0x18) = *(arg3 + (edx_2 << 2) + 0x18)
    int32_t eax_10
    int32_t edx_3
    edx_3:eax_10 = sx.q(edi_1 - 1)
    edi_1 = (eax_10 - edx_3) s>> 1

int32_t ecx_3 = ebp * 7
*(arg3 + (ecx_3 << 2)) = *arg5
*(arg3 + (ecx_3 << 2) + 4) = arg5[1]
*(arg3 + (ecx_3 << 2) + 0xc) = arg5[3]
*(arg3 + (ecx_3 << 2) + 0x10) = arg5[4]
*(arg3 + (ecx_3 << 2) + 0x14) = arg5[5]
int32_t result = arg5[6]
*(arg3 + (ecx_3 << 2) + 0x18) = result
return result
