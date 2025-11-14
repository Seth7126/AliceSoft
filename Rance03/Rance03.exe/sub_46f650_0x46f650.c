// 函数: sub_46f650
// 地址: 0x46f650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6b9601
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

for (; i != arg2; i = &i[0x34])
    char* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_3
        eax_3.b = *i
        *result = eax_3.b
        *(result + 4) = *(i + 4)
        *(result + 0x1c) = 0xf
        *(result + 0x18) = 0
        result[8] = 0
        sub_401ff0(&result[8], &i[8], 0, 0xffffffff)
        *(result + 0x20) = *(i + 0x20)
        int32_t eax_6
        eax_6.b = i[0x24]
        result[0x24] = eax_6.b
        *(result + 0x28) = *(i + 0x28)
        *(result + 0x2c) = *(i + 0x2c)
        *(result + 0x30) = *(i + 0x30)
    
    result = &result[0x34]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
