// 函数: sub_68a790
// 地址: 0x68a790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6d14d1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
struct dpsound::CSoundData::VTable** result = arg4
struct dpsound::CSoundData::VTable** result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x44)
    struct dpsound::CSoundData::VTable** result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_68a6e0(result, i)
    
    result = &result[0x11]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
