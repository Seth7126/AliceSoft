// 函数: sub_64ad40
// 地址: 0x64ad40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result_1 = arg1
int32_t edi = 1

if (arg1[5] != 0x65)
    *(*arg1 + 0x14) = 0x15
    *(*arg1 + 0x18) = arg1[5]
    (**arg1)(arg1)

if (arg1[0x3e] u>= arg1[8])
    *(*arg1 + 0x14) = 0x7e
    (*(*arg1 + 4))(arg1, 0xffffffff)

void* ecx = arg1[2]

if (ecx != 0)
    *(ecx + 4) = arg1[0x3e]
    *(arg1[2] + 8) = arg1[8]
    (*arg1[2])(arg1)

void* eax_13 = arg1[0x5e]

if (*(eax_13 + 0xc) != 0)
    (*(eax_13 + 4))(arg1)

int32_t eax_16 = arg1[8] - arg1[0x3e]
result_1 = nullptr

if (eax_16 u< 1)
    edi = eax_16

(*(arg1[0x5f] + 4))(arg1, arg2, &result_1, edi)
int32_t* result = result_1
arg1[0x3e] += result
return result
