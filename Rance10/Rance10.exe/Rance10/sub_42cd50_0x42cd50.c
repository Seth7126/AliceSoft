// 函数: sub_42cd50
// 地址: 0x42cd50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[2]
int32_t edx = arg1[1]
void* result = (edi - edx) s>> 2

if (result u>= 1)
    return result

int32_t ecx = *arg1
int32_t edx_2 = (edx - ecx) s>> 2

if (0x3fffffff - edx_2 u< 1)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t edx_3 = edx_2 + 1
int32_t edi_2 = (edi - ecx) s>> 2
int32_t ecx_1 = 0
uint32_t eax_4 = edi_2 u>> 1

if (0x3fffffff - eax_4 u>= edi_2)
    ecx_1 = eax_4 + edi_2

if (ecx_1 u>= edx_3)
    edx_3 = ecx_1

return sub_404670(arg1, edx_3)
