// 函数: sub_635740
// 地址: 0x635740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_2 = arg1
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(*(arg1 + 4))
int32_t ebp_4 = ((((edx & 7) + eax_1) s>> 3) * *(arg1 + 8) + 3) & 0xfffffffc
void* eax_2 = (*(*arg2 + 8))(0, 0)
int32_t ebx_1 = *(arg1 + 8)
void* esi = eax_2
int32_t* eax_5 = (*(*arg2 + 0x1c))() - (ebx_1 << 2)
int32_t i = 0
int32_t ecx_3 = *(arg1 + 0xc)
char* edx_5 = (ecx_3 - 1) * ebp_4 + *(arg1 + 0x10)
int32_t result

if (ecx_3 s> 0)
    result = *(arg1 + 8)
    
    do
        int32_t ecx_4 = 0
        
        if (result s> 0)
            do
                *esi = 0xffff
                ecx_4 += 1
                *(esi + 2) = 0xff
                result.b = *edx_5
                edx_5 = &edx_5[1]
                *(esi + 3) = result.b
                esi += 4
                result = *(arg1 + 8)
            while (ecx_4 s< result)
        
        edx_5 = &edx_5[neg.d(ebx_1 + ebp_4)]
        i += 1
        esi += eax_5
    while (i s< *(arg1 + 0xc))

result.b = 1
return result
