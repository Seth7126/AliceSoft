// 函数: sub_64b060
// 地址: 0x64b060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = zx.d(arg3)

if (eax s<= 0x9cd2)
    if (eax == 0x9cd2)
        EndDialog(arg2, 0)
        return 0
    
    if (eax s> 0)
        if (eax s<= 2)
            EndDialog(arg2, 0)
            return 0
        
        if (eax == 0x9cd0)
            EndDialog(arg2, 1)
else if (eax == 0x9cd4)
    struct win32only::CClipboard::VTable* const var_8 = &win32only::CClipboard::`vftable'
    char var_4_1 = 0
    sub_696f50(&var_8, arg1 + 0x20)

return 0
