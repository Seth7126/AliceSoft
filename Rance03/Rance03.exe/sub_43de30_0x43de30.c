// 函数: sub_43de30
// 地址: 0x43de30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b65b6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx_1 = data_75d4c4

if (ecx_1 != 0)
    (**ecx_1)(1)
    data_75d4c4 = 0

struct anteater::CAnteaterADVEngine::VTable** eax_4 = sub_69adc6(0x30)
struct anteater::CAnteaterADVEngine::VTable** var_10_1 = eax_4
int32_t var_4 = 0

if (eax_4 == 0)
    data_75d4c4 = 0
    eax_4.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

*eax_4 = &anteater::CAnteaterADVEngine::`vftable'
sub_43e790(&eax_4[1])
var_4.b = 1
eax_4[8] = &anteater::CADVSceneKeeper::`vftable'
eax_4[9] = 0
eax_4[0xa] = 0
eax_4[9] = sub_441d20(nullptr, nullptr)
int32_t* eax_5
eax_5.b = 1
eax_4[0xb] = 0x1f4
data_75d4c4 = eax_4
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
