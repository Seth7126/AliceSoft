// 函数: sub_5c9230
// 地址: 0x5c9230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edx = arg2
int32_t eax_1 = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2

if (edx u< eax_1)
    eax_1 = *(arg1 + 0x174)
    edx = *(eax_1 + (edx << 2))
    
    if (edx != 0)
        uint32_t eax_3 = *(edx + 0xc) u>> 2
        
        if (arg3 u>= eax_3)
            int32_t var_8_2 = 0x6e8a08
            sub_5c2400(eax_3, edx, arg1, arg1, arg4)
            return 0
        
        int32_t eax_4
        
        if (*(edx + 0xc) != 0)
            eax_4 = *(edx + 8)
        else
            eax_4 = 0
        
        int32_t edx_1 = *(eax_4 + (arg3 << 2))
        int32_t result = (*(arg1 + 0x178) - *(arg1 + 0x174)) s>> 2
        
        if (edx_1 u< result)
            result = *(*(arg1 + 0x174) + (edx_1 << 2))
            
            if (result != 0)
                return result
        
        int32_t var_8_1 = 0x6e8a40
        sub_5c2400(result, edx_1, arg1, arg1, arg4)
        return 0

int32_t var_8_3 = 0x6e8a24
sub_5c2400(eax_1, edx, arg1, arg1, arg4)
return 0
