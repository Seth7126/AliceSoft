// 函数: sub_5a2880
// 地址: 0x5a2880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_75d508

if (ecx != 0)
    (*(*ecx + 0x18))(1)
    data_75d508 = 0

struct IDXPlugin::sealengine::CApp::VTable** eax_4 = sub_69adc6(0x60)
struct IDXPlugin::sealengine::CApp::VTable** var_10_1 = eax_4
int32_t var_4 = 0
struct IDXPlugin::sealengine::CApp::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_526920(eax_4)

data_75d508 = result
result[3] = arg1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
