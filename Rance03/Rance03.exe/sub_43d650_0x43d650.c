// 函数: sub_43d650
// 地址: 0x43d650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg3
int32_t* result = arg3

if (result == arg2)
    return result

int32_t* eax_1 = arg4
int32_t ebp = eax_1[4]

while (true)
    int32_t* edx
    
    if (eax_1[5] u< 0x10)
        edx = eax_1
    else
        edx = *eax_1
    
    int32_t ebx_1 = result[4]
    int32_t* result_1
    
    if (result[5] u< 0x10)
        result_1 = result
    else
        result_1 = *result
    
    int32_t eax_2 = ebp
    
    if (ebx_1 u< ebp)
        eax_2 = ebx_1
    
    if (eax_2 != 0)
        int32_t i_1 = eax_2 - 4
        
        if (eax_2 u>= 4)
            int32_t i
            
            do
                if (*result_1 != *edx)
                    goto label_43d6b6
                
                result_1 = &result_1[1]
                edx = &edx[1]
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        int32_t eax_4
        
        if (i_1 == 0xfffffffc)
            eax_4 = 0
        else
        label_43d6b6:
            arg3.b = *result_1
            char temp1_1 = *edx
            
            if (arg3.b != temp1_1)
                eax_4 = sbb.d(i_1, i_1, arg3.b u< temp1_1) | 1
            else if (i_1 == 0xfffffffd)
                eax_4 = 0
            else
                arg3.b = *(result_1 + 1)
                char temp3_1 = *(edx + 1)
                
                if (arg3.b != temp3_1)
                    eax_4 = sbb.d(i_1, i_1, arg3.b u< temp3_1) | 1
                else if (i_1 == 0xfffffffe)
                    eax_4 = 0
                else
                    arg3.b = *(result_1 + 2)
                    char temp4_1 = *(edx + 2)
                    
                    if (arg3.b != temp4_1)
                        eax_4 = sbb.d(i_1, i_1, arg3.b u< temp4_1) | 1
                    else if (i_1 == 0xffffffff)
                        eax_4 = 0
                    else
                        i_1.b = *(result_1 + 3)
                        char temp5_1 = *(edx + 3)
                        
                        if (i_1.b == temp5_1)
                            eax_4 = 0
                        else
                            eax_4 = sbb.d(i_1, i_1, i_1.b u< temp5_1) | 1
        
        if (eax_4 == 0 && ebx_1 u>= ebp)
            goto label_43d6f8
    else if (ebx_1 u>= ebp)
    label_43d6f8:
        int32_t eax_5
        eax_5.b = ebx_1 != ebp
        
        if (eax_5 == 0)
            return result
    
    result = &result[6]
    
    if (result == arg2)
        return result
    
    eax_1 = arg4
