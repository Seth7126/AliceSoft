// 函数: sub_44f050
// 地址: 0x44f050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg2[1] = *arg2
int32_t result = *(arg1 + 4)
int32_t i = *result

if (i != result)
    do
        result = *(i + 0x14)
        
        if (result != 0 && *(result + 0xd8) != 0)
            result = sub_4158d0(arg2, i + 0x10)
        
        if (*(i + 0xd) == 0)
            int32_t i_1 = *(i + 8)
            
            if (*(i_1 + 0xd) != 0)
                result = *(i + 4)
                
                if (*(result + 0xd) == 0)
                    while (i == *(result + 8))
                        i = result
                        result = *(result + 4)
                        
                        if (*(result + 0xd) != 0)
                            break
                
                i = result
            else
                i = i_1
                result = *i
                
                while (*(result + 0xd) == 0)
                    i = result
                    result = *i
    while (i != *(arg1 + 4))

return result
