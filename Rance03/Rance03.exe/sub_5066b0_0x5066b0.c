// 函数: sub_5066b0
// 地址: 0x5066b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c15f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** eax_6

if (edx != 0)
    struct partsengine::CSpriteEngineWrapper::VTable* const var_10_2 =
        &partsengine::CSpriteEngineWrapper::`vftable'
    int32_t var_4_3 = 3
    int32_t var_24_4 = *(edx + 8)
    eax_6 = sub_44e5c0(data_75d4cc + 0x288)
    
    if (eax_6 != 0)
        sub_44eaf0(eax_6, arg2)
        eax_6.b = 1
    else
        eax_6.b = 0
    
    int32_t var_4_4 = 0xffffffff
    eax_6.b = eax_6.b == 0
    
    if (eax_6.b != 0)
        sub_505830(arg1)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_7
        eax_7.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
else
    void* esi_1 = data_75d4cc
    int32_t eax_3 = sub_44f0e0(esi_1 + 0x29c)
    struct partsengine::CSpriteEngineWrapper::VTable* const var_10_1 =
        &partsengine::CSpriteEngineWrapper::`vftable'
    int32_t var_4 = 0
    int32_t var_24 = eax_3
    void* eax_4
    int32_t* ecx_2
    eax_4, ecx_2 = sub_44e5c0(esi_1 + 0x288)
    
    if (eax_4 != 0)
        eax_4, ecx_2 = sub_44eaf0(eax_4, arg2)
        eax_4.b = 1
    else
        eax_4.b = 0
    
    arg2 = &partsengine::CSpriteEngineWrapper::`vftable'
    eax_4.b = eax_4.b == 0
    
    if (eax_4.b != 0)
        int32_t var_24_2 = eax_3
        int32_t var_4_1 = 1
        sub_5144b0(ecx_2)
        int32_t eax_5
        eax_5.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    int32_t var_4_2 = 2
    int32_t var_24_3 = eax_3
    eax_6 = sub_44e5c0(data_75d4cc + 0x288)
    
    if (*(arg1 + 4) != eax_6)
        sub_505830(arg1)
        *(arg1 + 4) = eax_6
        eax_6[1] = &eax_6[1]->Next + 1

eax_6.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
