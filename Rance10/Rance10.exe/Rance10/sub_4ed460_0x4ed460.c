// 函数: sub_4ed460
// 地址: 0x4ed460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_735ae0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** edi = arg1
int32_t* ecx = edi[0x96]
*edi = &partsengine::CGUIComponent::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
edi[2] = &partsengine::CGUIComponent::`vftable'{for `partsengine::IEventObserver'}

if (ecx != 0)
    (**ecx)(1)

void* eax_4 = sub_4ee010(edi)

if (eax_4 != 0)
    void* esi_1 = *(eax_4 + 0x244)
    
    if (esi_1 != 0)
        if ((*(edi[0x1d]->vFunc_0 + 0x18))(eax_2) != 0)
            esi_1, edi = sub_4f01b0(edi)
            sub_4f0350(nullptr)
        
        if (*(esi_1 + 0x25c) == edi)
            *(esi_1 + 0x25c) = 0

int32_t eax_8 = edi[0x47]
void* ecx_4 = edi[0x1e]
int32_t var_18 = eax_8
int32_t var_14 = eax_8

if (eax_8 s> 0)
    void** var_1c
    void** eax_9
    eax_9.b = *sub_42eb70(ecx_4 + 0x14, &var_1c, &var_14) != *(ecx_4 + 0x14)
    
    if (eax_9.b != 0)
        void* var_20
        sub_42ebc0(ecx_4 + 0x14, &var_20, &var_18)
        void* eax_10 = var_20
        *(eax_10 + 0x14) -= 1

sub_4f1f60(&edi[0x19])
int32_t* ecx_8 = edi[0x1d]

if (ecx_8 != 0)
    (*(*ecx_8 + 4))(eax_2)
    edi[0x1d] = 0

___dyn_tls_init@12(&edi[0x98])
sub_503fa0(&edi[0x21])
edi[0x19] = &partsengine::CGUIComponentTreeUnit::`vftable'
edi[3] = &partsengine::CEventSubject::`vftable'
int32_t result = edi[4]
edi[5] = result
void* ecx_11 = edi[4]

if (ecx_11 != 0)
    result = sub_403160(ecx_11, (edi[6] - ecx_11) s>> 2, 4)
    edi[4] = 0
    edi[5] = 0
    edi[6] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
