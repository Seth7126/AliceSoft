// 函数: sub_70779b
// 地址: 0x70779b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t edx

switch (arg1)
    case 0
        return __crt_strtox::convert_decimal_string_to_floating_type<double>(arg1, edx, ecx, arg2, 
            arg3)
    case 1
        return sub_706e63(arg1, edx, ecx, arg2, arg3)
    case 2
        __crt_strtox::assemble_floating_point_zero<double>(arg2[0xc2].b, arg3)
        return 0
    case 3
        __crt_strtox::assemble_floating_point_infinity<double>(arg2[0xc2].b, arg3)
        return 0
    case 4
        __crt_strtox::assemble_floating_point_qnan<double>(arg2[0xc2].b, arg3)
        return 0
    case 5
        __crt_strtox::assemble_floating_point_snan<double>(arg2[0xc2].b, arg3)
        return 0
    case 6
        __crt_strtox::assemble_floating_point_ind<double>(arg3)
        return 0
    case 7
        __crt_strtox::assemble_floating_point_zero<double>(0, arg3)
    case 8
        __crt_strtox::assemble_floating_point_zero<double>(arg2[0xc2].b, arg3)
        return 2
    case 9
        __crt_strtox::assemble_floating_point_infinity<double>(arg2[0xc2].b, arg3)
        return 3

return 1
