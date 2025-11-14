// 函数: sub_60cf80
// 地址: 0x60cf80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cd2ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_24 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x218) == 0)
    struct graphengined3d11::CShaderManager::VTable** eax_4 = sub_69adc6(0xc8)
    struct graphengined3d11::CShaderManager::VTable** var_1c_1 = eax_4
    int32_t var_c_1 = 0
    struct graphengined3d11::CShaderManager::VTable** eax_5
    
    if (eax_4 == 0)
        eax_5 = nullptr
    else
        eax_5 = sub_6103d0(eax_4, arg1, *(arg1 + 0x28), arg2)
    
    int32_t var_c_2 = 0xffffffff
    *(arg1 + 0x218) = eax_5
    
    if (sub_610c30(eax_5) == 0)
        int32_t* ecx_2 = *(arg1 + 0x218)
        
        if (ecx_2 != 0)
            (**ecx_2)(1)
        
        *(arg1 + 0x218) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0

fsbase->NtTib.ExceptionList = ExceptionList
return 1
