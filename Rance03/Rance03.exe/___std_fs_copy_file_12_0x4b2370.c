// 函数: ___std_fs_copy_file@12
// 地址: 0x4b2370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6bd501
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t i = arg2
char* esi = arg3
char* var_18 = esi
char* var_1c = esi
int32_t var_8_1 = 0

while (i != 0)
    char* var_20_1 = esi
    var_8_1.b = 1
    
    if (esi != 0)
        *(esi + 0x14) = 0xf
        *(esi + 0x10) = 0
        *esi = 0
        result = sub_401ff0(esi, arg4, 0, 0xffffffff)
    
    i -= 1
    var_8_1.b = 0
    esi = &esi[0x18]
    char* var_18_1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
