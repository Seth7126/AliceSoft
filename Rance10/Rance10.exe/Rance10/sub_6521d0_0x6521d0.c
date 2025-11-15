// 函数: sub_6521d0
// 地址: 0x6521d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1[0x5e]
int32_t eax = *(edi + 0x10)

if (eax == 0)
    sub_651ee0(arg1)
    sub_651ff0(arg1)
    
    if (arg1[0x34].b == 0)
        (*arg1[0x63])(arg1)
        (*arg1[0x64])(arg1)
        (*arg1[0x60])(arg1, 0)
    
    (*arg1[0x65])(arg1)
    (*arg1[0x66])(arg1, zx.d(*(arg1 + 0xd2)))
    int32_t eax_29 = 0
    
    if (*(edi + 0x18) s> 1)
        eax_29 = 3
    
    (*arg1[0x61])(arg1, eax_29)
    (*arg1[0x5f])(arg1, 0)
    *(edi + 0xc) = *(arg1 + 0xd2) == 0
else if (eax == 1)
    sub_651ee0(arg1)
    sub_651ff0(arg1)
    
    if (arg1[0x57] != 0 || arg1[0x59] == 0)
        (*arg1[0x66])(arg1, 1)
        (*arg1[0x61])(arg1, 2)
        *(edi + 0xc) = 0
    else
        *(edi + 0x14) += 1
        *(edi + 0x10) = 2
    label_65223b:
        
        if (*(arg1 + 0xd2) == 0)
            sub_651ee0(arg1)
            sub_651ff0(arg1)
        
        (*arg1[0x66])(arg1, 0)
        (*arg1[0x61])(arg1, 2)
        
        if (*(edi + 0x1c) == 0)
            (*(arg1[0x62] + 4))(arg1)
        
        (*(arg1[0x62] + 8))(arg1)
        *(edi + 0xc) = 0
else
    if (eax == 2)
        goto label_65223b
    
    *(*arg1 + 0x14) = 0x31
    (**arg1)(arg1)

int32_t ecx_9 = *(edi + 0x14)
int32_t eax_35
eax_35.b = ecx_9 == *(edi + 0x18) - 1
*(edi + 0xd) = eax_35.b
void* result = arg1[2]

if (result != 0)
    *(result + 0xc) = ecx_9
    result = *(edi + 0x18)
    *(arg1[2] + 0x10) = result

return result
