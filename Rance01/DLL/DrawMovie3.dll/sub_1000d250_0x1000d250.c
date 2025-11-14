// 函数: sub_1000d250
// 地址: 0x1000d250
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

uint32_t eax = timeGetTime()
int32_t edx = *(arg1 + 0xf4)
int32_t ecx_2 = (eax - *(arg1 + 0xfc)) * 0x2710
int32_t eax_2

if (ecx_2 s>= edx * 2)
    eax_2 = *(arg1 + 0xf8)

if (ecx_2 s< edx * 2 || ecx_2 s< eax_2 * 2)
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(edx * 3 + ecx_2)
    *(arg1 + 0xf4) = (eax_6 + (edx_1 & 3)) s>> 2

*(arg1 + 0xf8) = ecx_2
int32_t esi_1 = *(arg1 + 0xf0)

if (esi_1 s<= 0)
    return Sleep(0) __tailcall

return Sleep(esi_1 s/ 0x2710) __tailcall
