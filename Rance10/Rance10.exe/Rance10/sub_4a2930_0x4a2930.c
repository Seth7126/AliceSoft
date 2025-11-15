// 函数: sub_4a2930
// 地址: 0x4a2930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax

if (arg2 u> 6)
    eax.b = 0
    return eax

switch (arg2)
    case 0
        eax.b = arg3 != 0
        sub_4a2de0(arg1, eax.b)
        int32_t eax_2
        eax_2.b = 1
        return eax_2
    case 1
        if (*(arg1 + 0x80) == arg3)
            eax.b = 1
            return eax
        
        *(arg1 + 0x80) = arg3
        (*(*(arg1 + 4) + 0x44))()
        int32_t eax_4
        eax_4.b = 1
        return eax_4
    case 2
        eax.b = arg3 != 0
        sub_4a2e40(arg1, eax.b)
        int32_t eax_6
        eax_6.b = 1
        return eax_6
    case 3
        eax.b = arg3 != 0
        *(arg1 + 0x85) = eax.b
        
        if (arg3 == 0)
            eax.b = 1
            return eax
        
        sub_4a2e90(arg1)
        BOOL eax_7
        eax_7.b = 1
        return eax_7
    case 4
        eax.b = arg3 != 0
        *(arg1 + 0x86) = eax.b
        eax.b = 1
        return eax
    case 5
        eax.b = arg3 != 0
        *(arg1 + 0x87) = eax.b
        eax.b = 1
        return eax
    case 6
        eax.b = arg3 != 0
        *(arg1 + 0x88) = eax.b
        eax.b = 1
        return eax
