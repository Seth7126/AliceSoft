// 函数: sub_430fc0
// 地址: 0x430fc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 != arg1)
    sub_403590(arg2, arg1, 0, 0xffffffff)

int32_t edi = *(arg2 + 0x10)
int32_t result = 0

if (edi != 0)
    do
        int32_t edx_1 = *(arg2 + 0x14)
        char* ecx_2
        
        if (edx_1 u< 0x10)
            ecx_2 = arg2
        else
            ecx_2 = *arg2
        
        ecx_2.b = ecx_2[result]
        
        if (ecx_2.b u< 0x81 || ecx_2.b u> 0x9f)
            ecx_2.b += 0x20
            
            if (ecx_2.b u> 0xf)
                char* ecx_3
                
                if (edx_1 u< 0x10)
                    ecx_3 = arg2
                else
                    ecx_3 = *arg2
                
                if (ecx_3[result] == 0x2f)
                    char* ecx_4
                    
                    if (edx_1 u< 0x10)
                        ecx_4 = arg2
                    else
                        ecx_4 = *arg2
                    
                    ecx_4[result] = 0x5c
            else
                result += 1
        else
            result += 1
        
        result += 1
    while (result u< edi)

return result
