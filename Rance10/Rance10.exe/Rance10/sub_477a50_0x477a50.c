// 函数: sub_477a50
// 地址: 0x477a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_4 = data_7fcc78
int32_t esi = data_7fcc7c
int32_t result = (esi - edx_4) s>> 2

if (result u>= 1)
    return result

int32_t ecx = data_7fcc74
int32_t edx_1 = (edx_4 - ecx) s>> 2

if (0x3fffffff - edx_1 u< 1)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t edx_2 = edx_1 + 1
int32_t esi_2 = (esi - ecx) s>> 2
int32_t ecx_1 = 0
uint32_t eax_4 = esi_2 u>> 1

if (0x3fffffff - eax_4 u>= esi_2)
    ecx_1 = eax_4 + esi_2

if (ecx_1 u>= edx_2)
    edx_2 = ecx_1

return sub_477ac0(edx_2) __tailcall
