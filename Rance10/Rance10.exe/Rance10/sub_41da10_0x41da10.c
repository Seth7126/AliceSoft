// 函数: sub_41da10
// 地址: 0x41da10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0x10)

if (result != 0xffffffff)
    int32_t var_8_1 = *(arg1 + 0x14)
    result = sub_41da40(arg1, result)
    *(arg1 + 0x10) = 0xffffffff
    *(arg1 + 0x14) = 0xffffffff

return result
