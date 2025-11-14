// 函数: sub_5dd0f0
// 地址: 0x5dd0f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx_2 = *(arg1 + 4)

if (arg2 u< *(ecx_2 + 0xc) u>> 2)
    int32_t eax_1
    
    if (*(ecx_2 + 0xc) != 0)
        eax_1 = *(ecx_2 + 8)
    else
        eax_1 = 0
    
    void* ecx = *(ecx_2 + 0x1c)
    int32_t edx_1 = *(eax_1 + (arg2 << 2))
    
    if (edx_1 u< (*(ecx + 0xc) - *(ecx + 8)) s>> 2)
        void* ecx_1 = *(*(ecx + 8) + (edx_1 << 2))
        
        if (ecx_1 != 0)
            return sub_5d3d20(ecx_1, arg3) != 0

uint32_t result
result.b = 0
return result
