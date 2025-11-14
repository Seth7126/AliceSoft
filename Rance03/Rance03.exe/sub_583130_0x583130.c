// 函数: sub_583130
// 地址: 0x583130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *arg2
int32_t* i = *result

if (i != result)
    do
        result = *(arg1 + 0x38)
        int32_t ecx
        
        if (&i[4] u< result)
            ecx = *(arg1 + 0x34)
        
        int32_t** ecx_3
        
        if (&i[4] u>= result || ecx u> &i[4])
            if (result == *(arg1 + 0x3c))
                result = sub_415950(arg1 + 0x34, 1)
            
            ecx_3 = *(arg1 + 0x38)
            
            if (ecx_3 != 0)
                result = i[4]
                *ecx_3 = result
        else
            if (result == *(arg1 + 0x3c))
                result = sub_415950(arg1 + 0x34, 1)
            
            ecx_3 = *(arg1 + 0x38)
            
            if (ecx_3 != 0)
                result = *(*(arg1 + 0x34) + ((&i[4] - ecx) s>> 2 << 2))
                *ecx_3 = result
        *(arg1 + 0x38) += 4
        
        if (*(i + 0xd) == 0)
            int32_t* i_1 = i[2]
            
            if (*(i_1 + 0xd) != 0)
                result = i[1]
                
                if (*(result + 0xd) == 0)
                    while (i == result[2])
                        i = result
                        result = result[1]
                        
                        if (*(result + 0xd) != 0)
                            break
                
                i = result
            else
                i = i_1
                result = *i
                
                while (*(result + 0xd) == 0)
                    i = result
                    result = *i
    while (i != *arg2)

return result
