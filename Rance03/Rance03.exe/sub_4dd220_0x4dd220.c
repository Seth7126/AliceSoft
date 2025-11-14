// 函数: sub_4dd220
// 地址: 0x4dd220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_485c10(arg1 + 4, arg2, 0)
int32_t* result = sub_4dfc00()

if (result.b != 0)
label_4dd2d1:
    
    if (arg2 == 0x10)
        *(arg1 + 0x90) = 0
else
    result = sub_4c75f0(arg1 + 0xa4)
    
    if (arg2 != 1)
        if (arg2 != 0x10)
            if (arg2 == 0x11)
                *(arg1 + 0x91) = 0
                return result
            
            if (arg2 != 0xd)
                goto label_4dd2d1
            
            result.b = *(arg1 + 0x1bb)
            *(arg1 + 0x1bc) = result.b
            *(arg1 + 0x1bb) = 0
            return result
        
        if (*(arg1 + 0x94) == result)
            *(arg1 + 0x94) = 0xffffffff
            *(arg1 + 0x98) = 0xffffffff
            *(arg1 + 0x90) = 0
            return result
        
        *(arg1 + 0x90) = 0
    else if (*(arg1 + 0x94) == result)
        *(arg1 + 0x94) = 0xffffffff
        *(arg1 + 0x98) = 0xffffffff

return result
