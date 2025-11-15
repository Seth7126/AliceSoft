// 函数: sub_6c95a0
// 地址: 0x6c95a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi_1 = arg2 + *(arg1 + 0xc)
int32_t esi_1 = edi_1 & 0x80000007

if (esi_1 s< 0)
    esi_1 = ((esi_1 - 1) | 0xfffffff8) + 1

int32_t esi_4 = neg.d(esi_1)
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(edi_1)

if (((eax_1 + (edx & 7)) s>> 3) + neg.d(sbb.d(esi_4, esi_4, esi_1 != 0)) + *(arg1 + 4)
        u> *(arg1 + 8))
    int32_t eax_4
    eax_4.b = 0
    return eax_4

int32_t eax_6
int32_t edx_2
edx_2:eax_6 = sx.q(edi_1)
*(arg1 + 4) += (eax_6 + (edx_2 & 7)) s>> 3
int32_t edi_2 = edi_1 & 0x80000007

if (edi_2 s< 0)
    edi_2 = ((edi_2 - 1) | 0xfffffff8) + 1

*(arg1 + 0xc) = edi_2
int32_t eax_8
eax_8.b = 1
return eax_8
