// 函数: sub_477830
// 地址: 0x477830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
int32_t* var_10 = esi
(*(*esi + 0x10))()
void* ebp = arg2
int32_t eax_1

if (ebp == 0)
    eax_1.b = 0
    return eax_1

int32_t i = arg3

if (i == 0)
    eax_1.b = 0
    return eax_1

void* edi = &esi[0x13]
arg2 = edi
sub_403540(edi, i)
int32_t* eax_4
void* edx
eax_4, edx = sub_69d850(*edi, ebp, *(edi + 4) - *edi)
esi[0x12] = 0

if (i u>= 4)
    eax_4 = *edi
    
    if (*eax_4 == 0x52 && *(eax_4 + 1) == 0x49 && *(eax_4 + 2) == 0x46 && *(eax_4 + 3) == 0x46)
        esi[0x12] = 4
        
        if (i u>= 8)
            esi[0x12] = 8
            
            if (i u>= 0xc && eax_4[2].b == 0x57 && *(eax_4 + 9) == 0x41 && *(eax_4 + 0xa) == 0x56
                    && *(eax_4 + 0xb) == 0x45)
                esi[0x12] = 0xc
                
                if (i u>= 0x10)
                    do
                        int32_t ecx_1 = *edi
                        char* eax_5 = esi[0x12]
                        edx.b = eax_5[ecx_1]
                        
                        if (edx.b != 0x66 || eax_5[ecx_1 + 1] != 0x6d || eax_5[ecx_1 + 2] != 0x74
                                || eax_5[ecx_1 + 3] != 0x20)
                            if (edx.b == 0x64 && eax_5[ecx_1 + 1] == 0x61
                                    && eax_5[ecx_1 + 2] == 0x74 && eax_5[ecx_1 + 3] == 0x61)
                                esi[0x12] += 4
                                int32_t* ecx_11 = esi[0x12]
                                esi[8] = *(ecx_11 + *edi)
                                esi[6] = i
                                esi[0x12] = &ecx_11[1]
                                esi[9] = &ecx_11[1]
                                void* eax_18
                                eax_18.b = 1
                                esi[7] = 0
                                return eax_18
                            
                            esi[0x12] = &eax_5[4]
                            
                            if (&eax_5[8] u> i)
                                break
                            
                            esi[0x12] = *(eax_5 + 4 + ecx_1) + &eax_5[8]
                        else
                            esi[0x12] = &eax_5[4]
                            
                            if (&eax_5[8] u> i)
                                break
                            
                            eax_4 = *(eax_5 + 4 + ecx_1)
                            esi[0x12] = &eax_5[8]
                            
                            if (eax_4 != 0x10)
                                break
                            
                            if (&eax_5[0x18] u> i)
                                break
                            
                            int32_t ebp_1 = *(eax_5 + 8 + ecx_1 + 8)
                            uint32_t eax_6 = zx.d(*(eax_5 + 8 + ecx_1))
                            uint32_t edi_1 = zx.d(*(eax_5 + 8 + ecx_1 + 2))
                            int32_t ebx = *(eax_5 + 8 + ecx_1 + 4)
                            int16_t ecx_2 = *(eax_5 + 8 + ecx_1 + 0xc)
                            int16_t ecx_3 = *(eax_5 + 8 + *arg2 + 0xe)
                            esi = var_10
                            int32_t edx_2 = esi[0xa]
                            esi[0x12] = &eax_5[0x18]
                            (*(edx_2 + 0x20))(eax_6)
                            (*(esi[0xa] + 0x24))(edi_1)
                            (*(esi[0xa] + 0x28))(ebx)
                            (*(esi[0xa] + 0x2c))(ebp_1)
                            (*(esi[0xa] + 0x30))(zx.d(ecx_2))
                            (*(esi[0xa] + 0x34))(zx.d(ecx_3))
                            i = arg3
                            edi = &esi[0x13]
                    while (esi[0x12] + 4 u<= i)

eax_4.b = 0
return eax_4
