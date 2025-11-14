// 函数: sub_1000c3d0
// 地址: 0x1000c3d0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg1[5] != 0)
    bool cond:0_1 = arg1[0x1b] != 0
    arg1[0x1c] = 1
    
    if (not(cond:0_1))
        SetEvent(arg1[0x17])
        
        if (arg1[0x19] != 0)
            (*(*arg1 + 0x60))()

return 0
