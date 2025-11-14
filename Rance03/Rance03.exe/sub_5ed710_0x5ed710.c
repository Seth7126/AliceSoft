// 函数: sub_5ed710
// 地址: 0x5ed710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3db8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_esi
int32_t var_3c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d514
char result = sub_5ed1f0(esi)

if (result != 0)
    result = sub_5ed7c0()
    
    if (result != 0)
        sub_5ed850(esi, &var_34)
        int32_t var_c_1 = 0
        int32_t* edx_1 = &var_34
        int32_t var_20
        
        if (var_20 u>= 0x10)
            edx_1 = var_34
        
        result = (*(**(esi + 0x30) + 4))(edx_1)
        
        if (var_20 u>= 0x10)
            result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
