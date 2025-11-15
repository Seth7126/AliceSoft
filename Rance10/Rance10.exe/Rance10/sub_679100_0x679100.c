// 函数: sub_679100
// 地址: 0x679100
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = arg3
int32_t* eax = arg1[1]

if (edi u> 0x3b9ac9f0)
    *(*arg1 + 0x14) = 0x38
    *(*arg1 + 0x18) = 3
    (**arg1)(arg1)

int32_t ecx_1 = edi & 7

if (ecx_1 u> 0)
    edi += 8 - ecx_1

if (arg2 s< 0 || arg2 s>= 2)
    *(*arg1 + 0x14) = 0xf
    *(*arg1 + 0x18) = arg2
    (**arg1)(arg1)

int32_t var_14_3 = edi + 0x10
int32_t* eax_11 = sub_705e22()

if (eax_11 == 0)
    *(*arg1 + 0x14) = 0x38
    *(*arg1 + 0x18) = 4
    (**arg1)(arg1)

eax[0x13] += edi + 0x10
int32_t eax_15 = eax[arg2 + 0xf]
eax_11[1] = edi
*eax_11 = eax_15
eax_11[2] = 0
eax[arg2 + 0xf] = eax_11
return &eax_11[4]
