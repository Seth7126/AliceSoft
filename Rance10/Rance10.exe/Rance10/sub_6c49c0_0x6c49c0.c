// 函数: sub_6c49c0
// 地址: 0x6c49c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax_7 = zx.d(arg3)

if (eax_7 == 1)
    EndDialog(arg2, 1)
else
    if (eax_7 == 2)
        EndDialog(arg2, 0)
        return 0
    
    if (eax_7 == 0x7d2)
        char var_4 = (eax_7 - 2).b + 0x30
        struct win32only::CClipboard::VTable* const var_8 = &win32only::CClipboard::`vftable'
        sub_6ccc30(&var_8, arg1 + 0x20)

return 0
