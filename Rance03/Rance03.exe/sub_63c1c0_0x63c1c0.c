// 函数: sub_63c1c0
// 地址: 0x63c1c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx
void* var_4_1 = ecx
int32_t i_1 = *(arg2 + 0x504)

if (arg3 == 0)
    return 0

int32_t* esi = arg4

if (esi == 0)
    return 0

int32_t result = sub_6382a0(ecx, i_1 << 2)

if (i_1 s<= 0)
    return result

int32_t* ebx_1 = arg3 - esi
int32_t* edx_2 = result - esi
int32_t i

do
    int32_t eax_5 =
        ((*esi & 0x7fff) * arg5 + 0x8000 + (*(ebx_1 + esi) & 0x7fff) * (0x10000 - arg5)) s>> 0x10
    *(edx_2 + esi) = eax_5
    
    if ((*(ebx_1 + esi) & 0x8000) != 0 && (*esi & 0x8000) != 0)
        *(edx_2 + esi) = eax_5 | 0x8000
    
    esi = &esi[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
