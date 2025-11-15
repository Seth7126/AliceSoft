// 函数: sub_405320
// 地址: 0x405320
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg2[4]
char* result = arg1
int32_t var_4 = 0
int32_t esi = 0
char* result_1 = result

if (ebp s> 0)
    int32_t ebx_1 = arg2[5]
    
    do
        char* eax_1
        
        if (ebx_1 u< 0x10)
            eax_1 = arg2
        else
            eax_1 = *arg2
        
        eax_1.b = eax_1[esi]
        int32_t eax_2
        
        if (eax_1.b u< 0x81 || eax_1.b u> 0x9f)
            eax_1.b += 0x20
            
            if (eax_1.b u> 0xf)
                int32_t* eax_3
                
                if (ebx_1 u< 0x10)
                    eax_3 = arg2
                else
                    eax_3 = *arg2
                
                eax_2 = 1
                arg1.b = *(eax_3 + esi) == 0x5c
            else
                arg1.b = 0
                eax_2 = 2
        else
            arg1.b = 0
            eax_2 = 2
        
        esi += eax_2
    while (esi s< ebp)
    
    if (arg1.b != 0)
        sub_405480(arg2, result, 0, ebp - 1)
        return result

*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
sub_403590(result, arg2, 0, 0xffffffff)
return result
