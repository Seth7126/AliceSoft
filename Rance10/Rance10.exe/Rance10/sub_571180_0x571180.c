// 函数: sub_571180
// 地址: 0x571180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[2]
int32_t edx = arg1[1]
int128_t* result = (edi - edx) s>> 5

if (result u>= 1)
    return result

int32_t ecx = *arg1
int32_t edx_2 = (edx - ecx) s>> 5

if (0x7ffffff - edx_2 u< 1)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t edx_3 = edx_2 + 1
int32_t edi_2 = (edi - ecx) s>> 5
int32_t ecx_1 = 0
uint32_t eax_4 = edi_2 u>> 1

if (0x7ffffff - eax_4 u>= edi_2)
    ecx_1 = eax_4 + edi_2

if (ecx_1 u>= edx_3)
    edx_3 = ecx_1

return sub_5712e0(arg1, edx_3)
