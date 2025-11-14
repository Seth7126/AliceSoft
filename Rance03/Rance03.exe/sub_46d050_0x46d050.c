// 函数: sub_46d050
// 地址: 0x46d050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b93bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IJoystick::ibis::CJoystick::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IJoystick::ibis::CJoystick::VTable** var_10_1 = arg1
*arg1 = &ibis::CJoystick::`vftable'{for `IJoystick'}
int32_t var_4 = 0
int32_t result = sub_46cec0(arg1[1])
void* esi_1 = arg1[1]

if (esi_1 != 0)
    int32_t eax_3 = *(esi_1 + 8)
    
    if (eax_3 != 0)
        j__free(eax_3)
        *(esi_1 + 8) = 0
        *(esi_1 + 0xc) = 0
        *(esi_1 + 0x10) = 0
    
    result = j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
