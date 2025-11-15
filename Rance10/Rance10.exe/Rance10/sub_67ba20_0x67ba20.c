// 函数: sub_67ba20
// 地址: 0x67ba20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void (** eax_2)(int32_t* arg1, char arg2) = (*arg1[1])(arg1, 1, 0x2c)
arg1[0x70] = eax_2
*eax_2 = sub_67b900
eax_2[3] = sub_67ba10
eax_2[8] = 0
eax_2[0xa] = 0

if (arg1[0x19] != 3)
    *(*arg1 + 0x14) = 0x30
    (**arg1)(arg1)

eax_2[6] = (*arg1[1])(arg1, 1, 0x80)
int32_t result

for (int32_t* i = nullptr; i s< 0x80; i = &i[1])
    result = (*(arg1[1] + 4))(arg1, 1, 0x1000)
    *(i + eax_2[6]) = result

eax_2[7].b = 1

if (*(arg1 + 0x5a) == 0)
    eax_2[4] = 0
else
    int32_t ebx = arg1[0x15]
    
    if (ebx s< 8)
        *(*arg1 + 0x14) = 0x3a
        *(*arg1 + 0x18) = 8
        (**arg1)(arg1)
    
    if (ebx s> 0x100)
        *(*arg1 + 0x14) = 0x3b
        *(*arg1 + 0x18) = 0x100
        (**arg1)(arg1)
    
    result = (*(arg1[1] + 8))(arg1, 1, ebx, 3)
    eax_2[4] = result
    eax_2[5] = ebx

if (arg1[0x13] != 0)
    arg1[0x13] = 2

if (arg1[0x13] != 2)
    return result

eax_2[8] = (*(arg1[1] + 4))(arg1, 1, (arg1[0x17] + 2) * 6)
return sub_67b840(arg1) __tailcall
