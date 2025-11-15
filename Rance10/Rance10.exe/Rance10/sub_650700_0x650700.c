// 函数: sub_650700
// 地址: 0x650700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_64fd30(arg1, 0xda)
sub_64fda0(arg1, (arg1[0x45] << 1) + 6)
int32_t* edx_1 = arg1[6]
char* eax_1
eax_1.b = arg1[0x45].b
**edx_1 = eax_1.b
*edx_1 += 1
int32_t temp0 = edx_1[1]
edx_1[1] -= 1

if (temp0 == 1 && edx_1[3](arg1).b == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t i = 0

if (arg1[0x45] s> 0)
    void* ebp_1 = &arg1[0x46]
    
    do
        int32_t* edx_2 = arg1[6]
        char* edi_1 = *ebp_1
        eax_1.b = *edi_1
        **edx_2 = eax_1.b
        *edx_2 += 1
        int32_t temp3_1 = edx_2[1]
        edx_2[1] -= 1
        
        if (temp3_1 == 1 && edx_2[3](arg1) == 0)
            *(*arg1 + 0x14) = 0x19
            (**arg1)(arg1)
        
        char ecx_3
        
        if (arg1[0x57] != 0 || arg1[0x59] != 0)
            ecx_3 = 0
        else
            ecx_3 = (*(edi_1 + 0x14)).b
        
        char eax_11
        
        if (arg1[0x58] == 0)
            eax_11 = 0
        else
            eax_11 = (*(edi_1 + 0x18)).b
        
        char** edx_3 = arg1[6]
        **edx_3 = (ecx_3 << 4) + eax_11
        *edx_3 = &(*edx_3)[1]
        int32_t temp5_1 = edx_3[1]
        edx_3[1] = &edx_3[1][0xffffffff]
        
        if (temp5_1 == 1 && edx_3[3](arg1).b == 0)
            *(*arg1 + 0x14) = 0x19
            (**arg1)(arg1)
        
        i += 1
        ebp_1 += 4
    while (i s< arg1[0x45])

int32_t* edx_4 = arg1[6]
eax_1.b = arg1[0x57].b
**edx_4 = eax_1.b
*edx_4 += 1
int32_t temp1 = edx_4[1]
edx_4[1] -= 1

if (temp1 == 1 && edx_4[3](arg1).b == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

char** edx_5 = arg1[6]
eax_1.b = arg1[0x58].b
**edx_5 = eax_1.b
*edx_5 = &(*edx_5)[1]
int32_t temp2 = edx_5[1]
edx_5[1] = &edx_5[1][0xffffffff]
char* ecx_5

if (temp2 == 1)
    char eax_21
    eax_21, ecx_5 = edx_5[3](arg1)
    
    if (eax_21 == 0)
        *(*arg1 + 0x14) = 0x19
        (**arg1)(arg1)

char** edx_6 = arg1[6]
ecx_5.b = arg1[0x59].b
ecx_5.b <<= 4
ecx_5.b += arg1[0x5a].b
char* result = *edx_6
*result = ecx_5.b
*edx_6 = &(*edx_6)[1]
int32_t temp4 = edx_6[1]
edx_6[1] = &edx_6[1][0xffffffff]

if (temp4 == 1)
    result = edx_6[3](arg1)
    
    if (result.b == 0)
        *(*arg1 + 0x14) = 0x19
        return (**arg1)(arg1)

return result
