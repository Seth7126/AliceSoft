// 函数: sub_443e10
// 地址: 0x443e10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = 0
void* edi = *(arg1 + 4)
uint32_t esi_1 = edi u>> 4
uint32_t eax_1 = divu.dp.d(edx:arg2, esi_1) << 4
uint32_t edx_2 = modu.dp.d(edx:arg2, esi_1) << 4
int32_t esi_4 = edi * eax_1 + edx_2
sub_441f20(arg3 + 0x30, *(arg1 + 0xc) + (esi_4 << 1), edi)
sub_441f20(arg3 + 0xb0, *(arg1 + 0xc) + (esi_4 << 1) + 0x10, *(arg1 + 4))
void* eax_8 = *(arg1 + 4)
sub_441f20(arg3 + 0x130, *(arg1 + 0xc) + ((esi_4 + (eax_8 << 3)) << 1), eax_8)
void* eax_11 = *(arg1 + 4)
sub_441f20(arg3 + 0x1b0, *(arg1 + 0xc) + ((esi_4 + ((eax_11 + 1) << 3)) << 1), eax_11)
int32_t esi_5 = ((edi u>> 1) * (eax_1 u>> 1) + (edx_2 u>> 1)) * 2
sub_441f20(arg3 + 0x230, *(arg1 + 0x18) + esi_5, *(arg1 + 4) u>> 1)
sub_441f20(arg3 + 0x2b0, *(arg1 + 0x24) + esi_5, *(arg1 + 4) u>> 1)
int128_t* result
result.b = 1
return result
