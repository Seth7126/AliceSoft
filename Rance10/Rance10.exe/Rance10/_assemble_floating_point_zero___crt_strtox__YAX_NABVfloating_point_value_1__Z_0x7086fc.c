// 函数: ?assemble_floating_point_zero@__crt_strtox@@YAX_NABVfloating_point_value@1@@Z
// 地址: 0x7086fc
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2[1].b != 0)
    return __crt_strtox::assemble_floating_point_zero<double>(arg1, 
        __crt_strtox::floating_point_value::as_double(arg2))

int32_t* result = __crt_strtox::floating_point_value::as_float(arg2)
int32_t ecx_2
ecx_2.b = arg1 != 0
*result = ecx_2 << 0x1f
return result
