// 函数: sub_652500
// 地址: 0x652500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3[5] != 0x64)
    *(*arg3 + 0x14) = 0x15
    *(*arg3 + 0x18) = arg3[5]
    (**arg3)(arg3)

void* ebx_1 = &arg3[arg2]

if (arg3[arg2 + 0x16] == 0)
    void* eax_6 = (*arg3[1])(arg3, 0, 0x82)
    *(eax_6 + 0x80) = 0
    *(ebx_1 + 0x58) = eax_6

int32_t* edi_1 = arg4

for (int16_t* i = nullptr; i s< 0x80; i = &i[1])
    int32_t eax_7
    int32_t edx
    edx:eax_7 = muls.dp.d(0x51eb851f, *edi_1 * arg5 + 0x32)
    int32_t edx_1 = edx s>> 5
    int32_t eax_10 = (edx_1 u>> 0x1f) + edx_1
    
    if (eax_10 s<= 0)
        eax_10 = 1
    else if (eax_10 s> 0x7fff || eax_10 s> 0xff)
        eax_10 = 0xff
    
    edi_1 = &edi_1[1]
    *(i + *(ebx_1 + 0x58)) = eax_10.w

void* result = *(ebx_1 + 0x58)
*(result + 0x80) = 0
return result
