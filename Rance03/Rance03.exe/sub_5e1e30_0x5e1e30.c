// 函数: sub_5e1e30
// 地址: 0x5e1e30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) == 0)
    struct IGraphEngine::graphengined3d11::CGraphEngine::VTable** eax_3 = sub_69adc6(0x288)
    struct IGraphEngine::graphengined3d11::CGraphEngine::VTable** var_10_1 = eax_3
    int32_t var_4 = 0
    struct IGraphEngine::graphengined3d11::CGraphEngine::VTable** eax_4
    
    if (eax_3 == 0)
        eax_4 = nullptr
    else
        eax_4 = sub_60b600(eax_3, arg4, arg5, arg6, arg7, arg2, arg3, arg9, arg8)
    
    int32_t var_4_1 = 0xffffffff
    *(arg1 + 4) = eax_4

(***(arg1 + 4))(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return *(arg1 + 4)
