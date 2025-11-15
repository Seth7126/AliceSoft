// 函数: sub_4dd7d0
// 地址: 0x4dd7d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2
sub_6ca100(ebx, *(arg1 + 0xc))
int32_t* esi = *(arg1 + 8)
void* i = *esi
void* i_2 = i

for (; i != esi; i = i_2)
    int32_t eax = *(i + 0x24)
    int32_t* edx_1
    
    if (eax u< 0x10)
        edx_1 = i + 0x10
    else
        edx_1 = *(i + 0x10)
    
    int32_t* ecx_1
    
    if (eax u< 0x10)
        ecx_1 = i + 0x10
    else
        ecx_1 = *(i + 0x10)
    
    int32_t var_24_1 = 0.d
    sub_6ca200(ebx + 4, *(ebx + 8), ecx_1, *(i + 0x20) + edx_1)
    arg2.b = 0
    sub_4263a0(ebx + 4, &arg2)
    void** ecx_4 = *(i + 0x28)
    int32_t edx_2 = ecx_4[5]
    int32_t edi_2 = ecx_4[4]
    void** eax_3
    
    if (edx_2 u< 0x10)
        eax_3 = ecx_4
    else
        eax_3 = *ecx_4
    
    if (edx_2 u>= 0x10)
        ecx_4 = *ecx_4
    
    int32_t var_24_3 = 0.d
    sub_6ca200(ebx + 4, *(ebx + 8), ecx_4, eax_3 + edi_2)
    arg2.b = 0
    sub_4263a0(ebx + 4, &arg2)
    sub_429080(&i_2)

sub_6ca100(ebx, *(arg1 + 0x14))
int32_t* esi_1 = *(arg1 + 0x10)
void* i_1 = *esi_1
i_2 = i_1

for (; i_1 != esi_1; i_1 = i_2)
    int32_t eax_5 = *(i_1 + 0x24)
    int32_t* edx_3
    
    if (eax_5 u< 0x10)
        edx_3 = i_1 + 0x10
    else
        edx_3 = *(i_1 + 0x10)
    
    int32_t* ecx_9
    
    if (eax_5 u< 0x10)
        ecx_9 = i_1 + 0x10
    else
        ecx_9 = *(i_1 + 0x10)
    
    int32_t var_24_6 = 0.d
    sub_6ca200(ebx + 4, *(ebx + 8), ecx_9, *(i_1 + 0x20) + edx_3)
    arg2.b = 0
    sub_4263a0(ebx + 4, &arg2)
    void** ecx_12 = *(i_1 + 0x28)
    int32_t edx_4 = ecx_12[5]
    int32_t edi_4 = ecx_12[4]
    void** eax_8
    
    if (edx_4 u< 0x10)
        eax_8 = ecx_12
    else
        eax_8 = *ecx_12
    
    if (edx_4 u>= 0x10)
        ecx_12 = *ecx_12
    
    int32_t var_24_8 = 0.d
    sub_6ca200(ebx + 4, *(ebx + 8), ecx_12, eax_8 + edi_4)
    arg2.b = 0
    sub_4263a0(ebx + 4, &arg2)
    sub_429080(&i_2)

arg2 = *(arg1 + 0x18)
sub_6ca100(ebx, arg2)
void* result
result.b = 1
return result
