// 函数: sub_48fd40
// 地址: 0x48fd40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_69adc6(0x60)
var_10 = eax_3
int32_t var_4 = 0
struct IInterface::partsengine::CFlatLayerData::VTable** esi

if (eax_3 == 0)
    esi = nullptr
else
    esi = sub_48e2e0(eax_3)

int32_t var_4_1 = 0xffffffff
var_10 = esi

if (sub_48eb60(esi) == 0)
    if (esi != 0)
        (*esi)->vFunc_2(1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

sub_412de0(arg1 + 8, &var_10)
int32_t eax_7 = var_10
int32_t ecx_7 = *(eax_7 + 0x40) + *(eax_7 + 0x3c) - 1
int32_t* eax_10 = &var_10
bool cond:0 = *(arg1 + 0x14) s>= ecx_7
var_10 = ecx_7

if (cond:0)
    eax_10 = arg1 + 0x14

*(arg1 + 0x14) = *eax_10
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
