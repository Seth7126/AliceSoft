// 函数: sub_41b590
// 地址: 0x41b590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x30) - *(arg1 + 0x2c) s> 0)
    sub_403540(arg1 + 0x38, *(arg1 + 0x30) - *(arg1 + 0x2c))
    int32_t* eax_5 = *(arg1 + 0x2c)
    int32_t* ecx_1
    
    if (eax_5 != *(arg1 + 0x30))
        ecx_1 = eax_5
    else
        ecx_1 = nullptr
    
    sub_69d850(*(arg1 + 0x38), ecx_1, *(arg1 + 0x30) - *(arg1 + 0x2c))
else
    *(arg1 + 0x3c) = *(arg1 + 0x38)

*(arg1 + 0x10) = 0
void* result = *(arg1 + 0x2c)
char* result_1

if (result != *(arg1 + 0x30))
    result_1 = result
else
    result_1 = nullptr

void* ebp_1 = *(arg1 + 0x30) - result
char* result_2 = result_1
void* ebp_2 = ebp_1 + result_1

if (result_1 u< ebp_2)
    void* ebx_1 = arg1
    
    do
        int32_t eax_8 = *(arg1 + 8)
        char** ecx_2 = &result_2
        char* result_3 = result_1
        char* result_4 = result_3
        
        if (&result_2 u< eax_8)
            ecx_2 = *(arg1 + 4)
            result_3 = result_1
        
        if (&result_2 u>= eax_8 || ecx_2 u> &result_2)
            if (eax_8 == *(arg1 + 0xc))
                char** var_20_3 = ecx_2
                sub_412f20(arg1 + 4)
                result_3 = result_4
            
            eax_8 = *(arg1 + 8)
            
            if (eax_8 != 0)
                *eax_8 = result_1
        else
            if (eax_8 == *(arg1 + 0xc))
                char** var_20_2 = ecx_2
                sub_412f20(arg1 + 4)
                result_3 = result_1
            
            int32_t* ecx_4 = *(arg1 + 8)
            
            if (ecx_4 != 0)
                *ecx_4 = *(*(arg1 + 4) + ((&result_2 - ecx_2) s>> 2 << 2))
            
            ebx_1 = arg1
        
        *(arg1 + 8) += 4
        
        while (result_1 u< ebp_2)
            eax_8.b = *result_1
            
            if ((eax_8.b u< 0x81 || eax_8.b u> 0x9f) && (eax_8.b u< 0xe0 || eax_8.b u> 0xef))
                if (eax_8.b == 0xd)
                    *result_1 = 0
                else if (eax_8.b == 0xa)
                    *result_1 = 0
                    result_1 = &result_1[1]
                    result_2 = result_1
                    break
                
                result_1 = &result_1[1]
            else
                result_1 = &result_1[2]
            
            result_2 = result_1
        
        result = sub_41b370(result_3)
        
        if (result s> *(ebx_1 + 0x10))
            *(ebx_1 + 0x10) = result
    while (result_1 u< ebp_2)

result.b = 1
return result
