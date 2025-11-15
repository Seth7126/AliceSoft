// 函数: sub_4da1f0
// 地址: 0x4da1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72842f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** var_14 =
    arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** eax_3 =
    sub_6e810c(0x60)
var_14 = eax_3
int32_t var_8_1 = 0
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** eax_4 =
    sub_4d70a0(eax_3)
int32_t var_8_2 = 0xffffffff
var_14 = eax_4

if (sub_4d7a50(eax_4) == 0)
    if (eax_4 != 0)
        (*eax_4)->vFunc_3(1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

sub_42ca30(&arg1[2], &var_14)
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** eax_7 =
    var_14
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** ecx_7 =
    eax_7[0x10] + eax_7[0xf] - 1
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable*** eax_10 =
    &var_14
bool cond:0 = arg1[5] s>= ecx_7
var_14 = ecx_7

if (cond:0)
    eax_10 = &arg1[5]

arg1[5] = *eax_10
struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatLayerData::VTable** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
