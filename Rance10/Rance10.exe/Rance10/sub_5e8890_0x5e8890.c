// 函数: sub_5e8890
// 地址: 0x5e8890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint128_t xmm0 = arg2
void* edi_1

if (arg1 s>= 0)
    edi_1 = data_7fd4cc

int32_t edi_3

if (arg1 s< 0 || arg1 s>= (*(edi_1 + 0x58) - *(edi_1 + 0x54)) s>> 3)
    edi_3 = 0
else
    int32_t edi_2 = *(edi_1 + 0x54)
    void* esi_2 = (arg1 << 3) + 4 + edi_2
    __Smtx_lock_shared(esi_2)
    edi_3 = *(edi_2 + (arg1 << 3))
    __Smtx_unlock_shared(esi_2)
    xmm0 = zx.o(xmm0)

int32_t edi_4 = neg.d(edi_3)
void* edi_6 = sbb.d(edi_4, edi_4, edi_3 != 0) & (edi_3 + 0x10)

if (edi_6 == 0)
    int32_t eax_4
    eax_4.b = 0
    return eax_4

*(edi_6 + 0x48) = _mm_unpacklo_ps(xmm0, arg3)
*(edi_6 + 0x50) = arg4
int32_t eax_5
eax_5.b = 1
return eax_5
