// 函数: sub_505830
// 地址: 0x505830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1488
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    int32_t ebx_1 = ecx[2]
    ecx[1] -= 1
    
    if (ecx[1] s<= 0)
        (**ecx)(1)
    
    struct partsengine::CSpriteEngineWrapper::VTable* const var_10_1 =
        &partsengine::CSpriteEngineWrapper::`vftable'
    int32_t var_4 = 0
    void* esi_1 = data_75d4cc
    int32_t var_18 = ebx_1
    int32_t* result_1
    int32_t* ecx_2 = sub_42f3d0(esi_1 + 0x2a0, &result_1, &var_18)
    result = result_1
    
    if (result != *(esi_1 + 0x2a0))
        int32_t var_2c_2 = ebx_1
        result = sub_44dcc0(ecx_2)
    
    *(arg1 + 4) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
