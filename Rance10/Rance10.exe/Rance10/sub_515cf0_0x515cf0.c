// 函数: sub_515cf0
// 地址: 0x515cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2
sub_6ca100(ebx, arg1[1])
int32_t* esi_1 = *arg1
void* i = *esi_1
void* i_1 = i

for (; i != esi_1; i = i_1)
    int32_t eax = *(i + 0x24)
    void* edx_1
    
    if (eax u< 0x10)
        edx_1 = i + 0x10
    else
        edx_1 = *(i + 0x10)
    
    void* ecx_1
    
    if (eax u< 0x10)
        ecx_1 = i + 0x10
    else
        ecx_1 = *(i + 0x10)
    
    int32_t var_20_1 = 0.d
    sub_6ca200(ebx + 4, *(ebx + 8), ecx_1, edx_1 + *(i + 0x20))
    arg2.b = 0
    sub_4263a0(ebx + 4, &arg2)
    int32_t edx_2 = *(i + 0x3c)
    void* ecx_4 = i + 0x28
    arg2 = *(ecx_4 + 0x10)
    void* eax_3
    
    if (edx_2 u< 0x10)
        eax_3 = ecx_4
    else
        eax_3 = *ecx_4
    
    if (edx_2 u>= 0x10)
        ecx_4 = *ecx_4
    
    int32_t var_20_3 = 0.d
    sub_6ca200(ebx + 4, *(ebx + 8), ecx_4, eax_3 + arg2)
    arg2.b = 0
    sub_4263a0(ebx + 4, &arg2)
    
    if (sub_512db0(i + 0x40, ebx) == 0)
        return 0
    
    sub_429080(&i_1)

i.b = 1
return i
