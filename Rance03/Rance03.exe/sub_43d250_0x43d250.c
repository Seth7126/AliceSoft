// 函数: sub_43d250
// 地址: 0x43d250
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = arg2 s>= 0
int32_t* j_2

if (arg2 s> 0)
    int32_t* j = *arg1
    
    do
        if (*(j + 0xd) == 0)
            int32_t* j_3 = j[2]
            
            if (*(j_3 + 0xd) != 0)
                j_2 = j[1]
                
                if (*(j_2 + 0xd) == 0)
                    while (j == j_2[2])
                        *arg1 = j_2
                        j = j_2
                        j_2 = j_2[1]
                        
                        if (*(j_2 + 0xd) != 0)
                            break
                
                j = j_2
                *arg1 = j_2
            else
                j = j_3
                j_2 = *j
                
                while (*(j_2 + 0xd) == 0)
                    j = j_2
                    j_2 = *j
                
                *arg1 = j
        
        arg2 -= 1
        cond:0 = arg2 s>= 0
    while (arg2 s> 0)

if (cond:0)
    return 

int32_t* j_1 = *arg1
int32_t i_1 = neg.d(arg2)
int32_t i

do
    if (*(j_1 + 0xd) == 0)
        int32_t* j_4 = *j_1
        
        if (*(j_4 + 0xd) != 0)
            j_2 = j_1[1]
            
            if (*(j_2 + 0xd) == 0)
                while (j_1 == *j_2)
                    *arg1 = j_2
                    j_1 = j_2
                    j_2 = j_2[1]
                    
                    if (*(j_2 + 0xd) != 0)
                        break
            
            if (*(j_1 + 0xd) == 0)
                j_1 = j_2
                *arg1 = j_2
        else
            j_1 = j_4
            j_2 = j_1[2]
            
            while (*(j_2 + 0xd) == 0)
                j_1 = j_2
                j_2 = j_1[2]
            
            *arg1 = j_1
    else
        j_1 = j_1[2]
        *arg1 = j_1
    
    i = i_1
    i_1 -= 1
while (i != 1)
