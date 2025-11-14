// 函数: sub_5076e0
// 地址: 0x5076e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1630
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSpriteEngineWrapper::VTable* const edi = arg3

if (edi s> 0)
    void* eax_4 = *(arg1 + 4)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_7
    
    if (eax_4 != 0)
        arg3 = &partsengine::CSpriteEngineWrapper::`vftable'
        int32_t var_4_3 = 3
        int32_t var_4_4 = 0xffffffff
        eax_7.b = sub_44dc60(*(eax_4 + 8), arg2, edi).b == 0
        
        if (eax_7.b != 0)
            sub_505830(arg1)
            struct _EXCEPTION_REGISTRATION_RECORD** eax_8
            eax_8.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_8
        
    label_5077aa:
        eax_7.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    int32_t eax_5
    int32_t* ecx_2
    eax_5, ecx_2 = sub_44f0e0(data_75d4cc + 0x29c)
    arg3 = &partsengine::CSpriteEngineWrapper::`vftable'
    int32_t var_4 = 0
    bool cond:1_1 = sub_44dc60(eax_5, arg2, edi) == 0
    arg2 = &partsengine::CSpriteEngineWrapper::`vftable'
    
    if (cond:1_1 == 0)
        int32_t var_4_2 = 2
        int32_t var_20_3 = eax_5
        eax_7 = sub_44e5c0(data_75d4cc + 0x288)
        
        if (*(arg1 + 4) != eax_7)
            sub_505830(arg1)
            *(arg1 + 4) = eax_7
            eax_7[1] = &eax_7[1]->Next + 1
        
        goto label_5077aa
    
    int32_t var_20_2 = eax_5
    int32_t var_4_1 = 1
    sub_5144b0(ecx_2)

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
