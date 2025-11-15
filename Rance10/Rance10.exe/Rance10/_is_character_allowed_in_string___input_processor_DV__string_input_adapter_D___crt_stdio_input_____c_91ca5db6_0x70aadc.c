// 函数: ?is_character_allowed_in_string@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@ABE_NW4conversion_mode@2@H@Z
// 地址: 0x70aadc
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result

if (arg3 == 0xffffffff)
    result.b = 0
else if (arg2 == 0)
    result.b = 1
else if (arg2 == 1)
    if (arg3 - 9 u<= 4)
        result.b = 0
    else
        result.b = arg3 != 0x20
else if (arg2 != 8)
    result.b = 0
else
    result.b = __crt_stdio_input::scanset_buffer<uint8_t>::test(arg1 + 0x44, arg3.b).b != 0

return result
