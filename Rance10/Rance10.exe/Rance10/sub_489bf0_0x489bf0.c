// 函数: sub_489bf0
// 地址: 0x489bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

(*(*arg1 + 0x10))()
int32_t eax_1

if (arg2 == 0)
    eax_1.b = 0
    return eax_1

int32_t i = arg3

if (i == 0)
    eax_1.b = 0
    return eax_1

void* edi = &arg1[0x13]
sub_405950(edi, i)
char* eax_4
void* edx
eax_4, edx = sub_700660(*edi, arg2, *(edi + 4) - *edi)
arg1[0x12] = 0

if (i u>= 4)
    eax_4 = *edi
    
    if (*eax_4 == 0x52 && eax_4[1] == 0x49 && eax_4[2] == 0x46 && eax_4[3] == 0x46)
        arg1[0x12] = 4
        
        if (i u>= 8)
            arg1[0x12] = 8
            
            if (i u>= 0xc)
                eax_4 = *edi
                
                if (eax_4[8] == 0x57 && eax_4[9] == 0x41 && eax_4[0xa] == 0x56
                        && eax_4[0xb] == 0x45)
                    arg1[0x12] = 0xc
                    
                    if (i u>= 0x10)
                        do
                            uint32_t ecx_1 = arg1[0x12]
                            eax_4 = *edi + ecx_1
                            edx.b = *eax_4
                            
                            if (edx.b != 0x66 || eax_4[1] != 0x6d || eax_4[2] != 0x74
                                    || eax_4[3] != 0x20)
                                if (edx.b == 0x64 && eax_4[1] == 0x61 && eax_4[2] == 0x74
                                        && eax_4[3] == 0x61)
                                    arg1[0x12] += 4
                                    int32_t* ecx_11 = arg1[0x12]
                                    arg1[8] = *(ecx_11 + *edi)
                                    arg1[6] = i
                                    arg1[0x12] = &ecx_11[1]
                                    arg1[9] = &ecx_11[1]
                                    void* eax_22
                                    eax_22.b = 1
                                    arg1[7] = 0
                                    return eax_22
                                
                                arg1[0x12] = ecx_1 + 4
                                
                                if (ecx_1 + 8 u> i)
                                    break
                                
                                arg1[0x12] = *(ecx_1 + 4 + *edi) + ecx_1 + 8
                            else
                                arg1[0x12] = ecx_1 + 4
                                
                                if (ecx_1 + 8 u> i)
                                    break
                                
                                eax_4 = *(ecx_1 + 4 + *edi)
                                arg1[0x12] = ecx_1 + 8
                                
                                if (eax_4 != 0x10)
                                    break
                                
                                if (ecx_1 + 0x18 u> i)
                                    break
                                
                                int32_t eax_7 = *edi
                                uint32_t ecx_3 = zx.d(*(ecx_1 + 8 + eax_7))
                                uint32_t edi_1 = zx.d(*(ecx_1 + 8 + eax_7 + 2))
                                int32_t ebx = *(ecx_1 + 8 + eax_7 + 4)
                                int32_t ebp_1 = *(ecx_1 + 8 + eax_7 + 8)
                                int16_t edx_2 = *(ecx_1 + 8 + eax_7 + 0xc)
                                uint32_t eax_8 = zx.d(*(ecx_1 + eax_7 + 0x16))
                                int32_t edx_4 = arg1[0xa]
                                arg1[0x12] = ecx_1 + 0x18
                                (*(edx_4 + 0x20))(ecx_3)
                                (*(arg1[0xa] + 0x24))(edi_1)
                                (*(arg1[0xa] + 0x28))(ebx)
                                (*(arg1[0xa] + 0x2c))(ebp_1)
                                (*(arg1[0xa] + 0x30))(zx.d(edx_2))
                                (*(arg1[0xa] + 0x34))(zx.d(eax_8.w))
                                i = arg3
                                edi = &arg1[0x13]
                        while (arg1[0x12] + 4 u<= i)

eax_4.b = 0
return eax_4
