// 函数: sub_6cf160
// 地址: 0x6cf160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = *arg1
*arg1 = *(edx + 8)
void* eax_1 = *(edx + 8)

if (*(eax_1 + 0xd) == 0)
    *(eax_1 + 4) = arg1

*(edx + 4) = arg1[1]
void* eax_3 = data_7fd4c4

if (arg1 == *(eax_3 + 4))
    *(eax_3 + 4) = edx
    *(edx + 8) = arg1
    arg1[1] = edx
    return eax_3

void** eax_4 = arg1[1]

if (arg1 != eax_4[2])
    *eax_4 = edx
    *(edx + 8) = arg1
    arg1[1] = edx
    return eax_4

eax_4[2] = edx
*(edx + 8) = arg1
arg1[1] = edx
return eax_4
