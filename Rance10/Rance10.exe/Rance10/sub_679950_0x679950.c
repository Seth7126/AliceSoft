// 函数: sub_679950
// 地址: 0x679950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg1[1]

if (arg2 s< 0 || arg2 s>= 2)
    *(*arg1 + 0x14) = 0xf
    *(*arg1 + 0x18) = arg2
    (**arg1)(arg1)

if (arg2 == 1)
    for (void* i = *(ebx + 0x44); i != 0; i = *(i + 0x24))
        if (*(i + 0x22) != 0)
            *(i + 0x22) = 0
            (*(i + 0x30))(arg1, i + 0x28)
    
    void* i_1 = *(ebx + 0x48)
    *(ebx + 0x44) = 0
    
    for (; i_1 != 0; i_1 = *(i_1 + 0x24))
        if (*(i_1 + 0x22) != 0)
            *(i_1 + 0x22) = 0
            (*(i_1 + 0x30))(arg1, i_1 + 0x28)
    
    *(ebx + 0x48) = 0

int32_t* i_4 = *(ebx + (arg2 << 2) + 0x3c)
*(ebx + (arg2 << 2) + 0x3c) = 0

if (i_4 != 0)
    int32_t* i_2
    
    do
        i_2 = *i_4
        int32_t esi_2 = i_4[1] + i_4[2] + 0x10
        _free(i_4)
        *(ebx + 0x4c) -= esi_2
        i_4 = i_2
    while (i_2 != 0)

int32_t* i_5 = *(ebx + (arg2 << 2) + 0x34)
*(ebx + (arg2 << 2) + 0x34) = 0

if (i_5 == 0)
    return 

int32_t* i_3

do
    i_3 = *i_5
    int32_t esi_4 = i_5[1] + i_5[2] + 0x10
    _free(i_5)
    *(ebx + 0x4c) -= esi_4
    i_5 = i_3
while (i_3 != 0)
