// 函数: sub_5fc9a0
// 地址: 0x5fc9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg1[2]
int32_t edi = arg1[1]
void* result = (ebp - edi) s/ 0x38

if (result u>= arg2)
    return result

int32_t ecx_2 = (edi - *arg1) s/ 0x38

if (0x4924924 - ecx_2 u< arg2)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t edi_2 = ecx_2 + arg2
int32_t ecx_3 = 0
int32_t esi_5 = (ebp - *arg1) s/ 0x38
uint32_t eax_7 = esi_5 u>> 1

if (0x4924924 - eax_7 u>= esi_5)
    ecx_3 = eax_7 + esi_5

if (ecx_3 u>= edi_2)
    edi_2 = ecx_3

return sub_5fcb90(arg1, edi_2)
