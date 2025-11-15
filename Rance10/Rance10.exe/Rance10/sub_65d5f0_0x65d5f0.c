// 函数: sub_65d5f0
// 地址: 0x65d5f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[0x66]

if (arg1[0x30] != 8)
    *(*arg1 + 0x14) = 0x10
    *(*arg1 + 0x18) = arg1[0x30]
    (**arg1)(arg1)

sub_65d350(arg1)
sub_65d580(arg1)

if (arg1[0x18] u<= 0 || arg1[0x17] u<= 0 || arg1[0x19] s<= 0)
    *(*arg1 + 0x14) = 0x21
    (**arg1)(arg1)

*(edi + 0xc) = 0
*(edi + 0x10) = sub_65d2a0(arg1)
*(edi + 0x14) = 0
*(edi + 0x18) = 0
char eax_8 = *(arg1 + 0x4a)

if (eax_8 == 0 || arg1[0x10].b == 0)
    arg1[0x16].w = 0
    *(arg1 + 0x5a) = 0

if (eax_8 != 0)
    if (*(arg1 + 0x41) != 0)
        *(*arg1 + 0x14) = 0x30
        (**arg1)(arg1)
    
    if (arg1[0x19] != 3)
        arg1[0x16].w = 1
        *(arg1 + 0x5a) = 0
        arg1[0x1d] = 0
    else if (arg1[0x1d] != 0)
        *(arg1 + 0x59) = 1
    else if (arg1[0x14].b == 0)
        arg1[0x16].b = 1
    else
        *(arg1 + 0x5a) = 1
    
    if (arg1[0x16].b != 0)
        sub_67a700(arg1)
        *(edi + 0x14) = arg1[0x70]
    
    if (*(arg1 + 0x5a) != 0 || *(arg1 + 0x59) != 0)
        sub_67ba20(arg1)
        *(edi + 0x18) = arg1[0x70]

if (*(arg1 + 0x41) == 0)
    if (*(edi + 0x10) == 0)
        sub_6575a0(arg1)
        sub_65e6e0(arg1)
    else
        sub_65dfd0(arg1)
    
    sub_65e320(arg1, *(arg1 + 0x5a))

sub_657e80(arg1)

if (*(arg1 + 0xca) == 0)
    sub_659c30(arg1)
else
    sub_6557b0(arg1)

char edx_3

if (*(arg1[0x6a] + 0x10) != 0 || arg1[0x10].b != 0)
    edx_3 = 1
else
    edx_3 = 0

sub_656a00(arg1, edx_3)

if (*(arg1 + 0x41) == 0)
    sub_65b040(arg1)

(*(arg1[1] + 0x18))(arg1)
void* result = (*(arg1[0x6a] + 8))(arg1)
void* ecx_12 = arg1[2]

if (ecx_12 != 0 && arg1[0x10].b == 0)
    result = arg1[0x6a]
    
    if (*(result + 0x10) != 0)
        int32_t eax_19 = arg1[9]
        
        if (*(arg1 + 0xc9) != 0)
            eax_19 = eax_19 * 3 + 2
        
        *(ecx_12 + 4) = 0
        *(arg1[2] + 8) = arg1[0x4a] * eax_19
        *(arg1[2] + 0xc) = 0
        result = arg1[2]
        int32_t ecx_15
        ecx_15.b = *(arg1 + 0x5a) != 0
        *(result + 0x10) = ecx_15 + 2
        *(edi + 0xc) += 1

return result
