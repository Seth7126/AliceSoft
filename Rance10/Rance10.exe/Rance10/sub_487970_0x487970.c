// 函数: sub_487970
// 地址: 0x487970
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ef21
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    struct IChangeVolumeCallback::kiwi::CVolumeChanger::VTable** eax_4 = sub_6e810c(0x1c)
    arg2 = eax_4
    int32_t var_8_1 = 0
    struct IChangeVolumeCallback::kiwi::CVolumeChanger::VTable** eax_5 =
        sub_486380(eax_4, *(arg1 + 7), *(arg1 + 8))
    int32_t var_8_2 = 0xffffffff
    *(arg1 + 0x930) = eax_5
    eax_5[4] = arg1 + 0x924
    struct kiwi::CSactSound::VTable** eax_6 = sub_6e810c(0xa4)
    arg2 = eax_6
    int32_t var_8_3 = 1
    struct kiwi::CSactSound::VTable** eax_7 = sub_487c60(eax_6, *(arg1 + 0x930))
    int32_t var_8_4 = 0xffffffff
    int32_t* var_28_2 = *(arg1 + 0x92c)
    *(arg1 + 0x934) = eax_7
    
    if (sub_487f10(eax_7, var_28_2, arg3) != 0)
        int32_t eax_9 = (*(*(arg1 + 0xc) + 0x10))(eax_2)
        void* eax_10 = nullptr
        arg2 = nullptr
        
        if (eax_9 s> 0)
            do
                int32_t esi_2 = **(arg1 + 0x930)
                int32_t eax_11 = (*(*(arg1 + 0xc) + 0x18))(eax_10)
                *(arg1 + 0x930)
                (*esi_2)(arg2, eax_11)
                int32_t esi_3 = **(arg1 + 0x930)
                char eax_15 = (*(*(arg1 + 0xc) + 0x20))(arg2)
                *(arg1 + 0x930)
                (*(esi_3 + 4))(arg2, zx.d(eax_15))
                eax_10 = arg2 + 1
                arg2 = eax_10
            while (eax_10 s< eax_9)
        
        (*(*(arg1 + 0xc) + 0x24))(*(arg1 + 0x930))
        int32_t result
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
