// 函数: sub_6c9d60
// 地址: 0x6c9d60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2
char temp1 = ebx.b
ebx.b = neg.b(ebx.b)
ebx.b = sbb.b(ebx.b, ebx.b, temp1 != 0)
ebx.b &= 0x80
arg2 = ebx.b

if (*(arg1 + 0x10) == 0)
    void* eax_1 = sub_4263a0(arg1 + 4, &arg2)
    *(arg1 + 0x10) = 1
    return eax_1

char* edx_1 = *(arg1 + 4) + *(arg1 + 8) - *(arg1 + 4) - 1
int32_t ecx_3
ecx_3.b = *(arg1 + 0x10)
*edx_1 |= ebx.b u>> ecx_3.b
void* edx_2 = *(arg1 + 0x10)
void* eax_2 = edx_2 + 1
*(arg1 + 0x10) = eax_2

if (eax_2 s>= 8)
    eax_2 &= 0x80000007
    bool cond:0_1 = eax_2 == 0
    
    if (eax_2 s< 0)
        void* eax_4 = (eax_2 - 1) | 0xfffffff8
        eax_2 = eax_4 + 1
        cond:0_1 = eax_4 == 0xffffffff
    
    *(arg1 + 0x10) = eax_2
    
    if (not(cond:0_1))
        ebx.b <<= 8 - edx_2.b
        arg2 = ebx.b
        return sub_4263a0(arg1 + 4, &arg2)

return eax_2
