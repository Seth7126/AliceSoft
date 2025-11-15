// 函数: sub_6f7dde
// 地址: 0x6f7dde
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg1
var_c = nullptr
char result = Concurrency::details::VirtualProcessor::ClaimExclusiveOwnership(arg1, &var_c, 0xf, 1)

if (result == 0)
    *(arg1 + 0xad) = 1
    return result

if (var_c != 2 && var_c != 8)
    int32_t esi_1 = *(*arg1 + 0xc)
    j_sub_4033e0()
    return esi_1()

int32_t* var_20_1 = var_c
*(arg1 + 0xad) = 1
return sub_6f7a7d(arg1, var_20_1, 0, nullptr)
