// 函数: sub_568ab0
// 地址: 0x568ab0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c5f41
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t i = arg2
struct sealengine::CEmitter::VTable** esi = arg3
struct sealengine::CEmitter::VTable** var_18 = esi
struct sealengine::CEmitter::VTable** var_1c = esi
int32_t var_8_1 = 0

while (i != 0)
    struct sealengine::CEmitter::VTable** var_20_1 = esi
    var_8_1.b = 1
    
    if (esi != 0)
        result = sub_566540(esi, arg4)
    
    i -= 1
    var_8_1.b = 0
    esi = &esi[0x9b]
    struct sealengine::CEmitter::VTable** var_18_1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
