// 函数: sub_46e340
// 地址: 0x46e340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = data_75d4e0

if (ecx != 0)
    (**ecx)(1)
    data_75d4e0 = 0

struct ibis::CIbisInputEngine::VTable** result = sub_69adc6(0x28)

if (result == 0)
    data_75d4e0 = 0
    result.b = 1
    return result

*result = &ibis::CIbisInputEngine::`vftable'
result[1].b = 0
__builtin_memset(&result[2], 0, 0x1d)
data_75d4e0 = result
result.b = 1
return result
