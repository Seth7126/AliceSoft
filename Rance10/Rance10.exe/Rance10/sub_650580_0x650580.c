// 函数: sub_650580
// 地址: 0x650580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char edx
sub_64fd30(arg1, edx)
int32_t eax = arg1[0x13]
sub_64fda0(arg1, eax + ((eax + 4) << 1))

if (arg1[0x11] s> 0xffff || arg1[0x10] s> 0xffff)
    *(*arg1 + 0x14) = 0x2a
    *(*arg1 + 0x18) = 0xffff
    (**arg1)(arg1)

int32_t* edx_3 = arg1[6]
**edx_3 = arg1[0x12].b
*edx_3 += 1
int32_t temp0 = edx_3[1]
edx_3[1] -= 1

if (temp0 == 1 && edx_3[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

sub_64fda0(arg1, arg1[0x11])
sub_64fda0(arg1, arg1[0x10])
int32_t* edx_6 = arg1[6]
char* result
result.b = arg1[0x13].b
**edx_6 = result.b
*edx_6 += 1
int32_t temp1 = edx_6[1]
edx_6[1] -= 1

if (temp1 == 1)
    result = edx_6[3](arg1)
    
    if (result.b == 0)
        *(*arg1 + 0x14) = 0x19
        result = (**arg1)(arg1)

char* edi = arg1[0x15]
int32_t i = 0

if (arg1[0x13] s> 0)
    do
        int32_t* edx_7 = arg1[6]
        result.b = *edi
        **edx_7 = result.b
        *edx_7 += 1
        int32_t temp2_1 = edx_7[1]
        edx_7[1] -= 1
        char* ecx_5
        
        if (temp2_1 == 1)
            char eax_16
            eax_16, ecx_5 = edx_7[3](arg1)
            
            if (eax_16 == 0)
                *(*arg1 + 0x14) = 0x19
                (**arg1)(arg1)
        
        char** edx_8 = arg1[6]
        ecx_5.b = edi[8]
        ecx_5.b <<= 4
        ecx_5.b += edi[0xc]
        **edx_8 = ecx_5.b
        *edx_8 = &(*edx_8)[1]
        int32_t temp3_1 = edx_8[1]
        edx_8[1] = &edx_8[1][0xffffffff]
        
        if (temp3_1 == 1 && edx_8[3](arg1).b == 0)
            *(*arg1 + 0x14) = 0x19
            (**arg1)(arg1)
        
        char** edx_9 = arg1[6]
        result.b = edi[0x10]
        **edx_9 = result.b
        *edx_9 = &(*edx_9)[1]
        int32_t temp4_1 = edx_9[1]
        edx_9[1] = &edx_9[1][0xffffffff]
        
        if (temp4_1 == 1)
            result = edx_9[3](arg1)
            
            if (result.b == 0)
                *(*arg1 + 0x14) = 0x19
                result = (**arg1)(arg1)
        
        i += 1
        edi = &edi[0x58]
    while (i s< arg1[0x13])

return result
