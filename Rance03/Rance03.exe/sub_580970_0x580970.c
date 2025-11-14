// 函数: sub_580970
// 地址: 0x580970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c704c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int64_t* i = arg3
int64_t* result = arg4
int64_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x24)
    int64_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        result[1].d = i[1].d
        sub_453d80(result + 0xc, i + 0xc)
        var_8_1.b = 2
        sub_453d80(&result[3], &i[3])
    
    result += 0x24
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
