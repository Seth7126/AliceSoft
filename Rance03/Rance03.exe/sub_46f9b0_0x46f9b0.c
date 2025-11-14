// 函数: sub_46f9b0
// 地址: 0x46f9b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg1
int32_t ebp = arg2
int32_t* eax = *(ebx + 0x10)
int32_t* i = *eax

if (i != eax)
    do
        void* ecx = i[0xa]
        
        if (ecx == 0)
        label_46fa59:
            
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
        else
            if ((*(**(ecx + 4) + 0x18))() != 0)
                goto label_46fa59
            
            int32_t* eax_4 = i[0xa]
            
            if (eax_4 == ebp)
                goto label_46fa59
            
            ebx, i = sub_4731a0(*(ebx + 4), eax_4)
            int32_t* i_2 = i
            
            if (*(i + 0xd) != 0)
                sub_417fb0(ebx + 0x10, &arg2, i_2)
            else
                int32_t* i_8 = i[2]
                
                if (*(i_8 + 0xd) != 0)
                    int32_t* i_10 = i[1]
                    
                    if (*(i_10 + 0xd) == 0)
                        while (i == i_10[2])
                            i = i_10
                            i_10 = i_10[1]
                            
                            if (*(i_10 + 0xd) != 0)
                                break
                    
                    i = i_10
                    sub_417fb0(ebx + 0x10, &arg2, i_2)
                else
                    i = i_8
                    int32_t* i_9 = *i
                    
                    if (*(i_9 + 0xd) != 0)
                        sub_417fb0(ebx + 0x10, &arg2, i_2)
                    else
                        do
                            i = i_9
                            i_9 = *i
                        while (*(i_9 + 0xd) == 0)
                        
                        sub_417fb0(ebx + 0x10, &arg2, i_2)
    while (i != *(ebx + 0x10))

int32_t* result = *(ebx + 0x18)
int32_t* i_1 = *result

if (i_1 != result)
    do
        void* ecx_5 = i_1[5]
        
        if (ecx_5 == 0)
        label_46fb39:
            
            if (*(i_1 + 0xd) == 0)
                int32_t* i_7 = i_1[2]
                
                if (*(i_7 + 0xd) != 0)
                    result = i_1[1]
                    
                    if (*(result + 0xd) == 0)
                        while (i_1 == result[2])
                            i_1 = result
                            result = result[1]
                            
                            if (*(result + 0xd) != 0)
                                break
                    
                    i_1 = result
                else
                    i_1 = i_7
                    result = *i_1
                    
                    while (*(result + 0xd) == 0)
                        i_1 = result
                        result = *i_1
        else
            result = (*(**(ecx_5 + 4) + 0x18))()
            
            if (result.b != 0)
                goto label_46fb39
            
            result = i_1[5]
            
            if (result == ebp)
                goto label_46fb39
            
            ebx, i_1 = sub_4731a0(*(ebx + 4), result)
            int32_t* i_6 = i_1
            
            if (*(i_1 + 0xd) != 0)
                result = sub_420180(ebx + 0x18, &arg2, i_6)
            else
                int32_t* i_11 = i_1[2]
                
                if (*(i_11 + 0xd) != 0)
                    int32_t* i_13 = i_1[1]
                    
                    if (*(i_13 + 0xd) == 0)
                        while (i_1 == i_13[2])
                            i_1 = i_13
                            i_13 = i_13[1]
                            
                            if (*(i_13 + 0xd) != 0)
                                break
                    
                    i_1 = i_13
                    result = sub_420180(ebx + 0x18, &arg2, i_6)
                else
                    i_1 = i_11
                    int32_t* i_12 = *i_1
                    
                    if (*(i_12 + 0xd) != 0)
                        result = sub_420180(ebx + 0x18, &arg2, i_6)
                    else
                        do
                            i_1 = i_12
                            i_12 = *i_1
                        while (*(i_12 + 0xd) == 0)
                        
                        result = sub_420180(ebx + 0x18, &arg2, i_6)
    while (i_1 != *(ebx + 0x18))

return result
