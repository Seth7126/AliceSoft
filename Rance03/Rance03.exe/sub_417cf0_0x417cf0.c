// 函数: sub_417cf0
// 地址: 0x417cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
data_75d4a8 = arg3
bool cond:0 = *(arg1 + 0xc) == 0
*(arg1 + 0x9c) = arg3 - 1
BOOL result = data_75d4b0
*(arg1 + 0x98) = arg2
data_75d4b0 = arg2

if (cond:0)
    return result

if (result != arg2)
    sub_417c00(arg1)

sub_417c60(arg1, arg3)
InvalidateRect(*(arg1 + 0xc), nullptr, 1)
return UpdateWindow(*(arg1 + 0xc))
