// 函数: sub_4fb500
// 地址: 0x4fb500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* ecx = *(arg1 + 4)

if (ecx == 0)
    return 

void* eax_1 = sub_4efcc0(ecx)
float esi_1 = data_7fcbbc
float edi_1

if (esi_1 != 0)
    if (sub_63c080(esi_1) != 0)
        edi_1 = (*(**(esi_1 i+ 0x2c) + 0x54))()
    else
        edi_1 = 0f
    
    void* esi_2 = data_7fcbbc
    char eax_5
    
    if (esi_2 != 0)
        eax_5 = sub_63c080(esi_2)
    
    if (esi_2 != 0 && eax_5 != 0)
        esi_1 = (*(**(esi_2 + 0x2c) + 0x50))()
    else
        esi_1 = 0f
else
    edi_1 = 0f

long double x87_r0
long double x87_r1
float eax_8 = sub_63cd60(edi_1, x87_r0, x87_r1)
long double x87_r2
float eax_9 = sub_63cd60(esi_1, x87_r1, x87_r2)
void* esi_3 = *(eax_1 + 0x44)
sub_555e00(esi_3, 0x17, 1)
void* eax = *(esi_3 + 0x80)
int32_t xmm1_2 = _mm_cvtepi32_ps(zx.o(eax_9))
*(eax + 0x44) = 1
*(eax + 8) = 0
*(eax + 0xc) = 0
int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_8))
*(eax + 0x14) = 0
*(eax + 0x10) = xmm1_2
*(eax + 0x18) = 0
*(eax + 0x1c) = xmm0_2
*(eax + 0x20) = xmm1_2
*(eax + 0x24) = xmm0_2
