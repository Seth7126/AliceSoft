// 函数: sub_552ff0
// 地址: 0x552ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebp - 1)
int32_t edi_1 = (eax_1 - edx) s>> 1

while (arg4 s< ebp)
    int32_t edx_1 = edi_1 * 5
    int32_t eax_3 = *(arg3 + (edx_1 << 2))
    
    if (eax_3 s>= *arg5)
        break
    
    int32_t ecx_1 = ebp * 5
    ebp = edi_1
    *(arg3 + (ecx_1 << 2)) = eax_3
    *(arg3 + (ecx_1 << 2) + 4) = *(arg3 + (edx_1 << 2) + 4)
    *(arg3 + (ecx_1 << 2) + 0xc) = *(arg3 + (edx_1 << 2) + 0xc)
    *(arg3 + (ecx_1 << 2) + 0x10) = *(arg3 + (edx_1 << 2) + 0x10)
    int32_t eax_8
    int32_t edx_2
    edx_2:eax_8 = sx.q(edi_1 - 1)
    edi_1 = (eax_8 - edx_2) s>> 1

int32_t ecx_3 = ebp * 5
*(arg3 + (ecx_3 << 2)) = *arg5
*(arg3 + (ecx_3 << 2) + 4) = arg5[1]
*(arg3 + (ecx_3 << 2) + 0xc) = arg5[3]
int32_t result = arg5[4]
*(arg3 + (ecx_3 << 2) + 0x10) = result
return result
