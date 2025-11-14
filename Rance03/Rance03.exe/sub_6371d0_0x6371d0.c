// 函数: sub_6371d0
// 地址: 0x6371d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b707b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDecodeCG2::decodecg::CDecodeCG::VTable** var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_75d540

if (ecx != 0)
    (*(*ecx + 4))(__security_cookie ^ &var_10)
    data_75d540 = 0

struct IDecodeCG2::decodecg::CDecodeCG::VTable** eax_4 = sub_69adc6(0xc)
var_10 = eax_4
int32_t var_4 = 0

if (eax_4 == 0)
    data_75d540 = 0
    eax_4.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

data_75d540 = sub_6357f0(eax_4)
struct IDecodeCG2::decodecg::CDecodeCG::VTable** eax_5
eax_5.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
