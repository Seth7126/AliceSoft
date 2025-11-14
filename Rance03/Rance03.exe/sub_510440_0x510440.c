// 函数: sub_510440
// 地址: 0x510440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1e8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** edi = arg2
int32_t eax_3 = *(arg1 + 0x28)

if (edi u<= 3)
    int32_t __saved_edi
    bool cond:0_1 = (*(**(eax_3 + (edi << 2)) + 8))(__security_cookie ^ &__saved_edi) == 0x10
    eax_3 = *(arg1 + 0x28)
    
    if (not(cond:0_1))
        (*(**(eax_3 + (edi << 2)) + 4))()
        struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** eax_7 = sub_69adc6(0x2f4)
        arg2 = eax_7
        int32_t var_4 = 5
        struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** eax_8
        
        if (eax_7 == 0)
            eax_8 = nullptr
        else
            eax_8 = sub_50c420(eax_7)
        
        *(*(arg1 + 0x28) + (edi << 2)) = eax_8
        eax_3 = *(arg1 + 0x28)
        *(arg1 + 0x14) = 1

fsbase->NtTib.ExceptionList = ExceptionList
return *(eax_3 + (edi << 2))
