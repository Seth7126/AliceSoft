// 函数: sub_4d6840
// 地址: 0x4d6840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1

if (arg2 != 0)
    int32_t eax
    eax.b = *(arg1 + 4) != 0
    var_4 = eax
    sub_4158d0(arg1 + 8, &var_4)
    *(arg1 + 4) = 0
    sub_4158d0(arg1 + 0x28, arg1 + 0x20)
    sub_4158d0(arg1 + 0x34, arg1 + 0x24)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
    sub_4bd8b0(arg1 + 0x40)
    sub_4bd8b0(arg1 + 0x5c)
    int32_t var_14_4 = arg2.d
    int32_t var_18 = sub_4d9440(arg1 + 0xa0, arg1 + 0x94)
    char ecx_8 = sub_4d98b0(*(arg1 + 0x94), *(arg1 + 0x98))
    *(arg1 + 0x98) = *(arg1 + 0x94)
    int32_t __saved_esi = arg2.d
    return sub_4a6410(arg1 + 0x104, ecx_8)

int32_t eax_3 = *(arg1 + 8)

if (eax_3 != *(arg1 + 0xc))
    eax_3.b = *(eax_3 + ((*(arg1 + 0xc) - eax_3) s>> 2 << 2) - 4) == 1
    *(arg1 + 4) = eax_3.b
    *(arg1 + 0xc) -= 4

int32_t eax_4 = *(arg1 + 0x28)

if (eax_4 != *(arg1 + 0x2c))
    *(arg1 + 0x20) = *(eax_4 + ((*(arg1 + 0x2c) - eax_4) s>> 2 << 2) - 4)
    *(arg1 + 0x2c) -= 4

int32_t eax_6 = *(arg1 + 0x34)

if (eax_6 != *(arg1 + 0x38))
    *(arg1 + 0x24) = *(eax_6 + ((*(arg1 + 0x38) - eax_6) s>> 2 << 2) - 4)
    *(arg1 + 0x38) -= 4

sub_4bd8f0(arg1 + 0x40)
sub_4bd8f0(arg1 + 0x5c)
sub_4d8940(arg1 + 0x90)
int32_t __saved_esi_1 = arg2.d
return sub_4a6410(arg1 + 0x104, (arg1 + 0x90).b)
