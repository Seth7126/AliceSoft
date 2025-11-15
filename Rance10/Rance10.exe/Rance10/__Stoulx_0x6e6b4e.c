// 函数: __Stoulx
// 地址: 0x6e6b4e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = 0

if (arg4 != 0)
    *arg4 = 0

char* esi = arg1
uint32_t eax_2 = zx.d(*arg1)

while (_isspace(eax_2) != 0)
    esi = &esi[1]
    eax_2 = zx.d(*esi)

int32_t eax_3
eax_3.b = *esi
char var_5 = eax_3.b

if (eax_3.b == 0x2d || eax_3.b == 0x2b)
    esi = &esi[1]
else
    var_5 = 0x2b

void* const edi = arg3

if (edi s>= 0 && edi != 1 && edi s<= 0x24)
    if (edi s<= 0)
        if (*esi == 0x30)
            eax_3.b = esi[1]
            
            if (eax_3.b == 0x78 || eax_3.b == 0x58)
                edi = 0x10
                esi = &esi[2]
            else
                edi = 8
        else
            edi = 0xa
    else if (edi == 0x10 && *esi == 0x30)
        eax_3.b = esi[1]
        
        if (eax_3.b == 0x78 || eax_3.b == 0x58)
            esi = &esi[2]
    
    char* var_10_1 = esi
    
    while (*esi == 0x30)
        esi = &esi[1]
    
    char* var_14_1 = esi
    int32_t result_1 = 0
    char var_6
    
    while (true)
        void* eax_6 = _memchr("0123456789abcdefghijklmnopqrstuvwxyz", _tolower(sx.d(*esi)), edi)
        
        if (eax_6 == 0)
            break
        
        result_1 = result
        eax_6.b -= 0x4c
        var_6 = eax_6.b
        result = result * edi + sx.d(eax_6.b)
        esi = &esi[1]
    
    if (var_10_1 != esi)
        int32_t ecx_4 = esi - sx.d(*(edi + 0x750574))
        int32_t ecx_7
        
        if (ecx_4 - var_14_1 s>= 0 && ecx_4 - var_14_1 s<= 0)
            ecx_7 = result - sx.d(var_6)
        
        int32_t* eax_8
        
        if (ecx_4 - var_14_1 s>= 0 &&
                (ecx_4 - var_14_1 s> 0 || result u< ecx_7 || divu.dp.d(0:ecx_7, edi) != result_1))
            *__errno() = 0x22
            
            if (arg4 != 0)
                *arg4 = 1
            
            result = 0xffffffff
            eax_8.b = 0x2b
        else
            eax_8.b = var_5
        
        if (eax_8.b == 0x2d)
            result = neg.d(result)
        
        if (arg2 != 0)
            *arg2 = esi
        
        return result

if (arg2 != 0)
    *arg2 = arg1

return 0
