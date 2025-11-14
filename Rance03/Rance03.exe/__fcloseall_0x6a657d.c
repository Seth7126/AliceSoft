// 函数: __fcloseall
// 地址: 0x6a657d
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0x7480a0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x7480a0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_4 = &data_6a6589
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
int32_t var_20 = 0
__lock(1)
int32_t var_8_1 = 0
int32_t var_38 = 3
int32_t esi = 3

while (true)
    int32_t var_24_1 = esi
    
    if (esi s>= data_75ef64)
        break
    
    int32_t* eax_1 = *(data_75ef60 + (esi << 2))
    
    if (eax_1 != 0)
        if ((eax_1[3].b & 0x83) != 0 && _fclose(eax_1) != 0xffffffff)
            result += 1
            int32_t result_1 = result
        
        if (esi s>= 0x14)
            DeleteCriticalSection(*(data_75ef60 + (esi << 2)) + 0x20)
            _free(*(data_75ef60 + (esi << 2)))
            *(data_75ef60 + (esi << 2)) = 0
    
    esi += 1

int32_t var_8_2 = 0xfffffffe
$LN13()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6a660d
return result
