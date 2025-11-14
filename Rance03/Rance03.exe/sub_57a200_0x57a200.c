// 函数: sub_57a200
// 地址: 0x57a200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c6a21
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void** i = arg3
char* result = arg4
char* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i = &i[0x10])
    char* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *(result + 0x14) = 0xf
        *(result + 0x10) = 0
        *result = 0
        sub_401ff0(result, i, 0, 0xffffffff)
        *(result + 0x18) = i[6]
        *(result + 0x1c) = i[7]
        *(result + 0x20) = &sealengine::CSQT::`vftable'
        *(result + 0x24) = *(i + 0x24)
        *(result + 0x34) = *(i + 0x34)
        *(result + 0x3c) = i[0xf]
    
    result = &result[0x40]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
