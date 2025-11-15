// 函数: sub_6a7650
// 地址: 0x6a7650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg3 + 0x11c)
char* result = nullptr

for (int32_t i = 0x18; i s>= 0; )
    uint8_t edx_1 = (ebx u>> i.b).b
    i -= 8
    uint32_t edx_2 = zx.d(edx_1)
    
    if (edx_2 - 0x41 u> 0x39 || (edx_2 s> 0x5a && edx_2 s< 0x61))
        result[arg2] = 0x5b
        result[arg2 + 1] = (*"0123456789ABCDEF0123456789ABCDEF")[edx_2 s>> 4 & 0xf]
        result[arg2 + 2] = (*"0123456789ABCDEF0123456789ABCDEF")[edx_2 & 0xf]
        result = &result[3]
        result[arg2] = 0x5d
    else
        result[arg2] = edx_2.b
    
    result = &result[1]

if (arg4 != 0)
    char* ecx_7 = nullptr
    *(result + arg2) = 0x203a
    result = &result[2]
    
    while (true)
        ebx.b = ecx_7[arg4]
        
        if (ebx.b == 0)
            break
        
        result[arg2] = ebx.b
        ebx.b = ecx_7[arg4 + 1]
        
        if (ebx.b == 0)
            result = &result[1]
            break
        
        result[arg2 + 1] = ebx.b
        ebx.b = ecx_7[arg4 + 2]
        
        if (ebx.b == 0)
            result[2 + arg2] = 0
            return &result[2]
        
        result[arg2 + 2] = ebx.b
        ebx.b = ecx_7[arg4 + 3]
        
        if (ebx.b == 0)
            result[3 + arg2] = 0
            return &result[3]
        
        result[arg2 + 3] = ebx.b
        ebx.b = ecx_7[arg4 + 4]
        
        if (ebx.b == 0)
            result[4 + arg2] = 0
            return &result[4]
        
        result[arg2 + 4] = ebx.b
        ecx_7 = &ecx_7[5]
        result = &result[5]
        
        if (ecx_7 s>= 0xc3)
            result[arg2] = 0
            return result

result[arg2] = 0
return result
