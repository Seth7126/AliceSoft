// 函数: sub_487b90
// 地址: 0x487b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ef4f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg4 != 0)
    int32_t eax_4 = sub_487b30(arg3, arg2)
    struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataOgg::VTable** result
    
    if (eax_4 == 0)
        struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataWav::VTable** eax_8 =
            sub_6e810c(0x58)
        struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataWav::VTable** 
            var_18_2 = eax_8
        result = sub_489740(eax_8)
    label_487c1a:
        bool cond:0_1 = (*result)->vFunc_3(arg3, arg2) == 0
        struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataOgg::VTable* eax_10 =
            *result
        
        if (not(cond:0_1))
            if (eax_10->vFunc_8(arg4) != 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            eax_10 = *result
        
        eax_10->vFunc_1(eax_2)
    else if (eax_4 == 1)
        struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataOgg::VTable** eax_7 =
            sub_6e810c(0x58)
        struct common::SuicideRefCounter<class ISoundData>::kiwi::CSoundDataOgg::VTable** 
            var_18_1 = eax_7
        int32_t var_8_1 = 0
        result = sub_482b30(eax_7)
        int32_t var_8_2 = 0xffffffff
        goto label_487c1a

fsbase->NtTib.ExceptionList = ExceptionList
return 0
