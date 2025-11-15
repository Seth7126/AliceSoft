// 函数: __Getctype
// 地址: 0x6d4880
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx
*arg1 = ____lc_codepage_func(ecx)
int32_t eax_1 = __calloc_base(0x100, 2)
arg1[1] = eax_1
int32_t ecx_1

if (eax_1 == 0)
    int32_t eax_3
    eax_3, ecx_1 = ___pctype_func(2)
    arg1[2] = 0
    arg1[1] = eax_3
else
    int32_t eax_2 = ___pctype_func(2)
    int32_t edi_1 = arg1[1]
    arg1[2] = 1
    ecx_1 = __builtin_memcpy(edi_1, eax_2, 0x200)

int16_t* eax_5 = *(____lc_locale_name_func(ecx_1) + 4)
arg1[3] = eax_5

if (eax_5 != 0)
    arg1[3] = sub_70e100(eax_5)

return arg1
