// 函数: sub_6356a0
// 地址: 0x6356a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
int32_t i = 0
uint32_t result
int32_t edx
edx:result = sx.q(*(arg1 + 4))
int32_t ebp_4 = ((((edx & 7) + result) s>> 3) * *(arg1 + 8) + 3) & 0xfffffffc
int32_t var_4 = ebp_4

if (*(arg1 + 0xc) s> 0)
    do
        result = (*(*arg2 + 8))(0, i)
        int32_t j = 0
        void* ecx_5 = (*(arg1 + 0xc) - i - 1) * ebp_4 + *(arg1 + 0x10)
        
        if (*(arg1 + 8) s> 0)
            void* edx_2 = result + 2
            void* ebp_5 = result - ecx_5 - 1
            
            do
                edx_2 += 4
                *(ecx_5 + ebp_5 + 1) = *(ecx_5 + 2)
                ecx_5 += 4
                j += 1
                *(edx_2 - 5) = *(ecx_5 - 3)
                *(edx_2 - 4) = *(ecx_5 - 4)
                *(edx_2 - 3) = 0xff
            while (j s< *(arg1 + 8))
            
            ebp_4 = var_4
        
        i += 1
    while (i s< *(arg1 + 0xc))

result.b = 1
return result
