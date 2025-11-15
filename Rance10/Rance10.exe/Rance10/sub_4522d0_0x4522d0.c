// 函数: sub_4522d0
// 地址: 0x4522d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b332
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_452290(arg1)
struct common::SuicideRefCounter<class common::detail::EmptyClass>::chipmunk::CSprite::VTable** 
    arg_4
struct common::SuicideRefCounter<class common::detail::EmptyClass>::chipmunk::CSprite::VTable** 
    edi = arg_4
int32_t ecx_2 = (edi[0xd] - edi[0xc]) s>> 2
int32_t result = (*(arg1 + 0x38) - *(arg1 + 0x30)) s>> 2

if (result u< ecx_2)
    if (ecx_2 u> 0x3fffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    result = sub_404670(arg1 + 0x30, ecx_2)

int32_t* i = edi[0xc]

for (int32_t edi_1 = edi[0xd]; i != edi_1; i = &i[1])
    struct common::SuicideRefCounter<class common::detail::EmptyClass>::chipmunk::CSprite::VTable** 
        eax_5 = sub_6e810c(0x130)
    struct common::SuicideRefCounter<class common::detail::EmptyClass>::chipmunk::CSprite::VTable** 
        var_18_1 = eax_5
    int32_t var_8_1 = 0
    struct common::SuicideRefCounter<class common::detail::EmptyClass>::chipmunk::CSprite::VTable** 
        ecx_5 = std::set_new_handler(eax_5, *i)
    int32_t var_8_2 = 0xffffffff
    int32_t edx_1 = *(arg1 + 0x34)
    arg_4 = ecx_5
    
    if (&arg_4 u>= edx_1)
    label_4523b5:
        
        if (edx_1 == *(arg1 + 0x38))
            struct common::SuicideRefCounter<class common::detail::EmptyClass>::chipmunk::CSprite::VTable
                ** var_2c_4 = ecx_5
            sub_42cd50(arg1 + 0x30)
        
        result = *(arg1 + 0x34)
        
        if (result != 0)
            *result = ecx_5
    else
        result = *(arg1 + 0x30)
        edx_1 = *(arg1 + 0x34)
        
        if (result u> &arg_4)
            goto label_4523b5
        
        int32_t ecx_7 = (&arg_4 - result) s>> 2
        
        if (edx_1 == *(arg1 + 0x38))
            int32_t var_2c_3 = ecx_7
            result = sub_42cd50(arg1 + 0x30)
        
        int32_t* edx_2 = *(arg1 + 0x34)
        
        if (edx_2 != 0)
            result = *(*(arg1 + 0x30) + (ecx_7 << 2))
            *edx_2 = result
    
    *(arg1 + 0x34) += 4

fsbase->NtTib.ExceptionList = ExceptionList
return result
