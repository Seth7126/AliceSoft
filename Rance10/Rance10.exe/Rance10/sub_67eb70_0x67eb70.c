// 函数: sub_67eb70
// 地址: 0x67eb70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_20
void* result = __security_cookie ^ &var_20
void* result_2 = result
int32_t ebx
int32_t var_24 = ebx
void* edi = *(arg1 + 0x14)

if (edi != 3)
label_67ebd2:
    void* edx_2 = nullptr
    
    if (edi s> 0)
        int32_t esi_1 = *(arg1 + 0x18)
        
        do
            char* eax_1
            
            if (esi_1 u< 0x10)
                eax_1 = arg1 + 4
            else
                eax_1 = *(arg1 + 4)
            
            eax_1.b = *(eax_1 + edx_2)
            
            if (eax_1.b u< 0x81 || eax_1.b u> 0x9f)
                eax_1.b += 0x20
                
                if (eax_1.b u> 0xf)
                    void* eax_2
                    
                    if (esi_1 u< 0x10)
                        eax_2 = arg1 + 4
                    else
                        eax_2 = *(arg1 + 4)
                    
                    result = 1
                    ebx.b = *(eax_2 + edx_2) == 0x5c
                else
                    ebx.b = 0
                    result = 2
            else
                ebx.b = 0
                result = 2
            
            edx_2 += result
        while (edx_2 s< edi)
        
        if (ebx.b != 0)
            sub_405480(arg1 + 4, &var_20, 0, edi - 1)
            void* result_1
            result = result_1
            
            if (result u>= 0x10)
                result = sub_403160(var_20, result + 1, 1)
else
    int32_t edx_1 = *(arg1 + 0x18)
    result = arg1 + 4
    char* result_3
    
    if (edx_1 u< 0x10)
        result_3 = result
    else
        result_3 = *result
    
    result_3.b = *result_3
    
    if (result_3.b u< 0x61 || result_3.b u> 0x7a)
        result_3.b -= 0x41
        
        if (result_3.b u> 0x19)
            goto label_67ebd2
    
    void* result_4
    
    if (edx_1 u< 0x10)
        result_4 = result
    else
        result_4 = *result
    
    if (*(result_4 + 1) != 0x3a)
        goto label_67ebd2
    
    if (edx_1 u>= 0x10)
        result = *result
    
    if (*(result + 2) != 0x5c)
        goto label_67ebd2

@__security_check_cookie@4(result_2 ^ &var_20)
return result
