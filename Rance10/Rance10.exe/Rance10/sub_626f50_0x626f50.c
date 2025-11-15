// 函数: sub_626f50
// 地址: 0x626f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_627860(arg1 - 0x20, arg2) != 0)
    if (*(arg1 + 0x14) u> 0)
    label_626f6b:
        
        if (*(arg1 - 0xc) != 0)
            return *(*(arg1 - 0x10) + (arg2 << 2))
        
        return *(arg2 << 2)
    
    switch (*(arg1 + 0xc) - 0xc)
        case 0, 1, 8, 9, 0x33, 0x37
            goto label_626f6b
        case 6, 7, 0x27, 0x4d, 0x51
            if (*(arg1 - 0xc) != 0)
                return *(*(arg1 - 0x10) + (arg2 << 3))
            
            return *(arg2 << 3)

return 0xffffffff
