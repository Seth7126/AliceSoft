// 函数: sub_4b7600
// 地址: 0x4b7600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4cbd50(arg1 + 0xc, arg3, arg2)
void* esi = *(arg1 + 0xa0)
sub_4eec50(esi, 4, 1)
void* esi_1 = *(esi + 0x74)
void* eax

if (*(esi_1 + 0x164) u< 0x10)
    eax = esi_1 + 0x150
else
    eax = *(esi_1 + 0x150)

int32_t* var_c_1 = &arg2
float xmm0
float xmm1

if (sub_6ca310(eax, 0x79394c) == 1)
    xmm0 = *(arg1 + 0xf4)
    xmm1 = arg2
else if (*(esi_1 + 0x160) != 0)
    xmm1 = *(arg1 + 0xf4)
    xmm0 = xmm1
else
    xmm1 = *(arg1 + 0xf8)
    xmm0 = *(arg1 + 0xf4)

xmm0 - xmm1
int32_t eax_1
eax_1:1.b =
    (xmm0 == xmm1 ? 1 : 0) << 6 | (is_unordered.d(xmm0, xmm1) ? 1 : 0) << 2 | (xmm0 < xmm1 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    int32_t xmm0_1 = *(arg1 + 0x100)
    
    if (not(xmm0_1 f> xmm1))
        xmm0_1 = _mm_min_ss(*(arg1 + 0xfc), xmm1)
    
    *(arg1 + 0xf4) = xmm0_1
    *(arg1 + 0x158) = 1

return sub_4b7ab0(arg1)
