// 函数: sub_42dbd0
// 地址: 0x42dbd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
sub_6c9d60(edi, *(arg1 + 4))
sub_425fb0(edi, arg1 + 8)
int32_t ebx
ebx.b = *(arg1 + 0x14)
ebx.b <<= 3
arg2.b = ebx.b

if (*(edi + 0x10) == 0)
    sub_4263a0(edi + 4, &arg2)
    *(edi + 0x10) = 5
    void* eax_2
    eax_2.b = 1
    return eax_2

char* edx_4 = *(edi + 8) - *(edi + 4) - 1 + *(edi + 4)
*edx_4 |= ebx.b u>> *(edi + 0x10)
void* edx_5 = *(edi + 0x10)
*(edi + 0x10) = edx_5 + 5
void* eax_3

if (edx_5 + 5 s>= 8)
    eax_3 = (edx_5 + 5) & 0x80000007
    bool cond:1_1 = eax_3 == 0
    
    if (eax_3 s< 0)
        void* eax_5 = (eax_3 - 1) | 0xfffffff8
        eax_3 = eax_5 + 1
        cond:1_1 = eax_5 == 0xffffffff
    
    *(edi + 0x10) = eax_3
    
    if (not(cond:1_1))
        ebx.b <<= 8 - edx_5.b
        arg2.b = ebx.b
        sub_4263a0(edi + 4, &arg2)

eax_3.b = 1
return eax_3
