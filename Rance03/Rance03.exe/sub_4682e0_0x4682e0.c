// 函数: sub_4682e0
// 地址: 0x4682e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t result = arg1
int32_t result_1 = sub_69adc6(0x30)

if (result_1 == 0)
    result_1 = 0
else
    *result_1 = &exfile::CDefineDataTree::`vftable'
    *(result_1 + 0x18) = 0xf
    *(result_1 + 0x14) = 0
    *(result_1 + 4) = 0
    __builtin_memset(result_1 + 0x1c, 0, 0x14)

result = result_1
*(result_1 + 0x2c) = arg1
sub_4681d0(result_1, arg2)
sub_412de0(arg1 + 0x20, &result)
return result
