// 函数: ?__acrt_fp_classify@@YA?AW4__acrt_fp_class@@ABN@Z
// 地址: 0x7166ed
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *arg1
int32_t esi = arg1[1]
int32_t edi
int32_t var_10 = edi

if ((esi u>> 0x14 & 0x7ff) != 0x7ff)
    return 0

int32_t edi_2 = esi & 0xfffff
int32_t eax_5 = ebx | edi_2

if (eax_5 == 0)
    return eax_5 + 1

if ((esi & 0x80000000) != 0 && ebx == 0 && edi_2 == 0x80000)
    return 4

if ((esi & 0x80000) == 0)
    return 3

return 2
