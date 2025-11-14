// 函数: sub_507d30
// 地址: 0x507d30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c16b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_8
void* arg_c
int32_t arg_10
struct partsengine::CSpriteEngineWrapper::VTable result
int32_t ebx_1
int32_t ebp_1

if (arg1 != 0)
    int32_t arg_4
    sub_506c00(arg1, &arg_4, &arg_8, &arg_c, &arg_10)
    ebx_1 = arg_8
    ebp_1 = arg_4
    result = sub_506b50(arg1, ebp_1, ebx_1, arg_c, arg_10)

if (arg1 == 0 || result.vFunc_0.b != 0)
    result.vFunc_0.b = 0
else
    struct partsengine::CSpriteEngineWrapper::VTable* arg_14
    bool cond:0_1 = arg_14 s<= 0xff
    int32_t* eax_3 = &arg_8
    arg_8 = 0xff
    
    if (cond:0_1)
        eax_3 = &arg_14
    
    struct partsengine::CSpriteEngineWrapper::VTable* esi_1 = *eax_3
    int32_t* eax_4 = &arg_8
    int32_t arg_18
    
    if (arg_18 s<= 0xff)
        eax_4 = &arg_18
    
    arg_8 = 0xff
    int32_t arg_1c
    bool cond:2_1 = arg_1c s<= 0xff
    arg_14 = esi_1
    int32_t edx_1 = *eax_4
    int32_t* eax_5 = &arg_8
    
    if (cond:2_1)
        eax_5 = &arg_1c
    
    arg_8 = 0xff
    arg_18 = edx_1
    int32_t ecx_1 = *eax_5
    int32_t* eax_6 = &arg_8
    
    if (esi_1 s>= 0)
        eax_6 = &arg_14
    
    arg_8 = 0
    arg_1c = ecx_1
    int32_t eax_7 = *eax_6
    int32_t* eax_8 = &arg_14
    
    if (edx_1 s>= 0)
        eax_8 = &arg_18
    
    arg_14 = nullptr
    arg_8 = *eax_8
    int32_t* eax_10 = &arg_14
    
    if (ecx_1 s>= 0)
        eax_10 = &arg_1c
    
    arg_14 = nullptr
    arg_18 = *eax_10
    struct partsengine::CSpriteEngineWrapper::VTable eax_12 = arg1
    struct partsengine::CSpriteEngineWrapper::VTable* esi_2 = *(eax_12 + 0x18)
    arg_14 = *(eax_12 + 0x1c)
    void var_28
    sub_505680(&var_28)
    int32_t var_4 = 0
    
    if (esi_2 s> 0)
        sub_5076e0(&var_28, esi_2, arg_14)
    
    int32_t var_44_4 = arg_18
    int32_t var_48_4 = arg_8
    int32_t var_4c_3 = eax_7
    struct partsengine::CSpriteEngineWrapper::VTable* var_50_3 = arg_14
    struct partsengine::CSpriteEngineWrapper::VTable* var_54_1 = esi_2
    int32_t var_58_1 = 0
    int32_t var_5c_1 = 0
    int32_t* ecx_5 = sub_506fb0(&var_28)
    arg_14 = &partsengine::CSpriteEngineWrapper::`vftable'
    var_4.b = 1
    void* var_24
    int32_t eax_15
    
    if (var_24 != 0)
        eax_15 = *(var_24 + 8)
    else
        eax_15 = 0xffffffff
    
    int32_t var_44_5 = eax_15
    int32_t eax_16 = sub_514500(ecx_5)
    int32_t* eax_17 = sub_5065e0(arg1)
    struct partsengine::CSpriteEngineWrapper::VTable ecx_7 = arg1
    
    if (ecx_7 != 0)
        (*(*ecx_7 + 0x18))(eax_17, ebp_1, ebx_1, eax_16, ebp_1, ebx_1, arg_c, arg_10)
    
    var_4.b = 0
    sub_505830(&var_28)
    int32_t var_4_1 = 0xffffffff
    sub_505790(&var_28)
    result.vFunc_0.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
