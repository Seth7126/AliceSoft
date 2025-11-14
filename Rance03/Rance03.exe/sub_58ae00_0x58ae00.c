// 函数: sub_58ae00
// 地址: 0x58ae00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = *(*(arg1 + 4) + 0x168)

if (result != 3)
    if (result == 2)
        goto label_58ae23
else if (*(arg1 + 0x12c) == 0)
    result = 2
label_58ae23:
    
    if (*(arg1 + 0x12b) == 0)
        result = 1

*(arg1 + 0x124) = result
return result
