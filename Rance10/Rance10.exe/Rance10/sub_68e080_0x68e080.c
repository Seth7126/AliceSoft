// 函数: sub_68e080
// 地址: 0x68e080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7476f5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_9c = 0
void* var_98
sub_68d2b0(&var_98, arg2)
int32_t var_8_1 = 0
char* var_70 = nullptr
int32_t var_6c = 0
int32_t var_68 = 0
var_8_1.b = 1
char eax_3 = sub_68e410(&var_70, arg2)
char* ebx = var_70
struct common::NotifyRefCounter<class IInterface>::graphengined3d11::CVertexShader::VTable** result

if (eax_3 != 0)
    void* var_8c
    sub_4630a0(&var_8c, &var_98)
    var_8_1.b = 2
    int32_t var_b0_2 = 0.d
    char* var_88
    sub_691150(&var_8c, var_88, ebx, var_6c)
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403490(&var_44, "vs_4_0", 6)
    var_8_1.b = 3
    struct graphengined3d11::CShaderImage::VTable** eax_4 = sub_6e810c(0x28)
    char var_64_1
    var_64_1.d = eax_4
    void** esi = &eax_4[4]
    *eax_4 = &graphengined3d11::CShaderImage::`vftable'
    eax_4[1] = 0
    eax_4[2] = 0
    eax_4[3] = 0
    esi[5] = 0xf
    esi[4] = 0
    char* eax_5
    
    if (esi[5] u< 0x10)
        eax_5 = esi
    else
        eax_5 = *esi
    
    *eax_5 = 0
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, "vs", 2)
    var_8_1.b = 4
    bool cond:0_1 = sub_68af70(eax_4, &var_8c, &var_2c, &var_44) == 0
    var_8_1.b = 3
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    if (cond:0_1 == 0)
        void var_50
        void var_20
        int32_t* ecx_13
        int32_t edx_3
        
        if (arg3 == 0)
            ecx_13 = sub_690ea0(&var_50)
            edx_3 = 2
        else
            ecx_13 = sub_690e20(&var_20)
            edx_3 = 1
        
        void* ebx_1 = *ecx_13
        int32_t var_78_1 = ecx_13[1]
        int32_t eax_19 = ecx_13[2]
        *ecx_13 = 0
        ecx_13[1] = 0
        void* var_7c = ebx_1
        ecx_13[2] = 0
        int32_t var_8_2 = 8
        
        if ((edx_3.b & 2) != 0)
            var_64_1.d = edx_3 & 0xfffffffd
            sub_4043e0(&var_50)
            edx_3 = var_64_1.d
        
        var_8_2.b = 9
        
        if ((edx_3.b & 1) != 0)
            sub_4043e0(&var_20)
        
        result = sub_6867b0(*(arg1 + 4))
        
        if (result == 0)
            result = nullptr
        else
            char* ecx_19 = eax_4[1]
            int32_t* var_b0_5 = &var_7c
            bool cond:1_1 = sub_694b30(result, ecx_19, eax_4[2] - ecx_19) != 0
            struct graphengined3d11::CShaderImage::VTable* eax_24 = *eax_4
            
            if (cond:1_1)
                eax_24->vFunc_0(1)
                ebx_1 = var_7c
            else
                eax_24->vFunc_0(1)
                (*result)->vFunc_1(eax_2)
                ebx_1 = var_7c
                result = nullptr
        
        if (ebx_1 != 0)
            sub_403160(ebx_1, (eax_19 - ebx_1) s>> 2, 4)
        
        ebx = var_70
    else
        void* var_5c
        char* eax_9
        int32_t ecx_8
        eax_9, ecx_8 = sub_403360(&var_5c, 0x76f568)
        var_8_1.b = 5
        
        if (esi[5] u>= 0x10)
            esi = *esi
        
        void** var_b0_4 = esi
        var_8_1.b = 6
        sub_6c52e0(sub_690f30(eax_9, &var_5c, &var_2c, ecx_8))
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        int32_t var_48
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c, var_48 + 1, 1)
        
        (*eax_4)->vFunc_0(1)
        result = nullptr
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    void* ecx_23 = var_8c
    int32_t var_30_2 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    int32_t var_84
    
    if (ecx_23 != 0)
        sub_403160(ecx_23, var_84 - ecx_23, 1)
else
    result = nullptr

if (ebx != 0)
    sub_403160(ebx, var_68 - ebx, 1)

void* eax_35 = var_98
int32_t var_90

if (eax_35 != 0)
    sub_403160(eax_35, var_90 - eax_35, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
