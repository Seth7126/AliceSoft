// 函数: sub_678fc0
// 地址: 0x678fc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg3
int32_t* eax = arg1[1]

if (ebx u> 0x3b9ac9f0)
    *(*arg1 + 0x14) = 0x38
    *(*arg1 + 0x18) = 1
    (**arg1)(arg1)

void* ecx_1 = ebx & 7

if (ecx_1 u> 0)
    ebx += 8 - ecx_1

if (arg2 s< 0 || arg2 s>= 2)
    *(*arg1 + 0x14) = 0xf
    *(*arg1 + 0x18) = arg2
    (**arg1)(arg1)

void** i_1 = nullptr
void** i

for (i = eax[arg2 + 0xd]; i != 0; i = *i)
    if (i[2] u>= ebx)
        goto label_6790e8
    
    i_1 = i

uint32_t ecx_2

if (i_1 != 0)
    ecx_2 = *((arg2 << 2) + &data_76e790)
else
    ecx_2 = *((arg2 << 2) + &data_76e798)

uint32_t edi_1 = 0x3b9aca00 - (ebx + 0x10)

if (ecx_2 u<= edi_1)
    edi_1 = ecx_2

void* var_14_3 = ebx + 0x10 + edi_1

for (i = sub_705e22(); i == 0; i = sub_705e22())
    edi_1 u>>= 1
    
    if (edi_1 u< 0x32)
        *(*arg1 + 0x14) = 0x38
        *(*arg1 + 0x18) = 2
        (**arg1)(arg1)
    
    void* var_14_5 = ebx + 0x10 + edi_1

eax[0x13] += ebx + 0x10 + edi_1
*i = nullptr
i[1] = 0
i[2] = edi_1 + ebx

if (i_1 != 0)
    *i_1 = i
else
    eax[arg2 + 0xd] = i

label_6790e8:
void* ecx_7 = i[1]
i[2] -= ebx
i[1] = ecx_7 + ebx
return i + ecx_7 + 0x10
