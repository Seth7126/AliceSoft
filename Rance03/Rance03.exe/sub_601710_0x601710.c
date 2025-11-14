// 函数: sub_601710
// 地址: 0x601710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_75d528

if (ecx != 0)
    (**ecx)(1)
    data_75d528 = 0

struct crayfish::CCrayfishLogViewer::VTable** eax_4 = sub_69adc6(0x60)
struct crayfish::CCrayfishLogViewer::VTable** var_10_1 = eax_4
int32_t var_4 = 0
struct crayfish::CCrayfishLogViewer::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_5ff750(eax_4)

data_75d528 = result
result[0x17] = arg1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
