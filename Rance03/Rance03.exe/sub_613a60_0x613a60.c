// 函数: sub_613a60
// 地址: 0x613a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd840
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_5c = 0
int32_t var_58 = 0
int32_t var_54 = 0
int32_t var_4 = 0
struct IInterface::graphengined3d11::CVertexShader::VTable** result

if (sub_612c80(arg2, &var_5c) != 0)
    int32_t* var_68 = nullptr
    int32_t var_64_1 = 0
    int32_t var_60_1 = 0
    var_4.b = 1
    bool eax_6 = sub_613d30(&var_68, arg2)
    int32_t* ebx_1 = var_68
    
    if (eax_6 != 0)
        int32_t var_50
        sub_459330(&var_50, &var_5c)
        var_4.b = 2
        int32_t var_44
        int32_t var_80_3 = var_44
        int32_t* var_4c
        sub_617bb0(&var_50, var_4c, ebx_1, var_64_1)
        char var_28
        sub_401f60(&var_28, "vs_4_0")
        var_4.b = 3
        struct graphengined3d11::CShaderImage::VTable** esi_1 = sub_69adc6(0x28)
        
        if (esi_1 == 0)
            esi_1 = nullptr
        else
            *esi_1 = &graphengined3d11::CShaderImage::`vftable'
            esi_1[1] = 0
            esi_1[2] = 0
            esi_1[3] = 0
            esi_1[9] = 0xf
            esi_1[8] = 0
            esi_1[4].b = 0
        
        void* const var_40
        sub_401f60(&var_40, "vs")
        var_4.b = 4
        var_4.b = 3
        bool eax_8 = sub_610100(esi_1, &var_50, &var_40, &var_28) == 0
        int32_t var_2c
        
        if (var_2c u>= 0x10)
            j__free(var_40)
        
        if (eax_8 == 0)
            var_40 = nullptr
            int32_t var_3c_1 = 0
            int32_t var_38_1 = 0
            void** ecx_6 = &var_40
            var_4.b = 5
            
            if (arg3 == 0)
                sub_617ae0(ecx_6)
            else
                sub_617a90(ecx_6)
            
            result = sub_60c0a0(*(arg1 + 4))
            
            if (result == 0)
                result = nullptr
            else
                int32_t* ecx_8 = esi_1[1]
                void** var_80_7 = &var_40
                
                if (sub_61af80(result, ecx_8, esi_1[2] - ecx_8) == 0)
                    if (esi_1 != 0)
                        (*esi_1)->vFunc_0(1)
                    
                    (*result)->__offset(0x4).d(eax_4)
                    result = nullptr
                else if (esi_1 != 0)
                    (*esi_1)->vFunc_0(1)
            
            void* const eax_17 = var_40
            
            if (eax_17 != 0)
                j__free(eax_17)
        else
            void* eax_9 = &esi_1[4]
            
            if (esi_1[9] u>= 0x10)
                eax_9 = *eax_9
            
            void* var_80_6 = eax_9
            int32_t var_84_4 = 0x6da7d3
            sub_64b530(0x6ec11c)
            
            if (esi_1 != 0)
                (*esi_1)->vFunc_0(1)
            
            result = nullptr
        
        int32_t var_14
        
        if (var_14 u>= 0x10)
            j__free(var_28.d)
        
        int32_t eax_18 = var_50
        int32_t var_14_1 = 0xf
        int32_t var_18_1 = 0
        var_28 = 0
        
        if (eax_18 != 0)
            j__free(eax_18)
    else
        result = nullptr
    
    if (ebx_1 != 0)
        j__free(ebx_1)
else
    result = nullptr

int32_t eax_19 = var_5c

if (eax_19 != 0)
    j__free(eax_19)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
