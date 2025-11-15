// 函数: sub_526580
// 地址: 0x526580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_739702
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** eax_3 =
    sub_6e810c(0x328)
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** var_14 =
    eax_3
int32_t var_8_1 = 0
int32_t i_1
int32_t i_2 = i_1
struct common::SuicideRefCounter<class IInterface>::partsengine::CGUIComponent::VTable** result =
    sub_4ed250(eax_3, i_2, *(arg1 + 0x18), *(arg1 + 0x24), 0)
int32_t var_8_2 = 0xffffffff
int32_t i = *(arg1 + 0x1c)
i_1 = i

if (i != 0)
    int32_t edx_1 = result[5]
    int32_t* eax_4 = result[4]
    
    if (eax_4 == edx_1)
        sub_42ccf0(&result[4], &i_1)
    else
        while (*eax_4 != i)
            eax_4 = &eax_4[1]
            
            if (eax_4 == edx_1)
                break
        
        if (eax_4 == edx_1)
            sub_42ccf0(&result[4], &i_1)

*(*(arg1 + 0xc) + ((i_2 - *(arg1 + 8)) << 2)) = result
void* ecx_4 = *(arg1 + 0x28)

if (ecx_4 != 0)
    int32_t i_3 = i_2
    sub_404010(ecx_4)

int32_t* ecx_5 = *(arg1 + 0x20)

if (ecx_5 != 0)
    (**ecx_5)(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
