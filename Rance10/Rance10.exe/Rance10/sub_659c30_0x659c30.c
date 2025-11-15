// 函数: sub_659c30
// 地址: 0x659c30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (** eax_2)(void* arg1) = (**(arg1 + 4))(arg1, 1, 0xdc)
*(arg1 + 0x1b0) = eax_2
*eax_2 = sub_6596a0
eax_2[2] = sub_6583d0

if (*(arg1 + 0xc9) == 0)
    __builtin_memset(&eax_2[0x11], 0, 0x20)
    return eax_2

int32_t eax_6 = (**(arg1 + 4))(arg1, 1, *(arg1 + 0x24) << 8)
int32_t i = 0
int32_t edx = eax_6
*(arg1 + 0x8c) = edx

if (*(arg1 + 0x24) s> 0)
    do
        eax_6 = 0xffffffff
        i += 1
        __builtin_memset(edx, 0xffffffff, 0x100)
        edx += 0x100
    while (i s< *(arg1 + 0x24))

eax_2[0xc] = 0
eax_2[0xd] = 0
eax_2[0xe] = 0
eax_2[0xf] = 0
return eax_6
