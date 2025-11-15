// 函数: sub_45a390
// 地址: 0x45a390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg1[2]
int32_t esi = arg1[1]
void* result = (ebp - esi) s/ 0x2c

if (result u>= arg2)
    return result

int32_t eax_3
int32_t edx_4
edx_4:eax_3 = muls.dp.d(0x2e8ba2e9, esi - *arg1)
int32_t edx_5 = edx_4 s>> 3
int32_t ecx_2 = (edx_5 u>> 0x1f) + edx_5

if (0x5d1745d - ecx_2 u< arg2)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t eax_5
int32_t edx_6
edx_6:eax_5 = muls.dp.d(0x2e8ba2e9, ebp - *arg1)
int32_t edi_1 = arg2 + ecx_2
int32_t ecx_3 = 0
int32_t edx_7 = edx_6 s>> 3
int32_t esi_4 = (edx_7 u>> 0x1f) + edx_7
uint32_t eax_7 = esi_4 u>> 1

if (0x5d1745d - eax_7 u>= esi_4)
    ecx_3 = eax_7 + esi_4

if (ecx_3 u>= edi_1)
    edi_1 = ecx_3

return sub_45a420(arg1, edi_1)
