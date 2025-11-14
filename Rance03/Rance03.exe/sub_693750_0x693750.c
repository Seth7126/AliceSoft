// 函数: sub_693750
// 地址: 0x693750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf951
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = *(arg1 + 0x10)
struct dpsound::CSoundData::VTable** ecx = *(edx + 4)

if (ecx u< *(edx + 8))
    *(edx + 4) = &ecx[0x11]
    sub_68cf40(ecx, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

struct dpsound::CSoundData::VTable** var_14 = ecx
struct dpsound::CSoundData::VTable** var_10 = ecx
int32_t var_4 = 0

if (ecx != 0)
    sub_68a6e0(ecx, arg2)

void* ecx_3 = *(arg1 + 0x10)
*(ecx_3 + 4) += 0x44
*(*(arg1 + 0x10) + 8) = *(ecx_3 + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
