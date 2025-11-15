// 函数: sub_6878b0
// 地址: 0x6878b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_747102
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x264) == 0)
    struct graphengined3d11::CShaderManager::VTable** eax_4 = sub_6e810c(0x174)
    struct graphengined3d11::CShaderManager::VTable** var_14_1 = eax_4
    int32_t var_8_1 = 0
    struct graphengined3d11::CShaderManager::VTable** eax_5 =
        sub_68b3b0(eax_4, arg1, *(arg1 + 0x28), arg2)
    int32_t var_8_2 = 0xffffffff
    *(arg1 + 0x264) = eax_5
    
    if (sub_68bc00(eax_5) == 0)
        int32_t* ecx_2 = *(arg1 + 0x264)
        
        if (ecx_2 != 0)
            (**ecx_2)(1)
        
        *(arg1 + 0x264) = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0

fsbase->NtTib.ExceptionList = ExceptionList
return 1
