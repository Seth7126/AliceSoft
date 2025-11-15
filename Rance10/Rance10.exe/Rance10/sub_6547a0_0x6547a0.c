// 函数: sub_6547a0
// 地址: 0x6547a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result_1 = arg1

if (arg1[5] != 0xcd)
    *(*arg1 + 0x14) = 0x15
    *(*arg1 + 0x18) = arg1[5]
    (**arg1)(arg1)

int32_t eax_5 = arg1[0x1e]

if (eax_5 u>= arg1[0x18])
    *(*arg1 + 0x14) = 0x7e
    (*(*arg1 + 4))(arg1, 0xffffffff)
    return 0

void* ecx_1 = arg1[2]

if (ecx_1 != 0)
    *(ecx_1 + 4) = eax_5
    *(arg1[2] + 8) = arg1[0x18]
    (*arg1[2])(arg1)

void* eax_13 = arg1[0x67]
result_1 = nullptr
(*(eax_13 + 4))(arg1, arg2, &result_1, 1)
int32_t* result = result_1
arg1[0x1e] += result
return result
