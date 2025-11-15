// 函数: sub_643200
// 地址: 0x643200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg1
int32_t ebx = arg1
int32_t edi_2 = (arg2 - ebx) s>> 2

if (edi_2 s< 2)
    return 

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(edi_2)
int32_t i = (eax_2 - edx) s>> 1

while (i s> 0)
    int32_t eax_3 = *(ebx + (i << 2) - 4)
    i -= 1
    int32_t var_14_1 = arg1
    var_4 = eax_3
    int32_t eax
    eax, arg1 = sub_643600(&var_4, i, ebx, edi_2, &var_4)
