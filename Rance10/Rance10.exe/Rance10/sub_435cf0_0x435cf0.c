// 函数: sub_435cf0
// 地址: 0x435cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[0x10f].b != 0)
    if (arg1[0x110] == 0)
        sub_436270(arg1, arg1[0x10d])
    
    int32_t* eax_1 = arg1[0x110]
    
    if (eax_1 != 0)
        return sub_435e90(arg2, eax_1)

sub_436040(arg1)
EnterCriticalSection(arg1[6] + 4)

if (arg1[0x27a] != 0 && sub_435fc0(arg1) s>= *(*arg1[0x279] + 0x10))
    int16_t* esi_3 = *(*arg1[0x279] + 0x14)
    LeaveCriticalSection(arg1[6] + 4)
    return sub_435dc0(arg1, arg2, esi_3)

LeaveCriticalSection(arg1[6] + 4)
return sub_435e90(arg2, arg1[0x110])
