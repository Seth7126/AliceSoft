// 函数: sub_58cfb0
// 地址: 0x58cfb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[2]
int32_t edx = arg1[1]
int128_t* result = (edi - edx) s>> 6

if (result u>= arg2)
    return result

int32_t edx_2 = (edx - *arg1) s>> 6

if (0x3ffffff - edx_2 u< arg2)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t edx_3 = edx_2 + arg2
int32_t edi_2 = (edi - *arg1) s>> 6
int32_t ecx_1 = 0
uint32_t eax_4 = edi_2 u>> 1

if (0x3ffffff - eax_4 u>= edi_2)
    ecx_1 = eax_4 + edi_2

if (ecx_1 u>= edx_3)
    edx_3 = ecx_1

return sub_58d010(arg1, edx_3)
