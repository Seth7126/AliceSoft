// 函数: sub_424210
// 地址: 0x424210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *arg1
int32_t var_8

if (arg2 s< 0)
    arg1[0x3b] = arg2
    var_8 = arg2
else
    arg1[0x3b] = arg2 + 2
    var_8 = arg2 + 2

(*(eax + 0x9c))(var_8)
sub_42bf70(arg1, arg1[0x3b], 1)
InvalidateRect(arg1[0x17], nullptr, 1)
return UpdateWindow(arg1[0x17])
