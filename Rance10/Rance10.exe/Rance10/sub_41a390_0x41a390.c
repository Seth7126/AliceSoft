// 函数: sub_41a390
// 地址: 0x41a390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[2]
int32_t esi = arg1[1]
void* result = (ecx - esi) s/ 0x28

if (result u>= 1)
    return result

int32_t eax_3
int32_t edx_4
edx_4:eax_3 = muls.dp.d(0x66666667, esi - *arg1)
int32_t edx_5 = edx_4 s>> 4
int32_t edi_3 = (edx_5 u>> 0x1f) + edx_5

if (0x6666666 - edi_3 u< 1)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t eax_5
int32_t edx_6
edx_6:eax_5 = muls.dp.d(0x66666667, ecx - *arg1)
int32_t ecx_2 = 0
int32_t edi_4 = edi_3 + 1
int32_t edx_7 = edx_6 s>> 4
int32_t esi_4 = (edx_7 u>> 0x1f) + edx_7
uint32_t eax_7 = esi_4 u>> 1

if (0x6666666 - eax_7 u>= esi_4)
    ecx_2 = eax_7 + esi_4

if (ecx_2 u>= edi_4)
    edi_4 = ecx_2

return sub_41a420(arg1, edi_4)
