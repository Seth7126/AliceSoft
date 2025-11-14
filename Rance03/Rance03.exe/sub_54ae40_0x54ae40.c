// 函数: sub_54ae40
// 地址: 0x54ae40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c4a01
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t i = arg2
struct sealengine::CFace::VTable** esi = arg1
struct sealengine::CFace::VTable** var_18 = esi
struct sealengine::CFace::VTable** var_1c = esi
int32_t var_8_1 = 0

while (i != 0)
    struct sealengine::CFace::VTable** var_20_1 = esi
    var_8_1.b = 1
    
    if (esi != 0)
        int32_t (__fastcall* var_34_1)(struct sealengine::CWriteVertex::VTable** arg1) = sub_59e030
        *esi = &sealengine::CFace::`vftable'
        result = sub_69b2ba(&esi[1], 0x14, 3, sub_59e000)
        esi[0x10] = 0xffffffff
        esi[0x11] = 0xffffffff
        esi[0x12] = 0xffffffff
    
    i -= 1
    var_8_1.b = 0
    esi = &esi[0x13]
    struct sealengine::CFace::VTable** var_18_1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
