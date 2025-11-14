// 函数: sub_412460
// 地址: 0x412460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = GetWindowLongA(arg1, 0xffffffeb)

if (arg2 == 0x81)
    int32_t* lParam = arg4
    SetWindowLongA(arg1, 0xffffffeb, *lParam)
    return DefWindowProcA(arg1, 0x81, arg3, lParam)

if (eax != 0)
    if (arg2 == 0xf)
        sub_4124f0(eax, arg1)
        return 0
    
    if (arg2 == 1)
        return 0
    
    if (arg2 == 2)
        return arg2 - 2
    
    if (arg2 == 0x201)
        DestroyWindow(arg1)
        return 0

return DefWindowProcA(arg1, arg2, arg3, arg4)
