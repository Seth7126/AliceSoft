// 函数: sub_4ac680
// 地址: 0x4ac680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm2 = *(arg1 + 0x58)
float xmm1 = *(arg1 + 0x5c)
void* ecx = *(*(*(arg1 + 0x54) + 4) + 0x40)
float xmm0 = *(ecx + 0x7c)
xmm0 - xmm2
void* eax_1
eax_1:1.b =
    (xmm0 == xmm2 ? 1 : 0) << 6 | (is_unordered.d(xmm0, xmm2) ? 1 : 0) << 2 | (xmm0 < xmm2 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
bool p_3

if (not(p_1))
    float xmm0_1 = *(ecx + 0x80)
    xmm0_1 - xmm1
    eax_1:1.b = (xmm0_1 == xmm1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, xmm1) ? 1 : 0) << 2
        | (xmm0_1 < xmm1 ? 1 : 0)
    p_3 = unimplemented  {test ah, 0x44}

if (p_1 || p_3)
    *(ecx + 0x7c) = xmm2
    *(ecx + 0x80) = xmm1
    *(ecx + 0x70) = 1

void* edi = *(arg1 + 0x54)
int32_t ebx = *(arg1 + 0x1c)
int32_t ebp = *(arg1 + 0x18)

if (*(*(*(edi + 4) + 0x40) + 0x47e) != 0)
    if (*(edi + 0x60) == 0)
        sub_4858e0(edi + 0x64, 0)
    
    sub_485930(edi + 0x64, ebp, ebx, ebp, ebx, 0)

*(edi + 0x60) = 1
void* edi_1 = *(arg1 + 0x54)

if (*(edi_1 + 0x60) != 0 && *(*(*(edi_1 + 4) + 0x40) + 0x47e) != 0)
    sub_485990(edi_1 + 0x64, 0)

*(edi_1 + 0x60) = 0
void* edi_2 = *(arg1 + 0x64)
void* eax_6 = *(arg1 + 0x54)

if (*(edi_2 + 0x61) != 0 && eax_6 != 0)
    void* eax_8 = *(*(eax_6 + 4) + 0x40)
    void* ecx_4 = *(eax_8 + 0x64)
    int32_t eax_9
    
    if (ecx_4 != 0)
        eax_9 = sub_4a44a0(ecx_4)
    else
        eax_9 = *(eax_8 + 0x2c)
    
    sub_485ad0(edi_2 + 0x64, eax_9, 0)

*(edi_2 + 0x61) = 0
sub_4e6e80(edi_2)
int32_t result = *(arg1 + 8)
*(arg1 + 0x54) = result
*(arg1 + 0x64) = result
*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x60) = 1
return result
