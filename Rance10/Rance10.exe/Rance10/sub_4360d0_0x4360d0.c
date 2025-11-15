// 函数: sub_4360d0
// 地址: 0x4360d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* j_1 = arg1
int32_t* ecx = arg1[0x279]
int32_t* j_5 = *ecx
int32_t* j = j_5
j_1 = j

if (j_5 != ecx)
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
        
        if (j == ecx)
            break
    
    if (j != j_5)
        if (j != ecx && *(j[5] + 0x2c) == 0)
            sub_429da0(&j_1)
            j = j_1
        
        if (j != j_5)
            sub_429da0(&j_1)
            return sub_4346e0(&arg1[0x279], &i_1, j_5, j_1)

return j
