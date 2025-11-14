// 函数: _flsall
// 地址: 0x69c762
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp_2 = 0x14
int32_t var_8 = 0x747e08
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_69e8b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x747e08 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_3 = &data_69c76e
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0
int32_t var_20 = 0
int32_t result_1 = 0
__lock(1)
int32_t var_8_1 = 0
int32_t esi = 0

while (true)
    int32_t var_24_1 = esi
    
    if (esi s>= data_75ef64)
        break
    
    void* eax_1 = *(data_75ef60 + (esi << 2))
    
    if (eax_1 != 0 && (*(eax_1 + 0xc) & 0x83) != 0)
        __lock_file2(esi, eax_1)
        int32_t var_8_2 = 1
        int32_t* eax_3 = *(data_75ef60 + (esi << 2))
        
        if ((eax_3[3].b & 0x83) != 0)
            if (arg1 == 1)
                if (sub_69c6af(eax_3) != 0xffffffff)
                    result_2 += 1
                    int32_t result_3 = result_2
            else if (arg1 == 0 && (eax_3[3].b & 2) != 0)
                int32_t eax_5 = sub_69c6af(eax_3)
                
                if (eax_5 == 0xffffffff)
                    result_1 |= eax_5
        
        int32_t var_8_3 = 0
        $LN24(esi)
    
    esi += 1

int32_t var_8_4 = 0xfffffffe
$LN20()
int32_t result = result_2

if (arg1 != 1)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_69c836
return result
