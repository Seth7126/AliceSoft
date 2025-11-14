// 函数: sub_6355e0
// 地址: 0x6355e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(arg1 + 4))
int32_t eax_6 = (((eax_1 + (edx & 7)) s>> 3) * *(arg1 + 8) + 3) & 0xfffffffc
void* eax_8 = (*(*arg2 + 8))(0, 0)
int32_t ebx = *(arg1 + 8)
void* esi = eax_8
int32_t i = 0
int32_t* eax_10 = (*(*arg2 + 0x1c))() - (ebx << 2)
int32_t ecx_3 = *(arg1 + 0xc)
void* edx_5 = (ecx_3 - 1) * eax_6 + *(arg1 + 0x10)
int32_t result

if (ecx_3 s> 0)
    result = *(arg1 + 8)
    
    do
        int32_t ecx_4 = 0
        
        if (result s> 0)
            do
                ecx_4 += 1
                *esi = *(edx_5 + 2)
                *(esi + 1) = *(edx_5 + 1)
                char eax_13 = *edx_5
                edx_5 += 3
                *(esi + 2) = eax_13
                *(esi + 3) = 0xff
                esi += 4
                result = *(arg1 + 8)
            while (ecx_4 s< result)
        
        esi += eax_10
        i += 1
        edx_5 += neg.d(eax_6) - ebx * 3
    while (i s< *(arg1 + 0xc))

result.b = 1
return result
