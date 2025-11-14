// 函数: sub_5dbe90
// 地址: 0x5dbe90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6ca999
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t i = arg2
int32_t* esi = arg1
int32_t* var_18 = esi
int32_t* var_1c = esi
int32_t var_8_1 = 0

while (i != 0)
    int32_t* var_20_1 = esi
    var_8_1.b = 1
    
    if (esi != 0)
        *esi = 0
        esi[1] = 0
        *esi = sub_4203c0()
        var_8_1.b = 2
        esi[2] = 0
        esi[3] = 0
        result = sub_42f580()
        esi[2] = result
        esi[4] = 0xffffffff
        esi[5] = 0xffffffff
    
    i -= 1
    var_8_1.b = 0
    esi = &esi[6]
    int32_t* var_18_1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
