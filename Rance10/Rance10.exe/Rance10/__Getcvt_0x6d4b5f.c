// 函数: __Getcvt
// 地址: 0x6d4b5f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = 0
*arg1 = 0
int32_t eax
void* ecx_1
eax, ecx_1 = ____lc_codepage_func(__builtin_memset(&arg1[1], 0, 0x28))
*arg1 = eax
int32_t eax_1
int32_t ecx_2
eax_1, ecx_2 = ____mb_cur_max_func(ecx_1)
arg1[1] = eax_1
int32_t ecx_3
ecx_3.b = *(____lc_locale_name_func(ecx_2) + 8) == 0
arg1[2] = ecx_3

if (ecx_3 == 0)
    do
        if (__ismbblead(i.b) != 0)
            int32_t edx_2 = i s>> 3
            *(edx_2 + arg1 + 0xc) |= (1 << ((i & 7) u% 0x20)).b
        
        i += 1
    while (i s< 0x100)

return arg1
