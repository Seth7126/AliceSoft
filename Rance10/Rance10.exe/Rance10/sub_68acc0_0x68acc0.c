// 函数: sub_68acc0
// 地址: 0x68acc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg1[2]
int32_t edx = arg1[1]
void* result = (edi - edx) s>> 3

if (result u>= arg2)
    return result

int32_t edx_2 = (edx - *arg1) s>> 3

if (0x1fffffff - edx_2 u< arg2)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t edx_3 = edx_2 + arg2
int32_t edi_2 = (edi - *arg1) s>> 3
int32_t ecx_1 = 0
uint32_t eax_4 = edi_2 u>> 1

if (0x1fffffff - eax_4 u>= edi_2)
    ecx_1 = eax_4 + edi_2

if (ecx_1 u>= edx_3)
    edx_3 = ecx_1

return sub_68ad20(arg1, edx_3)
