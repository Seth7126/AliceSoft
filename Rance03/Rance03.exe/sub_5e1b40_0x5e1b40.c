// 函数: sub_5e1b40
// 地址: 0x5e1b40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = arg2 & 0xfff0

if (eax_1 != 0xf020 && eax_1 != 0xf120)
    return DefWindowProcA(arg1, 0x112, arg2, arg3)

PostMessageA(GetParent(arg1), 0x112, arg2, arg3)
PostMessageA(arg1, 0x7fff, 0, 0)
return 0
