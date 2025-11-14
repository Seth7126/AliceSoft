// 函数: sub_506a20
// 地址: 0x506a20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c15f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** eax_7

if (eax_3 != 0)
    struct partsengine::CSpriteEngineWrapper::VTable* const var_10_1 =
        &partsengine::CSpriteEngineWrapper::`vftable'
    int32_t var_4_3 = 3
    int32_t var_4_4 = 0xffffffff
    eax_7.b = sub_514580(*(eax_3 + 8), arg2).b == 0
    
    if (eax_7.b != 0)
        sub_505830(arg1)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_8
        eax_8.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
else
    int32_t eax_4 = sub_44f0e0(data_75d4cc + 0x29c)
    struct partsengine::CSpriteEngineWrapper::VTable* const var_10 =
        &partsengine::CSpriteEngineWrapper::`vftable'
    int32_t var_4 = 0
    char eax_5
    int32_t* ecx_2
    eax_5, ecx_2 = sub_514580(eax_4, arg2)
    arg2 = &partsengine::CSpriteEngineWrapper::`vftable'
    ecx_2.b = eax_5 == 0
    
    if (ecx_2.b != 0)
        int32_t var_24_1 = eax_4
        int32_t var_4_1 = 1
        sub_5144b0(ecx_2)
        int32_t eax_6
        eax_6.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    int32_t var_4_2 = 2
    int32_t var_24_2 = eax_4
    eax_7 = sub_44e5c0(data_75d4cc + 0x288)
    
    if (*(arg1 + 4) != eax_7)
        sub_505830(arg1)
        *(arg1 + 4) = eax_7
        eax_7[1] = &eax_7[1]->Next + 1

eax_7.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
