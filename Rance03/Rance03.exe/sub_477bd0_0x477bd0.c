// 函数: sub_477bd0
// 地址: 0x477bd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE result

if ((*(*arg1 + 0x1c))().b == 0 || arg2 u>= arg1[8])
    result.b = 0
    return result

int32_t edi_1 = arg1[9] + arg2

if (arg1[3] != 0xffffffff)
    result = sub_6052e0(&arg1[2], edi_1)
    
    if (result.b == 0)
        return result

arg1[0x12] = edi_1
result.b = 1
return result
