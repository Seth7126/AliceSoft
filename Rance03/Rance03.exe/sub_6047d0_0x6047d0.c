// 函数: sub_6047d0
// 地址: 0x6047d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_20
int32_t eax_1 = __security_cookie ^ &var_20
void* esi = *(arg1 + 0x14)
char* result

if (esi != 3)
label_604854:
    result = nullptr
    
    if (esi s> 0)
        char* edx_2
        
        do
            char* edx_1
            
            if (*(arg1 + 0x18) u< 0x10)
                edx_1 = arg1 + 4
            else
                edx_1 = *(arg1 + 4)
            
            if (*(edx_1 + result) u>= 0x81)
                if (*(arg1 + 0x18) u< 0x10)
                    edx_2 = arg1 + 4
                else
                    edx_2 = *(arg1 + 4)
            
            if (*(edx_1 + result) u>= 0x81 && *(edx_2 + result) u<= 0x9f)
                result = &result[2]
                edx_2.b = 0
            else
                char* edx_3
                
                if (*(arg1 + 0x18) u< 0x10)
                    edx_3 = arg1 + 4
                else
                    edx_3 = *(arg1 + 4)
                
                if (*(edx_3 + result) u>= 0xe0)
                    if (*(arg1 + 0x18) u< 0x10)
                        edx_2 = arg1 + 4
                    else
                        edx_2 = *(arg1 + 4)
                
                if (*(edx_3 + result) u< 0xe0 || *(edx_2 + result) u> 0xef)
                    if (*(arg1 + 0x18) u< 0x10)
                        edx_2 = arg1 + 4
                    else
                        edx_2 = *(arg1 + 4)
                    
                    edx_2.b = *(edx_2 + result) == 0x5c
                    result = &result[1]
                else
                    result = &result[2]
                    edx_2.b = 0
        while (result s< esi)
        
        if (edx_2.b != 0)
            result = sub_403070(arg1 + 4, &var_20, 0, esi - 1)
            int32_t var_c
            
            if (var_c u>= 0x10)
                result = j__free(var_20)
else
    result = arg1 + 4
    char* result_1
    
    if (*(arg1 + 0x18) u< 0x10)
        result_1 = result
    else
        result_1 = *result
    
    char* result_2
    
    if (*result_1 u>= 0x61)
        if (*(result + 0x14) u< 0x10)
            result_2 = result
        else
            result_2 = *result
    
    if (*result_1 u< 0x61 || *result_2 u> 0x7a)
        char* result_3
        
        if (*(result + 0x14) u< 0x10)
            result_3 = result
        else
            result_3 = *result
        
        if (*result_3 u< 0x41)
            goto label_604854
        
        char* result_4
        
        if (*(result + 0x14) u< 0x10)
            result_4 = result
        else
            result_4 = *result
        
        if (*result_4 u> 0x5a)
            goto label_604854
    
    char* result_5
    
    if (*(result + 0x14) u< 0x10)
        result_5 = result
    else
        result_5 = *result
    
    if (result_5[1] != 0x3a)
        goto label_604854
    
    if (*(result + 0x14) u>= 0x10)
        result = *result
    
    if (result[2] != 0x5c)
        goto label_604854

sub_69a5bc(eax_1 ^ &var_20)
return result
