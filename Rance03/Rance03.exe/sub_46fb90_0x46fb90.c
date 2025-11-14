// 函数: sub_46fb90
// 地址: 0x46fb90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = *(arg1 + 0x10)
int32_t* i = *eax

if (i != eax)
    do
        void* ecx_1 = i[0xa]
        
        if (ecx_1 != 0 && (*(**(ecx_1 + 4) + 0x18))().b != 0)
            goto label_46fc42
        
        if (*(i + 0xd) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0xd) != 0)
                int32_t* i_4 = i[1]
                
                if (*(i_4 + 0xd) == 0)
                    while (i == i_4[2])
                        i = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0xd) != 0)
                            break
                
                i = i_4
            else
                i = i_2
                int32_t* i_3 = *i
                
                while (*(i_3 + 0xd) == 0)
                    i = i_3
                    i_3 = *i
    while (i != *(arg1 + 0x10))

int32_t* result = *(arg1 + 0x18)
int32_t* i_1 = *result

if (i_1 == result)
label_46fc68:
    result.b = 0
    return result

while (true)
    void* ecx_3 = i_1[5]
    
    if (ecx_3 != 0 && (*(**(ecx_3 + 4) + 0x18))().b != 0)
        break
    
    if (*(i_1 + 0xd) == 0)
        int32_t* i_5 = i_1[2]
        
        if (*(i_5 + 0xd) != 0)
            result = i_1[1]
            
            if (*(result + 0xd) == 0)
                while (i_1 == result[2])
                    i_1 = result
                    result = result[1]
                    
                    if (*(result + 0xd) != 0)
                        break
            
            i_1 = result
        else
            i_1 = i_5
            result = *i_1
            
            while (*(result + 0xd) == 0)
                i_1 = result
                result = *i_1
    
    if (i_1 == *(arg1 + 0x18))
        goto label_46fc68

label_46fc42:
result.b = 1
return result
