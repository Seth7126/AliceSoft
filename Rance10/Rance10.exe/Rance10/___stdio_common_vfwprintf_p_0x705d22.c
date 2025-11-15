// 函数: ___stdio_common_vfwprintf_p
// 地址: 0x705d22
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_14 = arg6
int32_t var_c = arg5
int32_t var_1c = arg1
int32_t var_10 = arg4
int32_t var_8 = arg3
int32_t var_18 = arg2

if (arg3 == 0 || arg4 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

int32_t* var_30 = &var_8
int32_t* var_2c_1 = &var_c
int32_t* var_28_1 = &var_1c
int32_t* var_24_1 = &var_10
int32_t* var_20_1 = &var_14
return __acrt_lowio_lock_fh_and_call<class <lambda_9f7c74da3c880c1c93b7275d920bab7e> >(arg3, 
    &var_30)
