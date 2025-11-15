// 函数: sub_4c2920
// 地址: 0x4c2920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733142
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** eax_3 =
    sub_6e810c(0x328)
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** var_18 =
    eax_3
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** result_1 =
    sub_4ed250(eax_3, 1, arg1[0x16], arg1[0x15], arg1[0x17])
sub_42ccf0(&arg1[0xe], &result_1)
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** result =
    result_1
int32_t* edx = result[4]
var_18 = arg1
int32_t eax_5 = result[5]

if (edx == eax_5)
    sub_42ccf0(&result[4], &var_18)
else
    while (*edx != arg1)
        edx = &edx[1]
        
        if (edx == eax_5)
            break
    
    if (edx == eax_5)
        sub_42ccf0(&result[4], &var_18)

var_18 = 0xffffffff
sub_404370(&arg1[0x12], &var_18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
