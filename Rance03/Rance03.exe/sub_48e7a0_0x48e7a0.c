// 函数: sub_48e7a0
// 地址: 0x48e7a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb15b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CFlatKeyDataGraphic::VTable** ebx = arg3
sub_42f470(arg1 + 0x44, ebx)
int32_t edi = 0
int32_t result

if (ebx s<= 0)
label_48e830:
    result.b = 1
else
    while (true)
        struct IInterface::partsengine::CFlatKeyDataGraphic::VTable** eax_3 = sub_69adc6(0x80)
        arg3 = eax_3
        int32_t var_4 = 0
        struct IInterface::partsengine::CFlatKeyDataGraphic::VTable** esi_1
        
        if (eax_3 == 0)
            esi_1 = nullptr
        else
            esi_1 = sub_490f60(eax_3)
        
        int32_t var_24_1 = arg4
        int32_t var_4_1 = 0xffffffff
        int32_t var_28_1 = arg2
        
        if (sub_491340(esi_1) == 0)
            (*esi_1)->__offset(0x4).d(eax_2)
            result.b = 0
            break
        
        *(*(arg1 + 0x44) + (edi << 2)) = esi_1
        edi += 1
        
        if (edi s>= ebx)
            goto label_48e830

fsbase->NtTib.ExceptionList = ExceptionList
return result
