// 函数: sub_4fb660
// 地址: 0x4fb660
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0c06
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_114
int32_t eax_2 = __security_cookie ^ &var_114
int32_t __saved_edi
int32_t var_128 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 != 0 && arg2 != 0 && arg4 != 0)
    int32_t esi_1 = *(*(*arg3 + 0x10))(0)
    int32_t eax_9 = *(*(*arg3 + 0x10))(1)
    struct partsengine::CSprite::partsengine::CConstructionSprite::VTable** eax_12 =
        *(*(*arg3 + 0x10))(2)
    result = sub_4a8b80(data_75d4fc + 0x174, esi_1)
    
    if (result != 0)
        struct partsengine::CConstructionProcess::VTable* var_d4
        sub_47f050(&var_d4)
        int32_t var_4 = 0
        
        if (sub_4d2470(result, eax_9, &var_d4, eax_12) != 0)
            int32_t var_d0
            *(*(*arg3 + 0x10))(3) = var_d0
            int32_t var_cc
            *(*(*arg3 + 0x10))(4) = var_cc
            int32_t var_c8
            *(*(*arg3 + 0x10))(5) = var_c8
            int32_t var_c4
            *(*(*arg3 + 0x10))(6) = var_c4
            int32_t var_c0
            *(*(*arg3 + 0x10))(7) = var_c0
            int32_t var_bc
            *(*(*arg3 + 0x10))(8) = var_bc
            int32_t var_b8
            *(*(*arg3 + 0x10))(9) = var_b8
            int32_t var_b4
            *(*(*arg3 + 0x10))(0xa) = var_b4
            int32_t var_b0
            *(*(*arg3 + 0x10))(0xb) = var_b0
            int32_t var_ac
            *(*(*arg3 + 0x10))(0xc) = var_ac
            int32_t var_a8
            *(*(*arg3 + 0x10))(0xd) = var_a8
            int32_t var_a4
            *(*(*arg3 + 0x10))(0xe) = var_a4
            int32_t var_a0
            *(*(*arg3 + 0x10))(0xf) = var_a0
            int32_t var_9c
            *(*(*arg3 + 0x10))(0x10) = var_9c
            int32_t var_98
            *(*(*arg3 + 0x10))(0x11) = var_98
            int32_t var_94
            *(*(*arg3 + 0x10))(0x12) = var_94
            int32_t var_90
            *(*(*arg3 + 0x10))(0x13) = var_90
            int32_t var_8c
            *(*(*arg3 + 0x10))(0x14) = var_8c
            int32_t var_88
            *(*(*arg3 + 0x10))(0x15) = var_88
            int32_t var_84
            *(*(*arg3 + 0x10))(0x16) = var_84
            int32_t var_80
            *(*(*arg3 + 0x10))(0x17) = var_80
            struct partsengine::CCharSpriteProperty::VTable* var_108
            sub_47fa90(&var_d4, &var_108)
            var_4.b = 1
            int32_t var_104
            *(*(*arg3 + 0x10))(0x18) = var_104
            int32_t var_100
            *(*(*arg3 + 0x10))(0x19) = var_100
            int32_t var_fc
            *(*(*arg3 + 0x10))(0x1a) = var_fc
            int32_t var_f8
            *(*(*arg3 + 0x10))(0x1b) = var_f8
            int32_t var_f4
            *(*(*arg3 + 0x10))(0x1c) = var_f4
            int32_t var_ec
            *(*(*arg2 + 0x14))(0) = var_ec
            int32_t var_e4
            *(*(*arg3 + 0x10))(0x1d) = var_e4
            int32_t var_e0
            *(*(*arg3 + 0x10))(0x1e) = var_e0
            int32_t var_dc
            *(*(*arg3 + 0x10))(0x1f) = var_dc
            int32_t var_e8
            *(*(*arg2 + 0x14))(1) = var_e8
            int32_t* eax_77 = (*(*arg4 + 0x18))(0)
            int32_t* var_48
            int32_t* ecx_47 = &var_48
            int32_t var_34
            
            if (var_34 u>= 0x10)
                ecx_47 = var_48
            
            (*(*eax_77 + 4))(ecx_47)
            int32_t* eax_79 = (*(*arg4 + 0x18))(1)
            int32_t* var_30
            int32_t* ecx_50 = &var_30
            int32_t var_1c
            
            if (var_1c u>= 0x10)
                ecx_50 = var_30
            
            (*(*eax_79 + 4))(ecx_50)
            char var_18
            int32_t ebx_1
            ebx_1.b = var_18 != 0
            *(*(*arg3 + 0x10))(0x20) = ebx_1
        
        result = sub_47f160(&var_d4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_114)
return result
