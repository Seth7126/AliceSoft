// 函数: sub_438540
// 地址: 0x438540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_412de0(arg2 + 0x38, arg2 + 0x2c)

if (sub_4383c0(arg1, arg2) == 0)
    int32_t eax_1 = *(arg2 + 0x38)
    
    if (eax_1 != *(arg2 + 0x3c))
        *(arg2 + 0x2c) = *(eax_1 + ((*(arg2 + 0x3c) - eax_1) s>> 2 << 2) - 4)
        *(arg2 + 0x3c) -= 4
    
    sub_412de0(arg2 + 0x38, arg2 + 0x2c)
    
    if (sub_438470(arg1, arg2) == 0)
        int32_t result = *(arg2 + 0x38)
        
        if (result != *(arg2 + 0x3c))
            *(arg2 + 0x2c) = *(result + ((*(arg2 + 0x3c) - result) s>> 2 << 2) - 4)
            *(arg2 + 0x3c) -= 4
        
        result.b = 0
        return result

*(arg2 + 0x3c) -= 4
return 1
