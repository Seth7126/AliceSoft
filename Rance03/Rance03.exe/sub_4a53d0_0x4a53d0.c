// 函数: sub_4a53d0
// 地址: 0x4a53d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *(arg1 + 0x1c)
int32_t* i = *result

if (i != result)
    do
        result = i[4]
        
        if (result s>= 0 && result s< 0x186a0)
            result = sub_412de0(arg2, &i[5])
        
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
    while (i != *(arg1 + 0x1c))

return result
