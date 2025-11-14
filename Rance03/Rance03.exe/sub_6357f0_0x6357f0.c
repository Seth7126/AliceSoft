// 函数: sub_6357f0
// 地址: 0x6357f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce52b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDecodeCG2::decodecg::CDecodeCG::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDecodeCG2::decodecg::CDecodeCG::VTable** var_10_1 = arg1
*arg1 = &decodecg::CDecodeCG::`vftable'{for `IDecodeCG2'}
arg1[1] = 1
arg1[2] = &decodecg::LSurfaceFactory::`vftable'
int32_t var_4 = 0
int32_t* ecx = data_75d544

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    data_75d544 = 0

int32_t* ecx_1 = data_75d538

if (ecx_1 == 0)
    data_75d544 = ecx_1
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

(**ecx_1)(eax_2)
data_75d544 = data_75d538
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
