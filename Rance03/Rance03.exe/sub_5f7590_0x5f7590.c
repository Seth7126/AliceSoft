// 函数: sub_5f7590
// 地址: 0x5f7590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x14) = arg3
*(arg1 + 0x18) = arg4
int32_t result = (*(*arg2 + 0x54))()
*(arg1 + 4) = result

if (result != 0 && sub_5f7620(arg1).b != 0)
    result = (*(*arg2 + 0x54))()
    *(arg1 + 8) = result
    
    if (result != 0 && sub_5f76f0(arg1).b != 0)
        result.b = 1
        return result

result.b = 0
return result
