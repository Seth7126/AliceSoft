// 函数: sub_505b50
// 地址: 0x505b50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c14f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s> 0)
    struct partsengine::CSpriteEngineWrapper::VTable* const esi_1 = arg3
    
    if (esi_1 s> 0)
        sub_505830(arg1)
        int32_t eax_4 = sub_44f0e0(data_75d4cc + 0x29c)
        arg3 = &partsengine::CSpriteEngineWrapper::`vftable'
        int32_t var_4 = 0
        int32_t var_4_1 = 0xffffffff
        
        if (sub_44dbe0(eax_4, arg2, esi_1, arg4, arg5, arg6, arg7) != 0)
            arg2 = &partsengine::CSpriteEngineWrapper::`vftable'
            int32_t var_4_2 = 1
            int32_t var_20_2 = eax_4
            struct _EXCEPTION_REGISTRATION_RECORD** result = sub_44e5c0(data_75d4cc + 0x288)
            
            if (*(arg1 + 4) != result)
                sub_505830(arg1)
                *(arg1 + 4) = result
                result[1] = &result[1]->Next + 1
            
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result

fsbase->NtTib.ExceptionList = ExceptionList
return false
