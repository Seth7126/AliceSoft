// 函数: sub_53dc60
// 地址: 0x53dc60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct _EXCEPTION_REGISTRATION_RECORD** result = sub_4f49c0(data_7fcba4 + 0x124, arg1)
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result

if (result_1 != 0 && result_1[0x5a] != arg2)
    result_1[0x5a] = arg2
    result = sub_508fe0(&result_1[0x54], arg2)
    *(result_1 + 0x1b9) = 1

return result
