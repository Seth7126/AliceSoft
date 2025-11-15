// 函数: sub_600020
// 地址: 0x600020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t esi = *(arg1 + 8)
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2aaaaaab, *(arg3 + 0x5c) - *(arg3 + 0x58))
int32_t edx_1 = edx s>> 2

if (esi u< (edx_1 u>> 0x1f) + edx_1)
    void** eax_5 = *(arg3 + 0x58) + esi * 0x18
    
    if (eax_5 != 0)
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = 0
        sub_403590(arg2, eax_5, 0, 0xffffffff)
        return arg2

sub_403360(arg2, "enum")
return arg2
