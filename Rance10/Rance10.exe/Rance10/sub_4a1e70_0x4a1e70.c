// 函数: sub_4a1e70
// 地址: 0x4a1e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_41ac20(arg2, 0x760e4c) != 0)
    return arg1 + 0x28

if (sub_41ac20(arg2, 0x760dbc) != 0)
    return arg1 + 0x1c

if (sub_41ac20(arg2, 0x760eec) != 0)
    return arg1 + 0xb4

if (sub_41ac20(arg2, 0x760e6c) != 0)
    return arg1 + 0x34

if (sub_41ac20(arg2, 0x760e7c) != 0)
    return sub_4a2c80(arg1 - 4)

if (sub_41ac20(arg2, 0x760ecc) != 0)
    return arg1 + 0x110

if (sub_41ac20(arg2, 0x760ddc) != 0)
    return arg1 + 0x2ac

if (sub_41ac20(arg2, 0x760e1c) != 0)
    return arg1 + 0x13c

if (sub_41ac20(arg2, 0x760eac) != 0)
    return arg1 + 0x148

if (sub_41ac20(arg2, 0x760e9c) != 0)
    int32_t* ecx_11 = *(arg1 + 0x1d0)
    
    if (ecx_11 != 0)
        (**ecx_11)()
        return *(arg1 + 0x1d0)
    
    return 0

if (sub_41ac20(arg2, 0x760dec) != 0)
    return arg1 + 0x1d4

if (sub_41ac20(arg2, 0x760e2c) != 0)
    return arg1 + 0x1dc

if (sub_41ac20(arg2, 0x760dcc) != 0)
    return arg1 + 0x1e4

if (sub_41ac20(arg2, 0x760edc) != 0)
    return arg1 + 0x1c4

if (sub_41ac20(arg2, 0x760e5c) != 0)
    return arg1 + 0x154

int32_t* i = *(arg1 + 0x270)

for (int32_t edi_1 = *(arg1 + 0x274); i != edi_1; i = &i[0xc])
    int32_t* ecx_17 = *i
    
    if (ecx_17 != 0)
        int32_t result = (*(*ecx_17 + 0x1c))(arg2)
        
        if (result != 0)
            return result

return 0
