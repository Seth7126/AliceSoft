// 函数: sub_489f70
// 地址: 0x489f70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE result

if ((*(*arg1 + 0x1c))().b == 0 || arg2 u>= arg1[8])
    result.b = 0
    return result

int32_t edi_1 = arg1[9] + arg2

if (arg1[3] != 0xffffffff)
    result = sub_67f580(&arg1[2], edi_1)
    
    if (result.b == 0)
        return result

arg1[0x12] = edi_1
result.b = 1
return result
