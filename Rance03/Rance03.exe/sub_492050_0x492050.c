// 函数: sub_492050
// 地址: 0x492050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct IInterface::partsengine::CFlatData::VTable** result

if (*(arg1 + 0x6c) != 0)
    if (sub_4058a0(arg1 + 8, arg2) != 0)
        return 1
    
    if (sub_40d280(arg2, &data_74f614) == 0)
        sub_4954b0(*(arg1 + 0x70))
    label_4920b5:
        
        if (arg1 + 8 != arg2)
            sub_401ff0(arg1 + 8, arg2, 0, 0xffffffff)
        
        *(arg1 + 0x20) = 1
        return 1
    
    result = sub_48d240(*(arg1 + 0x6c), arg2)
    
    if (result != 0)
        sub_495610(*(arg1 + 0x70), result)
        (*result)->__offset(0x4).d()
        goto label_4920b5

result.b = 0
return result
