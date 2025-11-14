// 函数: sub_546cb0
// 地址: 0x546cb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t result = *(arg1 + 4)

if (result == *(arg2 + 0x10))
    if (result - 1 u> 0xa)
        result.b = 1
        return result
    
    switch (result + &jump_table_546d8c[4]:3)
        case &lookup_table_546da0, &lookup_table_546da0[9]
            if (*(arg1 + 0xc) == 0 || *(arg1 + 0x10) != 0)
                result.b = 1
                return result
            
            int32_t edx = *(arg2 + 0x1c0)
            
            if (edx != 0 && *(*(arg1 + 0xc) + 0x14) == edx)
                result.b = 1
                return result
        case &lookup_table_546da0[1], &lookup_table_546da0[0xa]
            if (*(arg1 + 0x18) == 0 || *(arg1 + 0x1c) != 0)
                result.b = 1
                return result
            
            int32_t edx_1 = *(arg2 + 0x1c0)
            
            if (edx_1 != 0)
                result = *(arg1 + 0x18)
                
                if (*(result + 0x14) == edx_1)
                    result.b = *(result + 0x134)
                    
                    if (result.b != arg3)
                        result.b = 0
                        return result
                    
                    result.b = 1
                    return result
        case &lookup_table_546da0[2]
            if (*(arg1 + 0x24) != 0 && *(arg1 + 0x28) == 0)
                result = sub_52a1b0(*(arg1 + 0x24), arg2 + 0x14, *(arg2 + 0x1cc))
                
                if (result.b == 0)
                    return result
            
            result.b = 1
            return result
        case &lookup_table_546da0[3], &lookup_table_546da0[4], &lookup_table_546da0[5], 
                &lookup_table_546da0[6], &lookup_table_546da0[8]
            result.b = 1
            return result
        case &lookup_table_546da0[7]
            if (*(arg1 + 0x48) == 0 || *(arg1 + 0x4c) != 0)
                result.b = 1
                return result
            
            result = *(arg2 + 0x1d8)
            
            if (result != 0 && sub_56a3a0(*(arg1 + 0x48), arg2 + 0x14, *(result + 0x10)).b != 0)
                result.b = 1
                return result

result.b = 0
return result
