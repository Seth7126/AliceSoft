// 函数: sub_61f1a0
// 地址: 0x61f1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = *arg2
int32_t edi = arg3

if (result s< arg4)
    arg3.b = result[edi]
    
    if (arg3.b == 0x2b || arg3.b == 0x2d)
        *arg2 = &result[1]
    
    result = *arg2
    
    if (result s< arg4)
        arg3.b = result[edi]
        
        if (arg3.b == 0x2a)
            result = &result[1]
            *arg2 = result
        else if (arg3.b != 0x30 || result[edi + 1] != 0x2a)
            do
                char* ecx = *arg2
                result.b = ecx[edi]
                result.b -= 0x30
                
                if (result.b u> 9)
                    break
                
                result = &ecx[1]
                *arg2 = result
            while (result s< arg4)
        else
            result = &result[2]
            *arg2 = result
        
        char* ecx_1 = *arg2
        
        if (ecx_1 s< arg4 && ecx_1[edi] == 0x2e)
            char* ecx_2 = &ecx_1[1]
            *arg2 = ecx_2
            
            if (ecx_2 s< arg4)
                if (ecx_2[edi] == 0x2a)
                    *arg2 = &ecx_2[1]
                    return &ecx_2[1]
                
                do
                    result.b = ecx_2[edi]
                    result.b -= 0x30
                    
                    if (result.b u> 9)
                        break
                    
                    ecx_2 = &ecx_2[1]
                    *arg2 = ecx_2
                while (ecx_2 s< arg4)

return result
