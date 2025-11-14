// 函数: sub_44f0e0
// 地址: 0x44f0e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = *(arg1 + 8) != 0
int32_t var_8 = 1

if (not(cond:0))
    return 1

int32_t* j_1
sub_42f3d0(arg1 + 4, &j_1, &var_8)
int32_t ecx_1 = *(arg1 + 4)
int32_t* j = j_1

if (j == ecx_1)
    return 1

int32_t i

do
    i = j[4] + 1
    
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
    
    if (j == ecx_1)
        break
while (j[4] == i)

return i
