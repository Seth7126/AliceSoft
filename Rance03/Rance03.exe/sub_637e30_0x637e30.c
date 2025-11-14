// 函数: sub_637e30
// 地址: 0x637e30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx
int32_t* var_10 = ecx
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_43aa00(ecx, 0x6f1f50) == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

struct ISoundData::decodeogg::CSoundDataOgg::VTable** result = sub_69adc6(0x5c)
struct ISoundData::decodeogg::CSoundDataOgg::VTable** result_1 = result
int32_t var_4 = 0

if (result == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

*result = &decodeogg::CSoundDataOgg::`vftable'{for `ISoundData'}
result[1] = 1
sub_6372c0(&result[2])
fsbase->NtTib.ExceptionList = ExceptionList
return result
