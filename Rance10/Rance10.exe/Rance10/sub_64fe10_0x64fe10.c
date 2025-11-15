// 函数: sub_64fe10
// 地址: 0x64fe10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg1[arg2 + 0x16]

if (ebp == 0)
    *(*arg1 + 0x14) = 0x36
    *(*arg1 + 0x18) = arg2
    (**arg1)(arg1)

int32_t edx = arg1[0x5d]
int32_t result = 0

if (edx s>= 0)
    int32_t* ecx = arg1[0x5c]
    int32_t i_2 = edx + 1
    int32_t i
    
    do
        int32_t eax_5 = *ecx
        ecx = &ecx[1]
        
        if (*(ebp + (eax_5 << 1)) u> 0xff)
            result = 1
        
        i = i_2
        i_2 -= 1
    while (i != 1)

if (*(ebp + 0x80) == 0)
    sub_64fd30(arg1, 0xdb)
    void* edx_1
    
    if (result == 0)
        edx_1 = arg1[0x5d] + 4
    else
        edx_1 = (arg1[0x5d] << 1) + 5
    
    sub_64fda0(arg1, edx_1)
    char** edx_3 = arg1[6]
    **edx_3 = (result.b << 4) + arg2.b
    *edx_3 = &(*edx_3)[1]
    int32_t temp1_1 = edx_3[1]
    edx_3[1] = &edx_3[1][0xffffffff]
    
    if (temp1_1 == 1 && edx_3[3](arg1) == 0)
        *(*arg1 + 0x14) = 0x19
        (**arg1)(arg1)
    
    int32_t i_1 = 0
    
    if (arg1[0x5d] s>= 0)
        do
            uint32_t eax_15 = zx.d(*(ebp + (*(arg1[0x5c] + (i_1 << 2)) << 1)))
            
            if (result != 0)
                uint8_t** edx_4 = arg1[6]
                **edx_4 = (eax_15 u>> 8).b
                *edx_4 = &(*edx_4)[1]
                int32_t temp3_1 = edx_4[1]
                edx_4[1] = &edx_4[1][0xffffffff]
                
                if (temp3_1 == 1 && edx_4[3](arg1) == 0)
                    *(*arg1 + 0x14) = 0x19
                    (**arg1)(arg1)
            
            int32_t* ecx_6 = arg1[6]
            **ecx_6 = eax_15.b
            *ecx_6 += 1
            int32_t temp2_1 = ecx_6[1]
            ecx_6[1] -= 1
            
            if (temp2_1 == 1 && ecx_6[3](arg1) == 0)
                *(*arg1 + 0x14) = 0x19
                (**arg1)(arg1)
            
            i_1 += 1
        while (i_1 s<= arg1[0x5d])
    
    *(ebp + 0x80) = 1

return result
