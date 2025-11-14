// 函数: sub_413fb0
// 地址: 0x413fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3db8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_esi
int32_t var_3c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0xf
int32_t var_24 = 0
var_34 = 0
int32_t var_c_1 = 0
char* lParam

if (arg2 == 1)
    sub_402110(&var_34, 0x704248, 0xe)
    SendMessageA(arg1, 0x466, 1, arg3)
label_41405b:
    lParam = var_34.d
    
    if (var_20 u< 0x10)
        lParam = &var_34
else
    if (arg2 == 2)
        sub_402110(&var_34, 0x704258, 0x14)
        goto label_41405b
    
    if (arg2 == 3)
        sub_402110(&var_34, 0x704270, 0xe)
        goto label_41405b
    
    lParam = &var_34

SendMessageA(arg1, 0x464, 0, lParam)

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return 0
