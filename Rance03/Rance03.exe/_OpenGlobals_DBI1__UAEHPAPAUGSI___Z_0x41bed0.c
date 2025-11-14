// 函数: ?OpenGlobals@DBI1@@UAEHPAPAUGSI@@@Z
// 地址: 0x41bed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b43e1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
char* i = arg3
char* result = arg4
char* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i = &i[0x28])
    char* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        *(result + 4) = *(i + 4)
        *(result + 8) = *(i + 8)
        *(result + 0x20) = 0xf
        *(result + 0x1c) = 0
        result[0xc] = 0
        sub_401ff0(&result[0xc], &i[0xc], 0, 0xffffffff)
        result[0x24] = i[0x24]
    
    result = &result[0x28]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
