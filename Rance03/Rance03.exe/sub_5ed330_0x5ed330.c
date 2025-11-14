// 函数: sub_5ed330
// 地址: 0x5ed330
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx_2 = (arg1 s>> 1 & 0x55555555) + (arg1 & 0x55555555)
int32_t eax_5 = (ecx_2 s>> 2 & 0x33333333) + (ecx_2 & 0x33333333)
int32_t ecx_7 = (eax_5 s>> 4 & 0xf0f0f0f) + (eax_5 & 0xf0f0f0f)
int32_t eax_10 = (ecx_7 s>> 8 & 0xff00ff) + (ecx_7 & 0xff00ff)

if (zx.d((eax_10 s>> 0x10).w) + zx.d(eax_10.w) == 1)
    return arg1

char ecx_17 = (neg.d(arg1 s>> 0x10) s>> 0x10).b & 0x10
int32_t esi_1 = arg1 s>> ecx_17
char ecx_20 = ((esi_1 - 0x100) s>> 0x10).b & 8
int32_t esi_2 = esi_1 << ecx_20
char ecx_23 = ((esi_2 - 0x1000) s>> 0x10).b & 4
int32_t esi_3 = esi_2 << ecx_23
char ecx_26 = ((esi_3 - 0x4000) s>> 0x10).b & 2
int32_t esi_5 = esi_3 << ecx_26 s>> 0xe
return 0x80000000
    u>> (ecx_26 + 1 + 0x10 - ecx_17 + ecx_20 + ecx_23 - ((not.d(esi_5 s>> 1)).b & esi_5.b))
