// 函数: sub_420930
// 地址: 0x420930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_75d4a0

if (ecx != 0)
    int32_t __saved_esi
    (*(*ecx + 4))(__security_cookie ^ &__saved_esi)
    data_75d4a0 = 0

struct IJaffaDebugPlugin::dpanalysis::CApp::VTable** eax_4 = sub_69adc6(0x570)
struct IJaffaDebugPlugin::dpanalysis::CApp::VTable** var_10 = eax_4
int32_t var_4 = 0
struct IJaffaDebugPlugin::dpanalysis::CApp::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_4110e0(eax_4)

data_75d4a0 = result
result[0x22] = arg1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
