// 函数: ?_Locimp_Addfac@_Locimp@locale@std@@CAXPAV123@PAVfacet@23@I@Z
// 地址: 0x6d2c5b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 8
int32_t (* var_c)(void* arg1) = sub_749267
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t __saved_ebp
int32_t eax_11 = __security_cookie ^ &__saved_ebp
void* const var_2c_2 = &data_6d2c67
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18
std::_Lockit::_Lockit(&var_18, 0)
int32_t var_8 = 0

if (*(arg1 + 0xc) u<= arg3)
    int32_t i = arg3 + 1
    
    if (i u< 0x28)
        int32_t var_2c = 0x28
        i = 0x28
    
    int32_t eax_2 = __realloc_base(*(arg1 + 8), i << 2)
    
    if (eax_2 == 0)
        sub_6d08ed()
        noreturn
    
    *(arg1 + 8) = eax_2
    
    while (*(arg1 + 0xc) u< i)
        *(*(arg1 + 8) + (*(arg1 + 0xc) << 2)) = 0
        *(arg1 + 0xc) += 1

int32_t esi_1 = *(*arg2 + 4)
j_sub_4033e0()
esi_1(eax_11)
int32_t* eax_6 = *(*(arg1 + 8) + (arg3 << 2))
int32_t* var_14 = eax_6

if (eax_6 != 0)
    int32_t esi_2 = *(*eax_6 + 8)
    j_sub_4033e0()
    int32_t* eax_8 = esi_2()
    var_14 = eax_8
    
    if (eax_8 != 0)
        int32_t esi_3 = **eax_8
        j_sub_4033e0()
        esi_3(1)

*(*(arg1 + 8) + (arg3 << 2)) = arg2
int32_t result = std::_Lockit::~_Lockit(&var_18)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d2d1c
return result
