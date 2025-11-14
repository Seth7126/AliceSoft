// 函数: sub_10010d30
// 地址: 0x10010d30
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg2 == 0)
    return 0x80004003

int32_t eax_1 = *(arg1 + 0x1c)
int32_t eax_2

if (eax_1 == 0)
    eax_2 = 0
else
    eax_2 = eax_1 + 0xc

*arg2 = eax_2

if (*(arg1 + 0x1c) != 0)
    void* eax_3 = *(arg1 + 0x1c)
    (*(*(eax_3 + 0xc) + 4))(eax_3 + 0xc)

int16_t* edx_2 = *(arg1 + 8)

if (edx_2 == 0)
    arg2[2].w = 0
    arg2[1] = *(arg1 + 0x10)
    return 0

int32_t i = 0x80
void* eax_5 = &arg2[2]

while (i != 0x80000082)
    int16_t ecx_3 = *edx_2
    
    if (ecx_3 == 0)
        break
    
    *eax_5 = ecx_3
    eax_5 += 2
    edx_2 = &edx_2[1]
    int32_t i_1 = i
    i -= 1
    
    if (i_1 == 1)
        *(eax_5 - 2) = 0
        arg2[1] = *(arg1 + 0x10)
        return 0

if (i == 0)
    eax_5 -= 2

*eax_5 = 0
arg2[1] = *(arg1 + 0x10)
return 0
