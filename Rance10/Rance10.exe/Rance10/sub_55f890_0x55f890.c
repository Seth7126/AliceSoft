// 函数: sub_55f890
// 地址: 0x55f890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
void* ebx = arg2

if (sub_558ab0(arg1 + 8, ebx) != 0 && sub_558ab0(arg1 + 0x48, ebx) != 0)
    arg2.b = *(arg1 + 0xc4) != 0
    sub_4263a0(ebx + 4, &arg2)
    sub_6ca100(ebx, *(arg1 + 0xc8))
    sub_6ca100(ebx, *(arg1 + 0xcc))
    sub_6ca100(ebx, *(arg1 + 0xd0))
    sub_6ca100(ebx, *(arg1 + 0xb0))
    sub_6ca100(ebx, *(arg1 + 0xb4))
    sub_6ca100(ebx, *(arg1 + 0xbc))
    sub_6ca100(ebx, *(arg1 + 0xc0))
    sub_6ca100(ebx, (*(arg1 + 0x8c) - *(arg1 + 0x88)) s/ 0x1c)
    int32_t edi = *(arg1 + 0x8c)
    
    for (void* i = *(arg1 + 0x88); i != edi; i += 0x1c)
        sub_6ca100(ebx, *(i + 4))
        sub_6ca100(ebx, *(i + 8))
        sub_6ca100(ebx, *(i + 0x10))
        sub_6ca100(ebx, *(i + 0x14))
        sub_6ca100(ebx, *(i + 0x18))
    
    int32_t eax_5 = *(arg1 + 0xec)
    void* ecx_19 = arg1 + 0xd8
    int32_t esi = *(ecx_19 + 0x10)
    void* edx_3
    
    if (eax_5 u< 0x10)
        edx_3 = ecx_19
    else
        edx_3 = *ecx_19
    
    if (eax_5 u>= 0x10)
        ecx_19 = *ecx_19
    
    arg2.b = 0
    void* var_18_14 = arg2
    sub_6ca200(ebx + 4, *(ebx + 8), ecx_19, edx_3 + esi)
    arg2.b = 0
    sub_4263a0(ebx + 4, &arg2)
    arg2.b = *(arg1 + 0xf0) != 0
    sub_4263a0(ebx + 4, &arg2)
    arg2.b = *(arg1 + 0xf1) != 0
    sub_4263a0(ebx + 4, &arg2)
    void* result
    result.b = 1
    return result

return 0
