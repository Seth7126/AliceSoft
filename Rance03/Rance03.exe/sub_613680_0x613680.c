// 函数: sub_613680
// 地址: 0x613680
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_5 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd7e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* edi = arg_4
int32_t __saved_edi
char var_30_1

if ((*(*edi + 0xc))(__security_cookie ^ &__saved_edi) != 0)
    var_30_1 = 1
else if ((*(*edi + 0x10))() != 0)
    var_30_1 = 1
else if ((*(*edi + 0x14))() != 0)
    var_30_1 = 1
else
    var_30_1 = 0
    
    if ((*(*edi + 0x18))() != 0)
        var_30_1 = 1

int32_t* ebp

if ((*(*edi + 8))() != 0)
    ebp = 2
    
    if ((*(*edi + 0x44))() != 0)
        ebp = 0x4002
else if (var_30_1 == 0)
    struct graphengined3d11::CShaderNumber::VTable* const var_28_1 =
        &graphengined3d11::CShaderNumber::`vftable'
    int32_t var_4 = 0
    int32_t ecx_10
    ecx_10.b = (*(*edi + 0x4c))(zx.d(
        (*(*edi + 0x50))(zx.d((*(*edi + 0x54))(zx.d((*(*edi + 0x5c))())))) != 0)) != 0
    int32_t ecx_12
    ecx_12.b = (*(*edi + 0x48))(ecx_10) != 0
    int32_t ecx_14
    ecx_14.b = (*(*edi + 0x44))(ecx_12) != 0
    int32_t ecx_16
    ecx_16.b = (*(*edi + 0x3c))(ecx_14) != 0
    int32_t ecx_18
    ecx_18.b = (*(*edi + 0x34))(ecx_16) != 0
    int32_t ecx_20
    ecx_20.b = (*(*edi + 0x30))(ecx_18) != 0
    int32_t ecx_22
    ecx_22.b = (*(*edi + 0x2c))(ecx_20) != 0
    int32_t ecx_24
    ecx_24.b = (*(*edi + 0x24))(ecx_22) != 0
    int32_t ecx_27
    ecx_27.b = (*(*edi + 0x1c))((*(*edi + 0x20))(ecx_24)) != 0
    ebp = sub_6182b0(ecx_27)
    int32_t var_4_1 = 0xffffffff
else
    ebp = 1

arg_4 = ebp
int32_t* var_2c
sub_420040(arg1 + 0x88, &var_2c, &arg_4)
int32_t* esi = var_2c
struct IInterface::graphengined3d11::CVertexShader::VTable** result

if (esi != *(arg1 + 0x88))
    (**esi[5])()
    result = esi[5]
else
    struct IInterface::graphengined3d11::CVertexShader::VTable** result_1
    
    if (*(arg1 + 0xc) == 0)
        int32_t* var_24
        int32_t* var_18
        int32_t** ecx_37
        int32_t** ecx_39
        int32_t* edi_1
        
        if ((*(*edi + 0x18))() == 0)
            var_18 = nullptr
            int32_t var_14_2 = 0
            int32_t var_10_2 = 0
            int32_t var_4_3 = 3
            int32_t** var_48_6 = &var_18
            char eax_74 = sub_6086f0(arg1 + 0x10, arg_4)
            edi_1 = var_18
            
            if (eax_74 != 0)
                if (edi_1 == var_14_2)
                    goto label_613a05
                
                var_24 = nullptr
                int32_t var_20_2 = 0
                int32_t var_1c_2 = 0
                int32_t** ecx_41 = &var_24
                var_4_3.b = 4
                
                if (var_30_1 == 0)
                    sub_617ae0(ecx_41)
                else
                    sub_617a90(ecx_41)
                
                result_1 = sub_60c0a0(*(arg1 + 4))
                
                if (result_1 != 0)
                    int32_t** var_48_8 = &var_24
                    
                    if (sub_61af80(result_1, edi_1, var_14_2 - edi_1) != 0)
                        sub_403510(&var_24)
                        ecx_39 = &var_18
                        goto label_613a37
                    
                    (*result_1)->__offset(0x4).d()
                
                ecx_37 = &var_24
                goto label_613a00
            
            int32_t* var_48_7 = arg_4
            sub_64b530(0x6ec164)
        label_613a05:
            
            if (edi_1 == 0)
                result = nullptr
            else
                j__free(edi_1)
                result = nullptr
        else
            var_24 = nullptr
            int32_t var_20_1 = 0
            int32_t var_1c_1 = 0
            int32_t var_4_2 = 1
            HMODULE hModule = *(arg1 + 8)
            HRSRC eax_69 = FindResourceA(hModule, 0x92, &data_6ec1b4)
            
            if (eax_69 == 0)
                result = nullptr
            else
                char eax_70 = sub_699610(eax_69, &var_24, hModule, eax_69)
                edi_1 = var_24
                
                if (eax_70 == 0 || edi_1 == var_20_1)
                    goto label_613a05
                
                var_18 = nullptr
                int32_t var_14_1 = 0
                int32_t var_10_1 = 0
                var_4_2.b = 2
                sub_617a90(&var_18)
                result_1 = sub_60c0a0(*(arg1 + 4))
                
                if (result_1 == 0)
                    goto label_613930
                
                int32_t* var_48_5 = &var_18
                
                if (sub_61af80(result_1, edi_1, var_20_1 - edi_1) == 0)
                    (*result_1)->__offset(0x4).d()
                label_613930:
                    ecx_37 = &var_18
                label_613a00:
                    sub_403510(ecx_37)
                    goto label_613a05
                
                sub_403510(&var_18)
                ecx_39 = &var_24
            label_613a37:
                int32_t var_4_4 = 0xffffffff
                sub_403510(ecx_39)
            label_613a48:
                (*result_1)->__offset(0x0).d()
                *sub_41ff70(arg1 + 0x88, &arg_4) = result_1
                result = result_1
    else
        result_1 = sub_613a60(arg1, ebp, var_30_1)
        
        if (result_1 != 0)
            goto label_613a48
        
        result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
return result
