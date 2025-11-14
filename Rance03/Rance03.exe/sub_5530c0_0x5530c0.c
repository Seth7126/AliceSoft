// 函数: sub_5530c0
// 地址: 0x5530c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebx - 1)
int32_t eax_3 = (eax_1 - edx) s>> 1

while (arg4 s< ebx)
    int32_t esi_1 = eax_3 * 0x14
    int32_t* esi_2 = esi_1 + arg3
    
    if (*(esi_1 + arg3) s>= *arg5)
        break
    
    int32_t ecx_2 = ebx * 5
    ebx = eax_3
    int32_t* edx_2 = (ecx_2 << 2) + arg3
    *edx_2 = *esi_2
    edx_2[1] = esi_2[1]
    edx_2[3] = esi_2[3]
    edx_2[4] = esi_2[4]
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = sx.q(eax_3 - 1)
    eax_3 = (eax_5 - edx_3) s>> 1

int32_t* ecx_8 = ebx * 0x14 + arg3
*ecx_8 = *arg5
ecx_8[1] = arg5[1]
ecx_8[3] = arg5[3]
int32_t result = arg5[4]
ecx_8[4] = result
return result
