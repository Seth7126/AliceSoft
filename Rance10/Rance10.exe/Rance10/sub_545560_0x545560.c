// 函数: sub_545560
// 地址: 0x545560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_d4 = 0xffffffff
int32_t (* var_d8)(void* arg1) = sub_73a0c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CConstructionProcess::VTable* var_d0
int32_t eax_2 = __security_cookie ^ &var_d0
int32_t var_128 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg6
int32_t* result_1 = result

if (arg4 != 0 && arg5 != 0 && result != 0)
    result = sub_4f4e40(data_7fcba4 + 0x124, arg3)
    
    if (result != 0)
        sub_4c3030(&var_d0)
        int32_t var_d4_1 = 0
        
        if (sub_5183d0(result, arg2, &var_d0, arg7) != 0)
            int32_t var_cc
            *(*(*arg4 + 0xc))(0) = var_cc
            int32_t var_c8
            *(*(*arg4 + 0xc))(1) = var_c8
            int32_t var_c4
            *(*(*arg4 + 0xc))(2) = var_c4
            int32_t var_c0
            *(*(*arg4 + 0xc))(3) = var_c0
            int32_t var_bc
            *(*(*arg4 + 0xc))(4) = var_bc
            int32_t var_b8
            *(*(*arg4 + 0xc))(5) = var_b8
            int32_t var_b4
            *(*(*arg4 + 0xc))(6) = var_b4
            int32_t var_b0
            *(*(*arg4 + 0xc))(7) = var_b0
            int32_t var_ac
            *(*(*arg4 + 0xc))(8) = var_ac
            int32_t var_a8
            *(*(*arg4 + 0xc))(9) = var_a8
            int32_t var_a4
            *(*(*arg4 + 0xc))(0xa) = var_a4
            int32_t var_a0
            *(*(*arg4 + 0xc))(0xb) = var_a0
            int32_t var_9c
            *(*(*arg4 + 0xc))(0xc) = var_9c
            int32_t var_98
            *(*(*arg4 + 0xc))(0xd) = var_98
            int32_t var_94
            *(*(*arg4 + 0xc))(0xe) = var_94
            int32_t var_90
            *(*(*arg4 + 0xc))(0xf) = var_90
            int32_t var_8c
            *(*(*arg4 + 0xc))(0x10) = var_8c
            int32_t var_88
            *(*(*arg4 + 0xc))(0x11) = var_88
            int32_t var_84
            *(*(*arg4 + 0xc))(0x12) = var_84
            int32_t var_80
            *(*(*arg4 + 0xc))(0x13) = var_80
            int32_t var_78
            *(*(*arg4 + 0xc))(0x14) = var_78
            int32_t var_74
            *(*(*arg4 + 0xc))(0x15) = var_74
            struct textsurface::CTextSurfaceProperty::VTable* var_118
            void var_70
            sub_4aa6d0(&var_118, &var_70)
            var_d4_1.b = 1
            int32_t var_114
            *(*(*arg4 + 0xc))(0x16) = var_114
            int32_t var_110
            *(*(*arg4 + 0xc))(0x17) = var_110
            int32_t var_10c
            *(*(*arg4 + 0xc))(0x18) = var_10c
            int32_t var_108
            *(*(*arg4 + 0xc))(0x19) = var_108
            int32_t var_104
            *(*(*arg4 + 0xc))(0x1a) = var_104
            int32_t var_fc
            *(*(*arg5 + 0x10))(0) = var_fc
            int32_t var_f4
            *(*(*arg4 + 0xc))(0x1b) = var_f4
            int32_t var_f0
            *(*(*arg4 + 0xc))(0x1c) = var_f0
            int32_t var_ec
            *(*(*arg4 + 0xc))(0x1d) = var_ec
            int32_t var_f8
            *(*(*arg5 + 0x10))(1) = var_f8
            int32_t* eax_69 = (*(*result_1 + 0x14))(0)
            int32_t* var_3c
            int32_t* esi_24 = &var_3c
            int32_t var_28
            
            if (var_28 u>= 0x10)
                esi_24 = var_3c
            
            (*(*eax_69 + 4))(esi_24)
            int32_t* eax_71 = (*(*result_1 + 0x14))(1)
            int32_t* var_24
            int32_t* ecx_47 = &var_24
            int32_t var_10
            
            if (var_10 u>= 0x10)
                ecx_47 = var_24
            
            (*(*eax_71 + 4))(ecx_47)
            char var_c
            int32_t ebx_2
            ebx_2.b = var_c != 0
            *(*(*arg4 + 0xc))(0x1e) = ebx_2
            int32_t var_7c
            *(*(*arg4 + 0xc))(0x1f) = var_7c
        
        result = sub_4c3130(&var_d0)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_d0)
return result
