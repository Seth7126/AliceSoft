// 函数: sub_620450
// 地址: 0x620450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_10 = ecx
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx_1 = data_75d534

if (ecx_1 != 0)
    (**ecx_1)(1)
    data_75d534 = 0

struct mainsystem::CApp::VTable** eax_4 = sub_69adc6(0xc)
struct mainsystem::CApp::VTable** var_10_1 = eax_4
int32_t var_4 = 0

if (eax_4 == 0)
    data_75d534 = 0
    eax_4.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

*eax_4 = &mainsystem::CApp::`vftable'
eax_4[1] = 0
eax_4[2] = 0
eax_4[1] = sub_456250()
int32_t* eax_5
eax_5.b = 1
data_75d534 = eax_4
fsbase->NtTib.ExceptionList = ExceptionList
return eax_5
