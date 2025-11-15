// 函数: ??$parse_floating_point_write_result@M@__crt_strtox@@YA?AW4SLD_STATUS@@W4floating_point_parse_result@0@ABUfloating_point_string@0@QAM@Z
// 地址: 0x70768b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t edx

switch (arg1)
    case 0
        return __crt_strtox::convert_decimal_string_to_floating_type<float>(arg1, edx, ecx, arg2, 
            arg3)
    case 1
        return __crt_strtox::convert_hexadecimal_string_to_floating_type<float>(arg1, edx, ecx, 
            arg2, arg3)
    case 2
        int32_t ecx_2
        ecx_2.b = arg2[0xc2].b != 0
        *arg3 = ecx_2 << 0x1f
        return 0
    case 3
        int32_t ecx_4
        ecx_4.b = arg2[0xc2].b != 0
        *arg3 = ecx_4 << 0x1f | 0x7f800000
        return 0
    case 4
        int32_t ecx_6
        ecx_6.b = arg2[0xc2].b != 0
        *arg3 = ecx_6 << 0x1f | 0x7fffffff
        return 0
    case 5
        int32_t ecx_8
        ecx_8.b = arg2[0xc2].b != 0
        *arg3 = ecx_8 << 0x1f | 0x7f800001
        return 0
    case 6
        *arg3 = 0xffc00000
        return 0
    case 7
        *arg3 = 0
    case 8
        int32_t ecx_10
        ecx_10.b = arg2[0xc2].b != 0
        *arg3 = ecx_10 << 0x1f
        return 2
    case 9
        int32_t ecx_12
        ecx_12.b = arg2[0xc2].b != 0
        *arg3 = ecx_12 << 0x1f | 0x7f800000
        return 3

return 1
