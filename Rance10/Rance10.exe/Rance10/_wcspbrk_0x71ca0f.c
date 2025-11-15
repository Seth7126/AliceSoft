// 函数: _wcspbrk
// 地址: 0x71ca0f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* result = arg1
int32_t edi
int32_t var_10 = edi

if (*result != 0)
    int16_t i_1 = *arg2
    
    do
        int16_t* ecx_1 = arg2
        
        if (i_1 != 0)
            int16_t i = i_1
            
            do
                if (i == *result)
                    return result
                
                ecx_1 = &ecx_1[1]
                i = *ecx_1
            while (i != 0)
        
        result = &result[1]
    while (*result != 0)

return nullptr
