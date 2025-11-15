// 函数: sub_61e9a0
// 地址: 0x61e9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
int32_t* ecx = *(arg1 + 0x18)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x18) = 0

int32_t* ecx_1 = *(arg1 + 0x10)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0x10) = 0

int32_t* ecx_2 = *(arg1 + 0x10)

if (ecx_2 != 0)
    (*(*ecx_2 + 4))()
    *(arg1 + 0x10) = 0

int64_t* eax_4 = sub_6e810c(8)
int64_t* var_4 = eax_4
*eax_4 = 0
*(eax_4 + 4) = 1
*eax_4 = &nutria::CZlibDecompressor::`vftable'{for `common::SuicideRefCounter<class IDecompressor>'}
*(arg1 + 0x10) = eax_4
int32_t* ecx_3 = *(arg1 + 0x18)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    *(arg1 + 0x18) = 0

int64_t* result = sub_6cc630(0x76d640)
*(arg1 + 0x18) = result
result.b = result != 0
return result
