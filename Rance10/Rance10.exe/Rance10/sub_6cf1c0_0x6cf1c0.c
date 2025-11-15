// 函数: sub_6cf1c0
// 地址: 0x6cf1c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = *(arg1 + 8)
*(arg1 + 8) = *edx
void* eax_1 = *edx

if (*(eax_1 + 0xd) == 0)
    *(eax_1 + 4) = arg1

edx[1] = *(arg1 + 4)
void* eax_3 = data_7fd4c4

if (arg1 == *(eax_3 + 4))
    *(eax_3 + 4) = edx
    *edx = arg1
    *(arg1 + 4) = edx
    return eax_3

int32_t** eax_4 = *(arg1 + 4)

if (arg1 != *eax_4)
    eax_4[2] = edx
    *edx = arg1
    *(arg1 + 4) = edx
    return eax_4

*eax_4 = edx
*edx = arg1
*(arg1 + 4) = edx
return eax_4
