// 函数: sub_6500f0
// 地址: 0x6500f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char var_24[0x10]
int32_t eax_1 = __security_cookie ^ &var_24
int32_t i = 0
bool cond:0 = false
char var_14[0x10]

do
    if (cond:0)
        ___report_rangecheckfailure()
        noreturn
    
    var_14[i] = 0
    var_24[i] = 0
    i += 1
    cond:0 = i u>= 0x10
while (i s< 0x10)

int32_t i_4 = arg1[0x45]

if (i_4 s> 0)
    int32_t ebx_1 = arg1[0x57]
    void* ecx = &arg1[0x46]
    int32_t ebp_1 = arg1[0x58]
    int32_t i_1
    
    do
        void* edi_1 = *ecx
        
        if (ebx_1 == 0 && arg1[0x59] == ebx_1)
            var_24[*(edi_1 + 0x14)] = 1
        
        if (ebp_1 != 0)
            var_14[*(edi_1 + 0x18)] = 1
        
        ecx += 4
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int32_t edi_2 = 0
int32_t result

for (int32_t i_2 = 0; i_2 s< 0x10; )
    result = sx.d(var_24[i_2])
    int32_t ecx_1 = sx.d(var_14[i_2])
    i_2 += 1
    edi_2 = edi_2 + result + ecx_1

if (edi_2 != 0)
    int32_t* ecx_2 = arg1[6]
    **ecx_2 = 0xff
    *ecx_2 += 1
    int32_t temp0_1 = ecx_2[1]
    ecx_2[1] -= 1
    
    if (temp0_1 == 1 && ecx_2[3](arg1) == 0)
        *(*arg1 + 0x14) = 0x19
        (**arg1)(arg1)
    
    int32_t* ecx_3 = arg1[6]
    **ecx_3 = 0xcc
    *ecx_3 += 1
    int32_t temp2_1 = ecx_3[1]
    ecx_3[1] -= 1
    
    if (temp2_1 == 1 && ecx_3[3](arg1) == 0)
        *(*arg1 + 0x14) = 0x19
        (**arg1)(arg1)
    
    int32_t* edx = arg1[6]
    **edx = (((edi_2 << 1) + 2) s>> 8).b
    *edx += 1
    int32_t temp3_1 = edx[1]
    edx[1] -= 1
    
    if (temp3_1 == 1 && edx[3](arg1) == 0)
        *(*arg1 + 0x14) = 0x19
        (**arg1)(arg1)
    
    int32_t* ecx_6 = arg1[6]
    result = *ecx_6
    *result = ((edi_2 << 1) + 2).b
    *ecx_6 += 1
    int32_t temp4_1 = ecx_6[1]
    ecx_6[1] -= 1
    
    if (temp4_1 == 1)
        result = ecx_6[3](arg1)
        
        if (result.b == 0)
            *(*arg1 + 0x14) = 0x19
            result = (**arg1)(arg1)
    
    for (int32_t i_3 = 0; i_3 s< 0x10; i_3 += 1)
        if (var_24[i_3] != 0)
            int32_t* ecx_7 = arg1[6]
            **ecx_7 = i_3.b
            *ecx_7 += 1
            int32_t temp5_1 = ecx_7[1]
            ecx_7[1] -= 1
            
            if (temp5_1 == 1)
                char eax_28
                eax_28, ecx_7 = ecx_7[3](arg1)
                
                if (eax_28 == 0)
                    *(*arg1 + 0x14) = 0x19
                    (**arg1)(arg1)
            
            int32_t* edx_1 = arg1[6]
            ecx_7.b = *(arg1 + i_3 + 0xa8)
            ecx_7.b <<= 4
            ecx_7.b += *(arg1 + i_3 + 0x98)
            result = *edx_1
            *result = ecx_7.b
            *edx_1 += 1
            int32_t temp7_1 = edx_1[1]
            edx_1[1] -= 1
            
            if (temp7_1 == 1)
                result = edx_1[3](arg1)
                
                if (result.b == 0)
                    *(*arg1 + 0x14) = 0x19
                    result = (**arg1)(arg1)
        
        if (var_14[i_3] != 0)
            int32_t* edx_2 = arg1[6]
            **edx_2 = i_3.b + 0x10
            *edx_2 += 1
            int32_t temp6_1 = edx_2[1]
            edx_2[1] -= 1
            
            if (temp6_1 == 1 && edx_2[3](arg1).b == 0)
                *(*arg1 + 0x14) = 0x19
                (**arg1)(arg1)
            
            char** edx_3 = arg1[6]
            result.b = *(arg1 + i_3 + 0xb8)
            **edx_3 = result.b
            *edx_3 = &(*edx_3)[1]
            int32_t temp8_1 = edx_3[1]
            edx_3[1] = &edx_3[1][0xffffffff]
            
            if (temp8_1 == 1)
                result = edx_3[3](arg1)
                
                if (result.b == 0)
                    *(*arg1 + 0x14) = 0x19
                    result = (**arg1)(arg1)

@__security_check_cookie@4(eax_1 ^ &var_24)
return result
