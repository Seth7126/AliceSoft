// 函数: sub_49e1d0
// 地址: 0x49e1d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
char result = *(arg1 + 0xa4)
var_4:3.b = result

if (result != arg2.b)
    int32_t* ecx = *(arg1 + 0x260)
    *(arg1 + 0xa4) = arg2.b
    
    if (ecx != 0)
        (**ecx)()
        result = var_4:3.b
    
    if (result != arg2.b)
        sub_485d80(arg1 + 0x270, arg2, 0)
        result = var_4:3.b

if (result == *(arg1 + 0xa4))
    return result

return sub_485d80(arg1 + 8, arg2, 0)
