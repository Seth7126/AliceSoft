// 函数: sub_614890
// 地址: 0x614890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cd9c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_70
int32_t eax_2 = __security_cookie ^ &var_70
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_54 = 0
int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_4 = 0
struct IInterface::graphengined3d11::CPixelShader::VTable** result

if (sub_612c80(arg2, &var_54) != 0)
    int32_t* var_60 = nullptr
    int32_t var_5c_1 = 0
    int32_t var_58_1 = 0
    var_4.b = 1
    char eax_6 = sub_614b20(&var_60, arg2)
    int32_t* ebx_1 = var_60
    
    if (eax_6 != 0)
        int32_t var_6c
        sub_459330(&var_6c, &var_54)
        var_4.b = 2
        int32_t var_48
        int32_t var_84_3 = var_48
        int32_t* var_68
        sub_617bb0(&var_6c, var_68, ebx_1, var_5c_1)
        char var_44
        sub_401f60(&var_44, "ps_4_0")
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
        
        void* var_2c
        sub_401f60(&var_2c, "ps")
        var_4.b = 4
        var_4.b = 3
        bool eax_8 = sub_610100(esi_1, &var_6c, &var_2c, &var_44) == 0
        bool var_6d = eax_8
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
            eax_8 = var_6d
        
        if (eax_8 != 0)
            var_6d = false
            sub_414b60(&var_6c, &var_6d)
            void* eax_9 = &esi_1[4]
            
            if (esi_1[9] u>= 0x10)
                eax_9 = *eax_9
            
            int32_t var_84_7 = var_6c
            void* var_88_4 = eax_9
            int32_t var_8c_3 = 0x6da7d6
            sub_64b530(0x6ec200)
            goto label_614a54
        
        result = sub_60bf20(*(arg1 + 4))
        
        if (result != 0)
            int32_t* ecx_8 = esi_1[1]
            void* var_84_8 = esi_1[2] - ecx_8
            
            if (sub_60eb10(result, ecx_8) == 0)
                if (esi_1 != 0)
                    (*esi_1)->vFunc_0(1)
                
                (*result)->__offset(0x4).d(eax_4)
                result = nullptr
            else if (esi_1 != 0)
                (*esi_1)->vFunc_0(1)
        else
        label_614a54:
            
            if (esi_1 == 0)
                result = nullptr
            else
                (*esi_1)->vFunc_0(1)
                result = nullptr
        
        int32_t var_30
        
        if (var_30 u>= 0x10)
            j__free(var_44.d)
        
        int32_t eax_18 = var_6c
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
        
        if (eax_18 != 0)
            j__free(eax_18)
    else
        result = nullptr
    
    if (ebx_1 != 0)
        j__free(ebx_1)
else
    result = nullptr

int32_t eax_19 = var_54

if (eax_19 != 0)
    j__free(eax_19)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_70)
return result
