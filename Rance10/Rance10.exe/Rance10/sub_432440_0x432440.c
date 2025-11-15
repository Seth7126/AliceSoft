// 函数: sub_432440
// 地址: 0x432440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = arg2
bool cond:0 = i s>= 0

if (i s> 0)
    int32_t* j = *arg1
    
    do
        if (*(j + 0xd) == 0)
            int32_t* j_2 = j[2]
            int32_t* j_1
            
            if (*(j_2 + 0xd) != 0)
                j_1 = j[1]
                
                if (*(j_1 + 0xd) == 0)
                    while (j == j_1[2])
                        *arg1 = j_1
                        j = j_1
                        j_1 = j_1[1]
                        
                        if (*(j_1 + 0xd) != 0)
                            break
                
                j = j_1
                *arg1 = j_1
            else
                j = j_2
                j_1 = *j
                
                while (*(j_1 + 0xd) == 0)
                    j = j_1
                    j_1 = *j
                
                *arg1 = j
        
        i -= 1
        cond:0 = i s>= 0
    while (i s> 0)

if (cond:0)
    return 

int32_t i_2 = neg.d(i)
int32_t i_1

do
    sub_429da0(arg1)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
