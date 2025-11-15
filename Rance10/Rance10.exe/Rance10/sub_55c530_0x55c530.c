// 函数: sub_55c530
// 地址: 0x55c530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = arg1
int32_t result = 0

while (i != arg2)
    result += 1
    
    if (*(i + 0xd) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0xd) == 0)
                while (i == i_3[2])
                    i = i_3
                    arg1 = i
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0xd) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0xd) == 0)
                i = i_2
                i_2 = *i
        
        arg1 = i

return result
