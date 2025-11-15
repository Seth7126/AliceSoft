// 函数: sub_523560
// 地址: 0x523560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[0x25] == 0)
    return 

void* eax_1 = arg1[4]

if (eax_1 != 0)
    eax_1 = *(eax_1 + 0x118)

int32_t* ebx_1 = arg1[2]

if (eax_1 == ebx_1)
    ebx_1 = arg1[3]

if (arg1[4] == 0)
    sub_54d770(&arg1[4])

sub_450940(arg1[4], ebx_1)
*(arg1 + 0x26) = 0

if (sub_435cf0(arg1[0x25], ebx_1) == 0)
    sub_54f290(&arg1[4], 0, 0, 
        (*(*arg1 + 0x28))((*(*arg1 + 0x2c))(arg1[0x28], arg1[0x29], arg1[0x2a])))
