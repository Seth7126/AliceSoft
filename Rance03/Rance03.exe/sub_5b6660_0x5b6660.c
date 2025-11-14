// 函数: sub_5b6660
// 地址: 0x5b6660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esi = *(arg1 + 0x18)
int32_t edx = 0
void* result

if (esi s> 0)
    do
        char* ecx_1
        
        if (*(arg1 + 0x1c) u< 0x10)
            ecx_1 = arg1 + 8
        else
            ecx_1 = *(arg1 + 8)
        
        char* ecx_2
        
        if (ecx_1[edx] u>= 0x81)
            if (*(arg1 + 0x1c) u< 0x10)
                ecx_2 = arg1 + 8
            else
                ecx_2 = *(arg1 + 8)
        
        char* ecx_3
        void* ecx_4
        
        if (ecx_1[edx] u< 0x81 || ecx_2[edx] u> 0x9f)
            if (*(arg1 + 0x1c) u< 0x10)
                ecx_3 = arg1 + 8
            else
                ecx_3 = *(arg1 + 8)
            
            if (ecx_3[edx] u>= 0xe0)
                if (*(arg1 + 0x1c) u< 0x10)
                    ecx_4 = arg1 + 8
                else
                    ecx_4 = *(arg1 + 8)
        
        if ((ecx_1[edx] u< 0x81 || ecx_2[edx] u> 0x9f)
                && (ecx_3[edx] u< 0xe0 || *(ecx_4 + edx) u> 0xef))
            void* ecx_5
            
            if (*(arg1 + 0x1c) u< 0x10)
                ecx_5 = arg1 + 8
            else
                ecx_5 = *(arg1 + 8)
            
            if (*(ecx_5 + edx) == 0x40)
                result.b = 1
                return result
            
            edx += 1
        else
            edx += 2
    while (edx s< esi)

result.b = 0
return result
