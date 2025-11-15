// 函数: sub_487b30
// 地址: 0x487b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 u>= 0xc)
    char eax = *arg1
    
    if (eax == 0x4f && arg1[1] == 0x67 && arg1[2] == 0x67)
        return 1
    
    if (eax == 0x52 && arg1[1] == 0x49 && arg1[2] == 0x46 && arg1[3] == 0x46 && arg1[8] == 0x57
            && arg1[9] == 0x41 && arg1[0xa] == 0x56 && arg1[0xb] == 0x45)
        return 0

return 0xffffffff
