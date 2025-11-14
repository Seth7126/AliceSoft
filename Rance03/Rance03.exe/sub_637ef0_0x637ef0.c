// 函数: sub_637ef0
// 地址: 0x637ef0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1

if (arg3 u> 0x20)
label_637feb:
    eax_1 = arg1[2]
    
    if (eax_1 != 0)
        eax_1 = _free(eax_1)
    
    __builtin_memset(arg1, 0, 0x14)
    return eax_1

int32_t ecx_1 = arg1[4]
eax_1 = ecx_1 - 4

if (*arg1 s< eax_1)
    goto label_637f4e

if (arg1[3] == 0)
    return eax_1

if (ecx_1 s> 0x7ffffeff)
    goto label_637feb

eax_1 = _realloc(arg1[2], ecx_1 + 0x100)

if (eax_1 == 0)
    goto label_637feb

int32_t ecx_2 = *arg1
arg1[4] += 0x100
arg1[2] = eax_1
arg1[3] = ecx_2 + eax_1
label_637f4e:
int32_t ecx_4 = arg1[1]
char* edx = arg1[3]
int32_t ebx_1 = arg2 & *((arg3 << 2) + &data_6f1ea8)
int32_t edi_1 = arg3 + ecx_4
eax_1.b = ebx_1.b
eax_1.b <<= ecx_4.b
*edx |= eax_1.b

if (edi_1 s>= 8)
    *(arg1[3] + 1) = (ebx_1 u>> (8 - (arg1[1]).b)).b
    
    if (edi_1 s>= 0x10)
        *(arg1[3] + 2) = (ebx_1 u>> (0x10 - (arg1[1]).b)).b
        
        if (edi_1 s>= 0x18)
            *(arg1[3] + 3) = (ebx_1 u>> (0x18 - (arg1[1]).b)).b
            
            if (edi_1 s>= 0x20)
                int32_t eax_6 = arg1[1]
                
                if (eax_6 == 0)
                    *(arg1[3] + 4) = 0
                else
                    *(arg1[3] + 4) = (ebx_1 u>> (0x20 - eax_6.b)).b

int32_t eax_10
int32_t edx_7
edx_7:eax_10 = sx.q(edi_1)
int32_t eax_12 = (eax_10 + (edx_7 & 7)) s>> 3
*arg1 += eax_12
arg1[3] += eax_12
arg1[1] = edi_1 & 7
return eax_12
