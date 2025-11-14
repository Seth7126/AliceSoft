// 函数: sub_456fd0
// 地址: 0x456fd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1
struct exfile::CDefineDataArray::VTable** eax = sub_69adc6(0x10)

if (eax == 0)
    eax = nullptr
else
    *eax = &exfile::CDefineDataArray::`vftable'
    eax[1] = 0
    eax[2] = 0
    eax[3] = 0

var_4 = eax
sub_412de0(arg1 + 0x14, &var_4)
return *(*(arg1 + 0x14) + ((*(arg1 + 0x18) - *(arg1 + 0x14)) s>> 2 << 2) - 4)
