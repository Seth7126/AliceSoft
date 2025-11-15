// 函数: sub_527800
// 地址: 0x527800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73976e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0xbc)
struct common::SuicideRefCounter<class common::detail::EmptyClass>::partsengine::CPartsModelBlender::SProjection::VTable
    ** edi = arg2

if (ecx == 0)
    goto label_5278a2

void* edx_1 = ecx[2]
struct partsengine::CProjection::VTable** result

if (*(edx_1 + 0x1c) != edi[7])
label_527894:
    int32_t edx_2 = ecx[1]
    ecx[1] -= 1
    (**ecx)(edx_2 - 1)
label_5278a2:
    struct common::SuicideRefCounter<class common::detail::EmptyClass>::partsengine::CPartsModelBlender::SProjection::VTable
        ** eax_6 = sub_6e810c(0xc)
    arg2 = eax_6
    int32_t var_8_1 = 0
    eax_6[1] = 1
    *eax_6 = &partsengine::CPartsModelBlender::SProjection::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}
    struct partsengine::CProjection::VTable** eax_7 = sub_6e810c(0x58)
    struct partsengine::CProjection::VTable** var_14_1 = eax_7
    var_8_1.b = 1
    result = sub_5571b0(eax_7, edi)
    eax_6[2] = result
    *(arg1 + 0xbc) = eax_6
else
    result = *(edx_1 + 0x20)
    
    if (result != edi[8])
        goto label_527894
    
    if (sub_48b210(*(edx_1 + 0x34) f- edi[0xd]) f> 1.1920929e-07f)
        goto label_527894
    
    if (sub_48b210(*(edx_1 + 0x38) f- edi[0xe]) f> 1.1920929e-07f)
        goto label_527894
    
    if (not(sub_48b210(*(edx_1 + 0x3c) f- edi[0xf]) f<= 1.1920929e-07f))
        goto label_527894

fsbase->NtTib.ExceptionList = ExceptionList
return result
