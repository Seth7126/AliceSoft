// 函数: sub_652420
// 地址: 0x652420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* (** eax_2)(int32_t* arg1) = (*arg1[1])(arg1, 1, 0x20)
arg1[0x5e] = eax_2
*eax_2 = sub_6521d0
eax_2[1] = sub_652380
eax_2[2] = sub_6523b0
*(eax_2 + 0xd) = 0
sub_6516d0(arg1)

if (arg1[0x33] == 0)
    arg1[0x3f].b = 0
    arg1[0x32] = 1
else
    sub_651a90(arg1)
    
    if (arg1[0x5b] s< 8)
        sub_651e70(arg1)

if (*(arg1 + 0xd2) != 0)
    *(arg1 + 0xd1) = 0
else if (*(arg1 + 0xd1) == 0)
    if (arg1[0x3f].b != 0)
        *(arg1 + 0xd2) = 1
    else
        int32_t eax_3 = arg1[0x5b]
        
        if (eax_3 s> 1 && eax_3 s< 8)
            *(arg1 + 0xd2) = 1

eax_2[4] = 0
eax_2[7] = 0
eax_2[5] = 0
int32_t result = arg1[0x32]

if (*(arg1 + 0xd2) != 0)
    result *= 2

eax_2[6] = result
return result
