// 函数: sub_470c60
// 地址: 0x470c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = 0
int32_t esi = 0
int32_t edi = arg1[5]
int32_t ebp = arg1[4]
int32_t* result

if (edi u< 0x10)
    result = arg1
else
    result = *arg1

if (*result == 0x2b)
    esi = 1
else
    if (edi u< 0x10)
        result = arg1
    else
        result = *arg1
    
    if (*result == 0x2d)
        esi = 1

bool cond:0 = ebp != esi

if (ebp s> esi)
    do
        char* eax
        
        if (edi u< 0x10)
            eax = arg1
        else
            eax = *arg1
        
        char* eax_1
        
        if (eax[esi] s>= 0x30)
            if (edi u< 0x10)
                eax_1 = arg1
            else
                eax_1 = *arg1
        
        if (eax[esi] s< 0x30 || eax_1[esi] s> 0x39)
            if (edi u< 0x10)
                result = arg1
            else
                result = *arg1
            
            if (*(result + esi) != 0x2e)
                break
        
        if (edi u< 0x10)
            result = arg1
        else
            result = *arg1
        
        result.b = *(result + esi)
        int32_t ecx = ebx + 1
        esi += 1
        
        if (result.b != 0x2e)
            ecx = ebx
        
        ebx = ecx
    while (esi s< ebp)
    
    cond:0 = ebp != esi

if (not(cond:0) && ebx == 1)
    result.b = ebx.b
    return result

result.b = 0
return result
