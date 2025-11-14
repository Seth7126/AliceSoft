// 函数: sub_69cb1c
// 地址: 0x69cb1c
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = arg3
var_8 = 0
int32_t result = __calloc_impl(arg4, arg5, &var_8)

if (result == 0 && var_8 != result && __errno() != 0)
    void* eax_1 = __errno()
    *eax_1 = var_8

return result
