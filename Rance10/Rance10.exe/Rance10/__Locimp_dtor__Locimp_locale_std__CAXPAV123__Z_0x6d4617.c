// 函数: ?_Locimp_dtor@_Locimp@locale@std@@CAXPAV123@@Z
// 地址: 0x6d4617
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 8
int32_t (* var_c)(void* arg1) = sub_749267
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_5 = __security_cookie ^ &__saved_ebp
void* const var_2c_1 = &data_6d4623
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void var_18
std::_Lockit::_Lockit(&var_18, 0)
int32_t var_8 = 0
int32_t i = *(arg1 + 0xc)

while (i != 0)
    i -= 1
    int32_t* eax_1 = *(*(arg1 + 8) + (i << 2))
    int32_t* var_14_1 = eax_1
    
    if (eax_1 != 0)
        int32_t esi_1 = *(*eax_1 + 8)
        j_sub_4033e0()
        int32_t* eax_3 = esi_1(eax_5)
        int32_t* var_14_2 = eax_3
        
        if (eax_3 != 0)
            int32_t esi_2 = **eax_3
            j_sub_4033e0()
            esi_2(1)

_free(*(arg1 + 8))
int32_t result = std::_Lockit::~_Lockit(&var_18)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d468b
return result
