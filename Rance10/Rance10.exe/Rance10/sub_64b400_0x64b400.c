// 函数: sub_64b400
// 地址: 0x64b400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[0x66]
sub_64ae50(arg1)
int32_t* ecx = arg1[6]
**ecx = 0xff
*ecx += 1
int32_t temp0 = ecx[1]
ecx[1] -= 1

if (temp0 == 1 && ecx[3](arg1) == 0)
    *(*arg1 + 0x14) = 0x19
    (**arg1)(arg1)

int32_t* ecx_1 = arg1[6]
char* result = *ecx_1
*result = arg2 - 0x30
*ecx_1 += 1
int32_t temp1 = ecx_1[1]
ecx_1[1] -= 1

if (temp1 == 1)
    result = ecx_1[3](arg1)
    
    if (result.b == 0)
        *(*arg1 + 0x14) = 0x19
        result = (**arg1)(arg1)

int32_t i = 0

if (arg1[0x45] s> 0)
    result = &arg1[0x46]
    int32_t* ebx_1 = edi + 0x34
    char* result_1 = result
    
    do
        void* ecx_2 = *result
        
        if (arg1[0x57] == 0 && arg1[0x59] == 0)
            _memset(*(edi + (*(ecx_2 + 0x14) << 2) + 0x4c), 0, 0x40)
            result = result_1
            ebx_1[-4] = 0
            *ebx_1 = 0
        
        if (arg1[0x58] != 0)
            _memset(*(edi + (*(ecx_2 + 0x18) << 2) + 0x8c), 0, 0x100)
            result = result_1
        
        i += 1
        result = &result[4]
        ebx_1 = &ebx_1[1]
        result_1 = result
    while (i s< arg1[0x45])

*(edi + 0xc) = 0
*(edi + 0x10) = 0x10000
*(edi + 0x14) = 0
*(edi + 0x18) = 0
*(edi + 0x1c) = 0xb
*(edi + 0x20) = 0xffffffff
return result
