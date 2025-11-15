// 函数: sub_67a700
// 地址: 0x67a700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** (* (** eax_2)(int32_t* arg1))(void* arg1, int32_t* arg2, void** arg3, int32_t arg4) =
    (*arg1[1])(arg1, 1, 0x58)
arg1[0x70] = eax_2
*eax_2 = sub_67a600
eax_2[2] = sub_4033e0
eax_2[3] = sub_67a6e0
eax_2[0x11] = 0
eax_2[0xd] = 0

if (arg1[0x19] s> 4)
    *(*arg1 + 0x14) = 0x39
    *(*arg1 + 0x18) = 4
    (**arg1)(arg1)

if (arg1[0x15] s> 0x100)
    *(*arg1 + 0x14) = 0x3b
    *(*arg1 + 0x18) = 0x100
    (**arg1)(arg1)

sub_679cc0(arg1)
int32_t result = sub_679e20(arg1)

if (arg1[0x13] != 2)
    return result

return sub_67a5c0(arg1) __tailcall
