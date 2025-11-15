// 函数: sub_480780
// 地址: 0x480780
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = data_7fcca0
int32_t esi = data_7fcc9c
int32_t result = (ebx - esi) s/ 0x34

if (result u>= 1)
    return result

int32_t ecx_2 = data_7fcc98
int32_t edi_3 = (esi - ecx_2) s/ 0x34

if (0x4ec4ec4 - edi_3 u< 1)
    sub_6d0927("vector<T> too long")
    noreturn

int32_t edi_4 = edi_3 + 1
int32_t ecx_3 = 0
int32_t esi_4 = (ebx - ecx_2) s/ 0x34
uint32_t eax_7 = esi_4 u>> 1

if (0x4ec4ec4 - eax_7 u>= esi_4)
    ecx_3 = eax_7 + esi_4

if (ecx_3 u>= edi_4)
    edi_4 = ecx_3

return sub_480820(edi_4)
