// 函数: sub_672440
// 地址: 0x672440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg1
void* esi = *(edi + 0x58)

if (**(esi + 0xe4) == esi)
    float xmm0_1 = *(esi + 0x40)
    arg1 = sx.d((arg2 u>> 0x10).w)
    float xmm0_2
    
    if (arg1 s/ 0x78 s>= 0)
        xmm0_2 = xmm0_1 + 0.25f
    else
        xmm0_2 = xmm0_1 - 0.25f
    
    *(esi + 0x40) = xmm0_2
    
    if (not(xmm0_2 <= 16f))
        *(esi + 0x40) = 0x41800000
    
    if (not(0.25f f<= *(esi + 0x40)))
        *(esi + 0x40) = 0x3e800000

int32_t var_c = arg1
int32_t var_10 = arg2
sub_681250(*(edi + 0x5c), arg1)
return 0
