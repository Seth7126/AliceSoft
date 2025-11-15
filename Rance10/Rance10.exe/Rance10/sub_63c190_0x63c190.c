// 函数: sub_63c190
// 地址: 0x63c190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 0

int32_t ecx_3 = (arg1 s>> 1 & 0x55555555) + (arg1 & 0x55555555)
int32_t edx_3 = (ecx_3 s>> 2 & 0x33333333) + (ecx_3 & 0x33333333)
int32_t ecx_8 = (edx_3 u>> 4 & 0xf0f0f0f) + (edx_3 & 0xf0f0f0f)
int32_t esi_3 = (ecx_8 u>> 8 & 0xff00ff) + (ecx_8 & 0xff00ff)

if ((esi_3 u>> 0x10) + zx.d(esi_3.w) == 1)
    return arg1

char ecx_15 = (neg.d(arg1 s>> 0x10) s>> 0x10).b & 0x10
int32_t edi_1 = arg1 s>> ecx_15
char ecx_18 = ((edi_1 - 0x100) s>> 0x10).b & 8
int32_t edi_2 = edi_1 << ecx_18
char ecx_21 = ((edi_2 - 0x1000) s>> 0x10).b & 4
int32_t edi_3 = edi_2 << ecx_21
char ecx_24 = ((edi_3 - 0x4000) s>> 0x10).b & 2
int32_t edi_5 = edi_3 << ecx_24 s>> 0xe
return 0x80000000
    u>> (ecx_24 + 1 + 0x10 - ecx_15 + ecx_18 + ecx_21 - ((not.d(edi_5 s>> 1)).b & edi_5.b))
