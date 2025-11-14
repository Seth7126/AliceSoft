// 函数: sub_441180
// 地址: 0x441180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg2
arg2 = (*(edi + 4) - *edi) s>> 4
sub_4158d0(arg1, &arg2)

for (int32_t i = *edi; i != *(edi + 4); i += 0x10)
    if (sub_43f860(i, arg1) == 0)
        return 0

return 1
