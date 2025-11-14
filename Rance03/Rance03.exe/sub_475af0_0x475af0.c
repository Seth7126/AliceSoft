// 函数: sub_475af0
// 地址: 0x475af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9de6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IChangeVolumeCallback::kiwi::CVolumeChanger::VTable** esi = sub_69adc6(0x1c)
struct IChangeVolumeCallback::kiwi::CVolumeChanger::VTable** var_10 = esi
int32_t var_4 = 0

if (esi == 0)
    esi = nullptr
else
    int32_t ebx
    ebx:1.b = *(arg1 + 8)
    ebx.b = *(arg1 + 7)
    *esi = &kiwi::CVolumeChanger::`vftable'{for `IChangeVolumeCallback'}
    esi[1] = &kiwi::CGroupVolume::`vftable'
    esi[2] = 0
    esi[3] = 0
    esi[2] = sub_477fd0()
    esi[4] = 0
    esi[5] = 0
    esi[6].b = ebx.b
    *(esi + 0x19) = ebx:1.b

int32_t var_4_1 = 0xffffffff
*(arg1 + 0x938) = esi
esi[4] = arg1 + 0x92c
struct kiwi::CSactSound::VTable** eax_6 = sub_69adc6(0xc0)
struct kiwi::CSactSound::VTable** var_10_1 = eax_6
int32_t var_4_2 = 1
struct kiwi::CSactSound::VTable** eax_7

if (eax_6 == 0)
    eax_7 = nullptr
else
    eax_7 = sub_475e50(eax_6, *(arg1 + 0x938))

int32_t var_4_3 = 0xffffffff
int32_t* var_30 = *(arg1 + 0x934)
*(arg1 + 0x93c) = eax_7
char result = sub_476040(eax_7, var_30, arg2)

if (result != 0)
    int32_t eax_9 = (*(*(arg1 + 0xc) + 0x10))(eax_2)
    int32_t ebp_1 = 0
    
    if (eax_9 s> 0)
        do
            int32_t esi_1 = **(arg1 + 0x938)
            int32_t eax_10 = (*(*(arg1 + 0xc) + 0x18))(ebp_1)
            *(arg1 + 0x938)
            (*esi_1)(ebp_1, eax_10)
            int32_t esi_2 = **(arg1 + 0x938)
            char eax_14 = (*(*(arg1 + 0xc) + 0x20))(ebp_1)
            *(arg1 + 0x938)
            (*(esi_2 + 4))(ebp_1, zx.d(eax_14))
            ebp_1 += 1
        while (ebp_1 s< eax_9)
    
    (*(*(arg1 + 0xc) + 0x24))(*(arg1 + 0x938))
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
