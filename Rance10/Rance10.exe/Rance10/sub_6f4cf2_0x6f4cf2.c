// 函数: sub_6f4cf2
// 地址: 0x6f4cf2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1

if (arg2[4].b != 0)
    sub_6fca1c(arg2)

int32_t edi = *(arg1 + 0x88)
int32_t ebx = *(arg1 + 0x8c)
int32_t eax_1 = *(arg1 + 0x10)
*(arg1 + 0x10) -= 1
int32_t result = eax_1 - 1

if (eax_1 == 1)
    result = sub_6ea04f(arg1 + 0x3c)

if (edi != 0)
    j_sub_4033e0()
    result = edi(ebx)

return result
