// 函数: sub_49c930
// 地址: 0x49c930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = arg2 & 0xfff0

if (eax_1 != 0xf020 && eax_1 != 0xf120)
    return DefWindowProcA(arg1, 0x112, arg2, arg3)

PostMessageA(GetParent(arg1), 0x112, arg2, arg3)
PostMessageA(arg1, 0x7fff, 0, 0)
return 0
