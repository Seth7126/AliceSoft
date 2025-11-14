// 函数: sub_552f20
// 地址: 0x552f20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi - 1)
int32_t edx_2 = (eax_1 - edx) s>> 1

while (arg4 s< esi)
    int32_t* ecx_2 = (edx_2 << 5) + arg3
    int32_t eax_3 = *ecx_2
    
    if (eax_3 s>= *arg5)
        break
    
    int32_t* esi_2 = (esi << 5) + arg3
    *esi_2 = eax_3
    esi_2[1] = ecx_2[1]
    *(esi_2 + 0xc) = *(ecx_2 + 0xc)
    esi_2[7] = ecx_2[7]
    esi = edx_2
    int32_t eax_7
    int32_t edx_3
    edx_3:eax_7 = sx.q(edx_2 - 1)
    edx_2 = (eax_7 - edx_3) s>> 1

int32_t* esi_4 = (esi << 5) + arg3
*esi_4 = *arg5
esi_4[1] = arg5[1]
*(esi_4 + 0xc) = *(arg5 + 0xc)
int32_t result = arg5[7]
esi_4[7] = result
return result
