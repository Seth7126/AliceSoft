// 函数: sub_5f9370
// 地址: 0x5f9370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg2
arg2.b = (*(*esi + 0x9c))()
char result = sub_5f9650(arg1, arg5, arg1 + 0x2c, 1, arg2)

if (result == 0)
    return result

if (sub_5f9650(arg1, arg5, arg1 + 0x14, 0, arg2) != 0 && (*(*arg4 + 0x2c))(0, 0, 0, 1) != 0
        && sub_5f98f0(esi, arg1 + 0x2c) != 0 && (*(*arg3 + 0x2c))(0, 0, 0, 1) != 0
        && sub_5f98f0(esi, arg1 + 0x14) != 0)
    return 1

return 0
