// 函数: sub_68e810
// 地址: 0x68e810
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7477eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_94 = ebx
int32_t esi
int32_t var_98 = esi
int32_t edi
int32_t var_9c = edi
int32_t var_a0 = eax_2
int32_t* esp_1 = &var_a0
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_90
sub_68d2b0(&var_90, arg2)
int32_t var_8_1 = 0
char* var_80 = nullptr
int32_t var_7c = 0
int32_t var_78 = 0
var_8_1.b = 1
char eax_3 = sub_68f0b0(&var_80, arg2)
char* ebx_1 = var_80
struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CPixelShader::VTable** result

if (eax_3 != 0)
    int32_t* var_a4 = &var_90
    int32_t* var_74
    sub_4630a0(&var_74, var_a4)
    var_8_1.b = 2
    char var_68 = 0
    var_a4 = var_68.d
    char* var_70
    sub_691150(&var_74, var_70, ebx_1, var_7c)
    var_a4 = 6
    char const* const var_a8_2 = "ps_4_0"
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_403490(&var_48, "ps_4_0", var_a4)
    var_a4 = 0x28
    var_8_1.b = 3
    struct graphengined3d11::CShaderImage::VTable** eax_4 = sub_6e810c(var_a4)
    var_68.d = eax_4
    void** edi_1 = &eax_4[4]
    *eax_4 = &graphengined3d11::CShaderImage::`vftable'
    eax_4[1] = 0
    eax_4[2] = 0
    eax_4[3] = 0
    edi_1[5] = 0xf
    edi_1[4] = 0
    char* eax_5
    
    if (edi_1[5] u< 0x10)
        eax_5 = edi_1
    else
        eax_5 = *edi_1
    
    var_a4 = 2
    void* const var_a8_3 = &data_76f3ac
    *eax_5 = 0
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    sub_403490(&var_30, "ps", var_a4)
    var_8_1.b = 4
    var_a4 = &var_48
    var_8_1.b = 3
    ebx_1.b = sub_68af70(eax_4, &var_74, &var_30, var_a4) == 0
    
    if (var_1c_1 u>= 0x10)
        var_a4 = 1
        sub_403160(var_30.d, var_1c_1 + 1, var_a4)
    
    int32_t* ebx_2
    
    if (ebx_1.b == 0)
        result = sub_686640(*(arg1 + 4))
        
        if (result != 0)
            char* ecx_18 = eax_4[1]
            var_a4 = eax_4[2] - ecx_18
            bool cond:1_1 = sub_6895d0(result, ecx_18) != 0
            struct graphengined3d11::CShaderImage::VTable* eax_28 = *eax_4
            var_a4 = 1
            esp_1 = &var_a4
            
            if (cond:1_1)
                eax_28->vFunc_0()
                ebx_2 = var_74
            else
                eax_28->vFunc_0()
                (*result)->vFunc_1()
                ebx_2 = var_74
                result = nullptr
        else
            struct graphengined3d11::CShaderImage::VTable* eax_24 = *eax_4
            var_a4 = 1
            eax_24->vFunc_0(var_a4)
            esp_1 = &var_a0
            ebx_2 = var_74
    else
        char var_61 = 0
        var_a4 = &var_61
        sub_4263a0(&var_74, var_a4)
        void** eax_9
        
        if (edi_1[5] u< 0x10)
            eax_9 = edi_1
        else
            eax_9 = *edi_1
        
        var_a4 = &data_76f3b0
        var_68.d = eax_9
        void* var_60
        sub_403360(&var_60, var_a4)
        var_8_1.b = 5
        ebx_2 = var_74
        var_a4 = ebx_2
        var_8_1.b = 6
        sub_6c52e0(sub_691040(&var_68, &var_60, &var_30, &var_68, var_a4))
        
        if (var_1c_1 u>= 0x10)
            var_a4 = 1
            sub_403160(var_30.d, var_1c_1 + 1, var_a4)
        
        var_8_1.b = 3
        int32_t var_1c_2 = 0xf
        int32_t var_20_2 = 0
        var_30 = 0
        int32_t var_4c
        
        if (var_4c u>= 0x10)
            var_a4 = 1
            sub_403160(var_60, var_4c + 1, var_a4)
        
        if (edi_1[5] u>= 0x10)
            edi_1 = *edi_1
        
        var_a4 = &data_76f36c
        var_68.d = edi_1
        sub_403360(&var_60, var_a4)
        var_8_1.b = 7
        var_a4 = ebx_2
        var_8_1.b = 8
        sub_45aae0(sub_691040(&var_68, &var_60, &var_30, &var_68, var_a4))
        
        if (var_1c_2 u>= 0x10)
            var_a4 = 1
            sub_403160(var_30.d, var_1c_2 + 1, var_a4)
        
        int32_t var_1c_3 = 0xf
        int32_t var_20_3 = 0
        var_30 = 0
        
        if (var_4c u>= 0x10)
            var_a4 = 1
            sub_403160(var_60, var_4c + 1, var_a4)
        
        struct graphengined3d11::CShaderImage::VTable* eax_22 = *eax_4
        var_a4 = 1
        eax_22->vFunc_0(var_a4)
        esp_1 = &var_a0
        result = nullptr
    
    if (var_34_1 u>= 0x10)
        *(esp_1 - 4) = 1
        *(esp_1 - 8) = var_34_1 + 1
        *(esp_1 - 0xc) = var_48.d
        sub_403160()
    
    int32_t var_34_2 = 0xf
    int32_t var_38_2 = 0
    var_48 = 0
    
    if (ebx_2 != 0)
        *(esp_1 - 4) = 1
        int32_t var_6c
        *(esp_1 - 8) = var_6c - ebx_2
        *(esp_1 - 0xc) = ebx_2
        sub_403160()
    
    ebx_1 = var_80
else
    result = nullptr

if (ebx_1 != 0)
    *(esp_1 - 4) = 1
    *(esp_1 - 8) = var_78 - ebx_1
    *(esp_1 - 0xc) = ebx_1
    sub_403160()

int32_t eax_36 = var_90

if (eax_36 != 0)
    *(esp_1 - 4) = 1
    int32_t var_88
    *(esp_1 - 8) = var_88 - eax_36
    *(esp_1 - 0xc) = eax_36
    sub_403160()

fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
esp_1[3]
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
