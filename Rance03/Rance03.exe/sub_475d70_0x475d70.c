// 函数: sub_475d70
// 地址: 0x475d70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char eax = *arg1

if (eax == 0x4f && arg1[1] == 0x67 && arg1[2] == 0x67)
    return 1

if (eax == 0x52 && arg1[1] == 0x49 && arg1[2] == 0x46 && arg1[3] == 0x46 && arg1[8] == 0x57
        && arg1[9] == 0x41 && arg1[0xa] == 0x56 && arg1[0xb] == 0x45)
    return 0

return 0xffffffff
