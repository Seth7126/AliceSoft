// 函数: ?Affinitize@FreeVirtualProcessorRoot@details@Concurrency@@QAEXPAVFreeThreadProxy@23@@Z
// 地址: 0x6fcec9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

Concurrency::details::ThreadProxy::SpinUntilBlocked(arg2)
arg1[0x14] = arg2
*(arg2 + 0x10) = arg1
void* ebx_1 = arg1[7]
int32_t esi = **arg1
j_sub_4033e0()
int32_t eax_1 = esi()
int32_t edx = *(ebx_1 + 0x10)
void* esi_1 = eax_1 * 0x34
int32_t var_10 = 0
int16_t var_c
int16_t* edi_1 = &var_c
*edi_1 = 0
*(edi_1 + 4) = 0
var_c = *(esi_1 + edx + 0xc)
int16_t eax_3 = (*(esi_1 + edx)).w
void var_24
void* edi_4 = &var_24
int16_t* esi_2 = &var_c
*edi_4 = *esi_2
*(edi_4 + 4) = *(esi_2 + 4)
return Concurrency::details::FreeThreadProxy::SetAffinity(arg2, eax_3)
