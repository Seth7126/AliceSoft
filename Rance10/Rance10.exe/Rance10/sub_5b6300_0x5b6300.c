// 函数: sub_5b6300
// 地址: 0x5b6300
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* i_1 = *(arg1 + 0x10) - *(arg1 + 0xc)

if (i_1 s>= 0x3c)
    var_4.b = 0
    void* var_c_1 = var_4
    sub_5b6430(*(arg1 + 0xc), *(arg1 + 0x10))
    sub_5b6380(arg1 + 0xc)
    int32_t ecx_1 = *(arg1 + 0x10)
    int32_t xmm1_1 = (zx.o(0)).d
    
    for (void* i = *(arg1 + 0xc); i != ecx_1; i += 0xc)
        xmm1_1 = xmm1_1 f+ *(i + 4)
    
    for (i_1 = *(arg1 + 0xc); i_1 != ecx_1; i_1 += 0xc)
        *(i_1 + 4) = 1f f/ xmm1_1 f* *(i_1 + 4)

return i_1
