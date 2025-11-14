// 函数: sub_48cd70
// 地址: 0x48cd70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* result = *(arg1 + 0xc)
int32_t* i = *result

if (i != result)
    do
        int32_t* ecx = i[0xa]
        
        if (ecx[1] == 1)
            (*(*ecx + 4))()
            int32_t* i_2 = i
            
            if (*(i + 0xd) == 0)
                int32_t* i_3 = i[2]
                
                if (*(i_3 + 0xd) != 0)
                    int32_t* i_5 = i[1]
                    
                    if (*(i_5 + 0xd) == 0)
                        while (i == i_5[2])
                            i = i_5
                            i_5 = i_5[1]
                            
                            if (*(i_5 + 0xd) != 0)
                                break
                    
                    i = i_5
                else
                    i = i_3
                    int32_t* i_4 = *i
                    
                    while (*(i_4 + 0xd) == 0)
                        i = i_4
                        i_4 = *i
            
            result = sub_417fb0(arg1 + 0xc, &var_4, i_2)
        else if (*(i + 0xd) == 0)
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
    while (i != *(arg1 + 0xc))

return result
