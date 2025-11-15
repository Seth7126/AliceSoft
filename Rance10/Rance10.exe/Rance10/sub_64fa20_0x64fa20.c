// 函数: sub_64fa20
// 地址: 0x64fa20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (** result)(int32_t* arg1, char arg2) = (**(arg1 + 4))(arg1, 1, 0x8c)
*(arg1 + 0x198) = result
*result = sub_64f7c0
__builtin_memset(&result[0xb], 0, 0x40)

if (*(arg1 + 0xfc) != 0)
    result[0x22] = 0

return result
