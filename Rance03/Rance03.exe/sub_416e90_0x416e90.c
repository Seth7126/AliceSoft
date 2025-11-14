// 函数: sub_416e90
// 地址: 0x416e90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
struct dpanalysis::CSourceInfo::VTable** esi = sub_69adc6(0x54)

if (esi == 0)
    esi = nullptr
else
    *esi = &dpanalysis::CSourceInfo::`vftable'
    sub_41b460(&esi[1])
    esi[0x12] = 0
    esi[0x13] = 0
    esi[0x14] = 0

var_4 = esi

if (sub_415aa0(esi, arg2, arg3) != 0)
    sub_412de0(arg1 + 0xa4, &var_4)
    int32_t result
    result.b = 1
    return result

if (esi != 0)
    (*esi)->vFunc_0(1)

return 0
