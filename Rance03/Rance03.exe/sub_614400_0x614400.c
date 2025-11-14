// 函数: sub_614400
// 地址: 0x614400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_12 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd970
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t* var_4c
int32_t* var_40

if ((*(*arg2 + 8))(__security_cookie ^ &__saved_edi) == 0)
    bool cond:0_1 = (*(*arg2 + 0xc))() == 0
    void* eax_14 = *arg2
    int32_t* var_28
    int32_t var_14
    
    if (not(cond:0_1))
        void* const ecx_3
        
        if ((*(eax_14 + 0x60))() == 0)
            ecx_3 = &data_6ebf14
            
            if ((*(*arg2 + 0x64))() == 0)
                ecx_3 = &data_6da7d2
        else
            ecx_3 = &data_6ebf10
        
        sub_401f60(&var_28, ecx_3)
        int32_t var_4 = 0
        int32_t* eax_20 = &var_28
        
        if (var_14 u>= 0x10)
            eax_20 = var_28
        
        int32_t var_6c_1 = (*(*arg2 + 0x68))(eax_20)
        sub_4691f0(&var_40, "ps_shadeoff%d%s.fx")
        struct graphengined3d11::CShaderNumber::VTable* const var_48_1 =
            &graphengined3d11::CShaderNumber::`vftable'
        var_4.b = 2
        int32_t** var_68_3 = &var_40
        var_4c = sub_6181e0()
        int32_t var_2c
        
        if (var_2c u>= 0x10)
            j__free(var_40)
        
        int32_t var_2c_1 = 0xf
        int32_t var_30_1 = 0
        var_40.b = 0
        goto label_614550
    
    if ((*(eax_14 + 0x10))() == 0)
        if ((*(*arg2 + 0x14))() == 0)
            if ((*(*arg2 + 0x18))() == 0)
                struct graphengined3d11::CShaderNumber::VTable* const var_48_5 =
                    &graphengined3d11::CShaderNumber::`vftable'
                int32_t var_4_7 = 9
                int32_t ecx_16
                ecx_16.b = (*(*arg2 + 0x4c))(zx.d((*(*arg2 + 0x58))(arg3.d))) != 0
                int32_t ecx_19
                ecx_19.b = (*(*arg2 + 0x3c))((*(*arg2 + 0x40))(ecx_16)) != 0
                int32_t ecx_22
                ecx_22.b = (*(*arg2 + 0x34))((*(*arg2 + 0x38))(ecx_19)) != 0
                int32_t ecx_24
                ecx_24.b = (*(*arg2 + 0x30))(ecx_22) != 0
                int32_t ecx_26
                ecx_26.b = (*(*arg2 + 0x2c))(ecx_24) != 0
                int32_t ecx_28
                ecx_28.b = (*(*arg2 + 0x28))(ecx_26) != 0
                int32_t ecx_31
                ecx_31.b = (*(*arg2 + 0x1c))((*(*arg2 + 0x20))(ecx_28)) != 0
                int32_t var_4_8 = 0xffffffff
                var_4c = sub_618330(ecx_31)
            else
                sub_401f60(&var_28, "ps_bicubic.fx")
                int32_t var_4_5 = 7
                struct graphengined3d11::CShaderNumber::VTable* const var_48_4 =
                    &graphengined3d11::CShaderNumber::`vftable'
                var_4_5.b = 8
                int32_t** var_68_8 = &var_28
                var_4c = sub_6181e0()
                int32_t var_4_6 = 0xffffffff
                sub_401fb0(&var_28)
        else
            sub_401f60(&var_28, "ps_ssao.fx")
            int32_t var_4_3 = 5
            struct graphengined3d11::CShaderNumber::VTable* const var_48_3 =
                &graphengined3d11::CShaderNumber::`vftable'
            var_4_3.b = 6
            int32_t** var_68_7 = &var_28
            var_4c = sub_6181e0()
            int32_t var_4_4 = 0xffffffff
            sub_401fb0(&var_28)
    else
        sub_401f60(&var_28, "ps_dof.fx")
        int32_t var_4_1 = 3
        struct graphengined3d11::CShaderNumber::VTable* const var_48_2 =
            &graphengined3d11::CShaderNumber::`vftable'
        var_4_1.b = 4
        int32_t** var_68_5 = &var_28
        var_4c = sub_6181e0()
    label_614550:
        int32_t var_4_2 = 0xffffffff
        
        if (var_14 u>= 0x10)
            j__free(var_28)
else
    int32_t eax_8
    eax_8.b = arg3 != 0
    var_4c = eax_8 << 0x18 | 6

int32_t* var_44
sub_420040(arg1 + 0x90, &var_44, &var_4c)
int32_t* esi = var_44
struct IInterface::graphengined3d11::CPixelShader::VTable** result

if (esi != *(arg1 + 0x90))
    (**esi[5])()
    result = esi[5]
else
    struct IInterface::graphengined3d11::CPixelShader::VTable** result_1
    
    if (*(arg1 + 0xc) == 0)
        char eax_71 = (*(*arg2 + 0x18))()
        var_40 = nullptr
        int32_t var_3c_1 = 0
        int32_t var_38_1 = 0
        int32_t* edi_1
        
        if (eax_71 == 0)
            int32_t var_4_10 = 0xb
            int32_t** var_68_15 = &var_40
            char eax_77 = sub_6086f0(arg1 + 0x10, var_4c)
            edi_1 = var_40
            
            if (eax_77 != 0)
                if (edi_1 == var_3c_1)
                    goto label_6147c3
                
                result_1 = sub_60bf20(*(arg1 + 4))
                
                if (result_1 == 0)
                    goto label_6147c3
                
                void* var_68_17 = var_3c_1 - edi_1
                
                if (sub_60eb10(result_1, edi_1) == 0)
                    sub_64b530(0x6ebfc0)
                label_6147c0:
                    (*result_1)->__offset(0x4).d()
                    goto label_6147c3
                
            label_614862:
                int32_t var_4_11 = 0xffffffff
                sub_403510(&var_40)
            label_614873:
                (*result_1)->__offset(0x0).d()
                *sub_41ff70(arg1 + 0x90, &var_4c) = result_1
                result = result_1
            else
                int32_t* var_68_16 = var_4c
                sub_64b530(0x6ebf8c)
            label_6147c3:
                
                if (edi_1 == 0)
                    result = nullptr
                else
                    j__free(edi_1)
                    result = nullptr
        else
            int32_t var_4_9 = 0xa
            HMODULE hModule = *(arg1 + 8)
            HRSRC eax_72 = FindResourceA(hModule, 0x93, &data_6ebff8)
            
            if (eax_72 != 0)
                char eax_73 = sub_699610(eax_72, &var_40, hModule, eax_72)
                edi_1 = var_40
                
                if (eax_73 == 0 || edi_1 == var_3c_1)
                    goto label_6147c3
                
                result_1 = sub_60bf20(*(arg1 + 4))
                
                if (result_1 == 0)
                    goto label_6147c3
                
                void* var_68_13 = var_3c_1 - edi_1
                
                if (sub_60eb10(result_1, edi_1) != 0)
                    goto label_614862
                
                goto label_6147c0
            
            result = nullptr
    else
        result_1 = sub_614890(arg1, var_4c)
        
        if (result_1 != 0)
            goto label_614873
        
        result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
