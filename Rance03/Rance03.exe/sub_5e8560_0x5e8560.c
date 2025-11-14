// 函数: sub_5e8560
// 地址: 0x5e8560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[0x17].b != arg2)
    arg1[0x17].b = arg2
    int32_t ecx = 0
    
    if (arg2 != 0)
        ecx = 2
    
    *(arg1[0x87] + 4) = ecx
    
    if ((*arg1[0x72])() != 0)
        sub_5e5700(arg1)
        Sleep(0xc8)
        sub_5e5610(arg1)

return 1
