// 函数: sub_6ea9c8
// 地址: 0x6ea9c8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_8 = arg1
uint32_t result = *(arg1 + 8) u>> 1

if ((result.b & 1) == 0)
    result = arg2[2] u>> 1
    
    if ((result.b & 1) != 0)
        int32_t ebx_3 = (arg2[2] + 8) & 0xfffffffa
        
        if (((arg2[2]).b & 1) != 0)
            if (((arg2[2] u>> 2).b & 1) != 0)
                ebx_3 |= 4
            else if (arg2[3] == 0)
                int32_t esi_1 = *(**arg2 + 0x10)
                j_sub_4033e0()
                
                if (esi_1() != 0)
                    ebx_3 |= 4
        
        result = arg1
        *(result + 8) |= ebx_3

return result
