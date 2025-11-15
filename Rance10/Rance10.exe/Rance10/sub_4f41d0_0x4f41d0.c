// 函数: sub_4f41d0
// 地址: 0x4f41d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7362c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* i_2 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1 + 4
*(edi + 8) = 0
int32_t* esi = *(edi + 0x1c)
void* i = *esi
i_2 = i

for (; i != esi; i = i_2)
    *(*(i + 0x14) + 0x20) = 0
    sub_429080(&i_2)

struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** arg_4
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** esi_1 =
    arg_4
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** var_28 =
    esi_1
struct partsengine::CPartsList::VTable** eax_4 = sub_4f14d0(edi)
int32_t ecx_2

if (eax_4 != 0)
    ecx_2 = eax_4[2]

if (eax_4 == 0 || esi_1 s< ecx_2 || eax_4[1] + ecx_2 s<= esi_1)
    arg_4 = nullptr
else
    struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** 
        vFunc_0 = eax_4[3][esi_1 - eax_4[2]].vFunc_0
    arg_4 = vFunc_0
    
    if (vFunc_0 == 0)
        struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** 
            var_28_1 = esi_1
        arg_4 = sub_526580(eax_4)
        edi = arg1 + 4
    else
        edi = arg1 + 4

struct partsengine::CGUIController::VTable** var_28_2 = arg2
struct partsengine::CPartsList::VTable** eax_9 = sub_4f14d0(edi)
int32_t edi_1

if (eax_9 != 0)
    edi_1 = eax_9[2]

struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** vFunc_0_1

if (eax_9 == 0 || arg2 s< edi_1 || eax_9[1] + edi_1 s<= arg2)
    vFunc_0_1 = nullptr
else
    vFunc_0_1 = eax_9[3][arg2 - edi_1].vFunc_0
    
    if (vFunc_0_1 == 0)
        struct partsengine::CGUIController::VTable** var_28_3 = arg2
        vFunc_0_1 = sub_526580(eax_9)

struct partsengine::CGUIController::VTable** eax_14 = sub_6e810c(0x260)
arg2 = eax_14
int32_t var_8_1 = 0
int32_t var_28_4 = *(arg1 + 0x88)
struct partsengine::CGUIController::VTable** result = sub_4f30b0(eax_14, arg_4, vFunc_0_1, arg1 + 4)
*(arg1 + 0xc) = arg1
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable*** esi_4 =
    *(arg1 + 0x20)
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** i_1 =
    *esi_4
arg_4 = i_1

for (; i_1 != esi_4; i_1 = arg_4)
    i_1[5][2].vFunc_0 = arg1
    sub_429080(&arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
