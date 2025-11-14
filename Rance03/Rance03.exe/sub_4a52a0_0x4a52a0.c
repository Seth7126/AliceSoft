// 函数: sub_4a52a0
// 地址: 0x4a52a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b495b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_4
int32_t edi = arg_4

if (edi s<= 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

int32_t var_20 = edi
struct partsengine::CPartsList::VTable** result = sub_4a5380(arg1)

if (result == 0)
    arg_4 = edi s/ 0x2710
    struct partsengine::CPartsList::VTable** eax_8 = sub_69adc6(0x2c)
    struct partsengine::CPartsList::VTable** var_10_1 = eax_8
    int32_t var_4 = 0
    struct partsengine::CPartsList::VTable** result_1
    
    if (eax_8 == 0)
        result_1 = nullptr
    else
        void* var_20_1 = &arg1[9]
        result_1 = sub_4e7520(eax_8, arg_4 * 0x2710, &arg1[9], arg1, arg1[1], arg1[3])
    
    int32_t var_4_1 = 0xffffffff
    result_1[8] = arg1[2]
    *sub_42f350(&arg1[7], &arg_4) = result_1
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
