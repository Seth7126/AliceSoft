// 函数: sub_6358a0
// 地址: 0x6358a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ce52b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDecodeCG2::decodecg::CDecodeCG::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDecodeCG2::decodecg::CDecodeCG::VTable** var_10_1 = arg1
*arg1 = &decodecg::CDecodeCG::`vftable'{for `IDecodeCG2'}
int32_t var_4 = 0
int32_t* ecx = data_75d544

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    ecx = nullptr
    data_75d544 = 0

int32_t var_4_1 = 0xffffffff
arg1[2] = &decodecg::LSurfaceFactory::`vftable'

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    data_75d544 = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
