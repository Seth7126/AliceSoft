// 函数: sub_522d30
// 地址: 0x522d30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = *(arg1 + 4)
void* ebp = arg1 + 4
int32_t* i = *result
void* var_8 = ebp

if (i != result)
    do
        int32_t ecx = arg2[1]
        int32_t* ebx_1 = *arg2
        int32_t j = (ecx - ebx_1) s>> 2
        
        if (j s> 0)
            do
                int32_t eax_2
                int32_t edx_1
                edx_1:eax_2 = sx.q(j)
                int32_t j_1 = (eax_2 - edx_1) s>> 1
                
                if (ebx_1[j_1] s>= i[4])
                    j = j_1
                else
                    ebx_1 = &ebx_1[j_1 + 1]
                    j += 0xffffffff - j_1
            while (j s> 0)
            
            ebp = var_8
        
        if (ebx_1 != ecx)
            result = i[4]
        
        if (ebx_1 == ecx || result s< *ebx_1)
            int32_t* ecx_1 = i[5]
            
            if (ecx_1 != 0)
                (**ecx_1)(1)
            
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
            
            void var_4
            result = sub_420180(ebp, &var_4, i_2)
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
    while (i != *ebp)

return result
