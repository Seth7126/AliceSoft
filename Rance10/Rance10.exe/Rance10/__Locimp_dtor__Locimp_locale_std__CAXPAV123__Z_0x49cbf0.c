// 函数: ?_Locimp_dtor@_Locimp@locale@std@@CAXPAV123@@Z
// 地址: 0x49cbf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730974
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0

if (*(arg1 + 4) == 0)
    struct common::SuicideRefCounter<class IGraphEngine>::graphengined3d11::CGraphEngine::VTable** 
        eax_3 = sub_6e810c(0x2d4)
    struct common::SuicideRefCounter<class IGraphEngine>::graphengined3d11::CGraphEngine::VTable** 
        var_18_1 = eax_3
    int32_t var_20_1 = arg6
    struct common::CSize::VTable* const var_24 = &common::CSize::`vftable'
    int32_t var_1c_1 = arg7
    int32_t var_2c_1 = arg4
    struct common::CSize::VTable* const var_30 = &common::CSize::`vftable'
    int32_t var_28_1 = arg5
    int32_t var_8_1 = 2
    int32_t var_14_1 = 3
    *(arg1 + 4) = sub_685d40(eax_3, &var_30, &var_24, arg2, arg3, arg9, arg8)
    int32_t var_8_2 = 0xffffffff

(***(arg1 + 4))(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return *(arg1 + 4)
