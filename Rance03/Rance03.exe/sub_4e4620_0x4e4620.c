// 函数: sub_4e4620
// 地址: 0x4e4620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
void* eax = *(arg1 + 0x14)

if (eax != 0)
    var_4 = *(eax + 8)
    return sub_4158d0(arg2, &var_4)

var_4 = 0xffffffff
return sub_4158d0(arg2, &var_4)
