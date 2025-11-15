// 函数: sub_65b040
// 地址: 0x65b040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
void* (** result)(int32_t* arg1, int32_t arg2) = (*arg1[1])(arg1, 1, 0x50)
arg1[0x67] = result
*result = sub_65ade0
int32_t ebx_1

if (*(arg1[0x6e] + 8) == 0)
    ebx_1 = arg1[0x49]
else
    if (arg1[0x49] s< 2)
        *(*arg1 + 0x14) = 0x30
        (**arg1)(arg1)
    
    sub_65aa60(arg1)
    ebx_1 = arg1[0x49] + 2

int32_t i = 0

if (arg1[9] s> 0)
    void* edi_1 = arg1[0x31] + 0xc
    void* (** var_4)(int32_t* arg1, int32_t arg2) = &result[2]
    
    do
        arg1[0x49]
        result = (*(arg1[1] + 8))(arg1, 1, *(edi_1 + 0x18) * *(edi_1 + 0x10), 
            divs.dp.d(sx.q(*(edi_1 + 0x1c) * *edi_1), arg1[0x49]) * ebx_1)
        void* (*** ecx_3)(int32_t* arg1, int32_t arg2) = var_4
        edi_1 += 0x58
        i += 1
        *ecx_3 = result
        var_4 = &ecx_3[1]
    while (i s< arg1[9])

return result
