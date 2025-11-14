// 函数: sub_451e10
// 地址: 0x451e10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 4) = 0

struct IDecompressor::nutria::CZlibDecompressor::VTable** result = sub_69adc6(8)

if (result == 0)
    *(arg1 + 4) = 0
    int32_t eax_2
    eax_2.b = false
    return 0

*result = &nutria::CZlibDecompressor::`vftable'{for `IDecompressor'}
result[1] = 1
*(arg1 + 4) = result
result.b = result != 0
return result
