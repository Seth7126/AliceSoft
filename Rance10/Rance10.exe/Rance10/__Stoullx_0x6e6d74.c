// 函数: __Stoullx
// 地址: 0x6e6d74
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg4 != 0)
    *arg4 = 0

char* esi = arg1
uint32_t eax_1 = zx.d(*arg1)

while (_isspace(eax_1) != 0)
    esi = &esi[1]
    eax_1 = zx.d(*esi)

int32_t eax_2
eax_2.b = *esi
char var_6 = eax_2.b

if (eax_2.b == 0x2d || eax_2.b == 0x2b)
    esi = &esi[1]
else
    var_6 = 0x2b

void* const edi = arg3
int32_t result

if (edi s>= 0 && edi != 1 && edi s<= 0x24)
    if (edi s<= 0)
        if (*esi == 0x30)
            eax_2.b = esi[1]
            
            if (eax_2.b == 0x78 || eax_2.b == 0x58)
                edi = 0x10
                esi = &esi[2]
            else
                edi = 8
        else
            edi = 0xa
    else if (edi == 0x10 && *esi == 0x30)
        eax_2.b = esi[1]
        
        if (eax_2.b == 0x78 || eax_2.b == 0x58)
            esi = &esi[2]
    
    char* var_24_1 = esi
    
    while (*esi == 0x30)
        esi = &esi[1]
    
    char* var_28_1 = esi
    int32_t result_1 = 0
    int32_t ebx_1 = 0
    int32_t result_2 = 0
    int32_t var_18_1 = 0
    char var_5_1 = 0
    char const* const var_10_1 = "0123456789abcdefghijklmnopqrstuvwxyz"
    void* i = _memchr("0123456789abcdefghijklmnopqrstuvwxyz", _tolower(sx.d(*esi)), edi)
    
    if (i != 0)
        int32_t eax_7
        int32_t edx_1
        edx_1:eax_7 = sx.q(edi)
        int32_t var_20_1 = edx_1
        
        do
            i.b -= 0x9c
            result_2 = result_1
            var_18_1 = ebx_1
            var_5_1 = i.b
            int32_t eax_9
            int32_t edx_2
            eax_9, edx_2 = __allmul(eax_7, edx_1, result_1, ebx_1)
            int32_t eax_11
            int32_t edx_3
            edx_3:eax_11 = sx.q(var_5_1)
            ebx_1 = adc.d(edx_2, edx_3, eax_9 + eax_11 u< eax_9)
            result_1 = eax_9 + eax_11
            esi = &esi[1]
            edx_1 = var_20_1
            i = _memchr("0123456789abcdefghijklmnopqrstuvwxyz", _tolower(sx.d(*esi)), edi)
        while (i != 0)
    
    if (var_24_1 != esi)
        void* ecx_8 = esi - sx.d(*(edi + 0x7505c4))
        void* ecx_9
        
        if (ecx_8 - var_28_1 s< 0)
            ecx_9.b = var_6
            result = result_1
        else if (ecx_8 - var_28_1 s> 0)
        label_6e6f0b:
            int32_t* eax_24
            eax_24, ecx_9 = __errno()
            *eax_24 = 0x22
            
            if (arg4 != 0)
                *arg4 = 1
            
            result = 0xffffffff
            ecx_9.b = 0x2b
        else
            int32_t eax_18
            int32_t edx_4
            edx_4:eax_18 = sx.q(var_5_1)
            int32_t var_10_3 = result_1 - eax_18
            uint32_t eax_20 = sbb.d(ebx_1, edx_4, result_1 u< eax_18)
            
            if (ebx_1 u< eax_20 || (ebx_1 u<= eax_20 && result_1 u< var_10_3))
                goto label_6e6f0b
            
            int32_t eax_22
            uint32_t edx_5
            edx_5:eax_22 = sx.q(edi)
            uint32_t eax_23
            int32_t edx_6
            eax_23, ecx_9, edx_6 = __aulldiv(var_10_3, eax_20, eax_22, edx_5)
            
            if (eax_23 != result_2 || edx_6 != var_18_1)
                goto label_6e6f0b
            
            ecx_9.b = var_6
            result = result_1
        
        if (ecx_9.b == 0x2d)
            result = neg.d(result)
        
        if (arg2 != 0)
            *arg2 = esi
    else
        if (arg2 != 0)
            *arg2 = arg1
        
        result = 0
else if (arg2 == 0)
    result = 0
else
    *arg2 = arg1
    result = 0

return result
