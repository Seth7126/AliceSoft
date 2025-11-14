// 函数: sub_443210
// 地址: 0x443210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* j_1 = arg1
int32_t* edx = arg1[0x294]
int32_t* j_5 = *edx
int32_t* j = j_5
j_1 = j

if (j_5 != edx)
    int32_t i_1
    int32_t i = i_1
    
    while (j[4] s<= i)
        if (*(j + 0xd) == 0)
            int32_t* j_2 = j[2]
            
            if (*(j_2 + 0xd) != 0)
                int32_t* j_4 = j[1]
                
                if (*(j_4 + 0xd) == 0)
                    while (j == j_4[2])
                        j = j_4
                        j_4 = j_4[1]
                        
                        if (*(j_4 + 0xd) != 0)
                            break
                
                j = j_4
            else
                j = j_2
                int32_t* j_3 = *j
                
                while (*(j_3 + 0xd) == 0)
                    j = j_3
                    j_3 = *j
            
            j_1 = j
        
        if (j == edx)
            break
    
    if (j != j_5)
        if (j != edx && *(j[5] + 0x30) != 0)
            sub_418580(&j_1)
            j = j_1
        
        if (j != j_5)
            sub_418580(&j_1)
            return sub_4200d0(&arg1[0x294], &i_1, j_5, j_1)

return j
