// 函数: sub_693c00
// 地址: 0x693c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*(arg1 + 0x30) = 0
*(arg1 + 0x32) = 0

if (arg1 + 0x34 != arg2)
    sub_401ff0(arg1 + 0x34, arg2, 0, 0xffffffff)

int32_t i_1 = arg5
*(arg1 + 0x24) = arg7
*(arg1 + 0x1c) = arg3
*(arg1 + 0x20) = arg4
*(arg1 + 0x4c) = arg8
sub_533450(arg1 + 0x80, i_1)

if (i_1 != 0)
    int32_t edi_1 = 0
    int32_t i
    
    do
        sub_42f470(*(arg1 + 0x80) + edi_1, arg6)
        edi_1 += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)
    i_1 = arg5

int32_t var_1c_2 = arg6
sub_693e80(arg1, sub_693cb0(arg1, i_1))
return sub_694050(arg1, i_1, arg6)
