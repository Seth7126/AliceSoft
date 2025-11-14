// 函数: sub_4f9d50
// 地址: 0x4f9d50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg4 s>= 0)
    result = sub_4a8b80(data_75d4fc + 0x174, arg2)
    
    if (result != 0)
        int32_t ebx_1 = 0
        int32_t* esi_1 = nullptr
        int32_t* var_18 = nullptr
        int32_t var_14_1 = 0
        int32_t var_10_1 = 0
        int32_t var_4 = 0
        void* ecx_3 = *(*(sub_510680(result[0xd], arg5) + 0x70) + 0x20)
        
        if (ecx_3 != 0)
            sub_487510(ecx_3, &var_18)
            ebx_1 = var_14_1
            esi_1 = var_18
        
        result = (ebx_1 - esi_1) s/ 0x18
        
        if (result s> arg4)
            int32_t eax_8 = arg4 * 3
            int32_t* ecx_6 = &esi_1[eax_8 * 2]
            
            if (esi_1[eax_8 * 2 + 5] u>= 0x10)
                ecx_6 = *ecx_6
            
            result = (*(*arg3 + 4))(ecx_6)
        
        if (esi_1 != 0)
            sub_4107c0(esi_1, ebx_1)
            result = j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
