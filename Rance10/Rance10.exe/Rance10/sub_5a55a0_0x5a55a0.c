// 函数: sub_5a55a0
// 地址: 0x5a55a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = arg1[2]
int32_t edi = arg1[1]
void* result = (ecx - edi) s/ 0x1c

if (result u>= 1)
    return result

int32_t esi_2 = *arg1
int32_t edi_4 = (edi - esi_2) s/ 0x1c

if (0x9249249 - edi_4 u< 1)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t edi_5 = edi_4 + 1
int32_t ecx_2 = 0
int32_t esi_5 = (ecx - esi_2) s/ 0x1c
uint32_t eax_7 = esi_5 u>> 1

if (0x9249249 - eax_7 u>= esi_5)
    ecx_2 = eax_7 + esi_5

if (ecx_2 u>= edi_5)
    edi_5 = ecx_2

return sub_58fab0(arg1, edi_5)
