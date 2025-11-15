// 函数: sub_4ce690
// 地址: 0x4ce690
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733da8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg1 + 0x84) == 0
char* result = arg2
char* result_1 = result
int32_t var_84 = 0

if (cond:0)
    float var_60 = *(arg1 + 8)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, "FPS\n > %d\n\n", 0xb)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    char var_44
    sub_4055a0(arg1 + 0x74, sub_409350(&var_60, &var_2c, &var_44, &var_60), 0, 0xffffffff)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    var_60 = *(arg1 + 0x10)
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x762b64, 0x1f)
    int32_t var_8_3 = 2
    var_8_3.b = 3
    sub_4055a0(arg1 + 0x74, sub_417810(&var_60, &var_2c, &var_44, &var_60, *(arg1 + 0x14)), 0, 
        0xffffffff)
    
    if (var_30_1 u>= 0x10)
        sub_403160(var_44.d, var_30_1 + 1, 1)
    
    int32_t var_8_4 = 0xffffffff
    int32_t var_30_2 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
    
    if (var_18_2 u>= 0x10)
        sub_403160(var_2c.d, var_18_2 + 1, 1)
    
    var_60 = *(arg1 + 0x18)
    int32_t var_18_3 = 0xf
    int32_t var_1c_3 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x7645c8, 0x1c)
    int32_t var_8_5 = 4
    var_8_5.b = 5
    sub_4055a0(arg1 + 0x74, sub_417920(&var_60, &var_2c, &var_44, &var_60), 0, 0xffffffff)
    
    if (var_30_2 u>= 0x10)
        sub_403160(var_44.d, var_30_2 + 1, 1)
    
    int32_t var_8_6 = 0xffffffff
    int32_t var_30_3 = 0xf
    int32_t var_34_3 = 0
    var_44 = 0
    
    if (var_18_3 u>= 0x10)
        sub_403160(var_2c.d, var_18_3 + 1, 1)
    
    float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x10)))
    int32_t var_18_4 = 0xf
    int32_t var_1c_4 = 0
    var_2c = 0
    var_60 = xmm0_3 f/ *(arg1 + 0x1c)
    sub_403490(&var_2c, 0x76333c, 0x18)
    int32_t var_8_7 = 6
    var_8_7.b = 7
    sub_4055a0(arg1 + 0x74, sub_417920(&var_60, &var_2c, &var_44, &var_60), 0, 0xffffffff)
    
    if (var_30_3 u>= 0x10)
        sub_403160(var_44.d, var_30_3 + 1, 1)
    
    int32_t var_8_8 = 0xffffffff
    int32_t var_30_4 = 0xf
    int32_t var_34_4 = 0
    var_44 = 0
    
    if (var_18_4 u>= 0x10)
        sub_403160(var_2c.d, var_18_4 + 1, 1)
    
    var_60 = *(arg1 + 0x28)
    int32_t var_18_5 = 0xf
    int32_t var_1c_5 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x763314, 0x27)
    int32_t var_8_9 = 8
    var_8_9.b = 9
    sub_4055a0(arg1 + 0x74, sub_417810(&var_60, &var_2c, &var_44, &var_60, *(arg1 + 0x2c)), 0, 
        0xffffffff)
    
    if (var_30_4 u>= 0x10)
        sub_403160(var_44.d, var_30_4 + 1, 1)
    
    int32_t var_8_10 = 0xffffffff
    int32_t var_30_5 = 0xf
    int32_t var_34_5 = 0
    var_44 = 0
    
    if (var_18_5 u>= 0x10)
        sub_403160(var_2c.d, var_18_5 + 1, 1)
    
    void* eax_36 = *(arg1 + 0x38)
    float eax_37
    
    if (eax_36 != 0)
        eax_37 = *(eax_36 + 0x14)
    else
        eax_37 = -nanf
    
    var_60 = eax_37
    int32_t var_18_6 = 0xf
    int32_t var_1c_6 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x764618, 0x14)
    int32_t var_8_11 = 0xa
    var_8_11.b = 0xb
    sub_4055a0(arg1 + 0x74, sub_409350(&var_60, &var_2c, &var_44, &var_60), 0, 0xffffffff)
    
    if (var_30_5 u>= 0x10)
        sub_403160(var_44.d, var_30_5 + 1, 1)
    
    int32_t var_8_12 = 0xffffffff
    int32_t var_30_6 = 0xf
    int32_t var_34_6 = 0
    var_44 = 0
    
    if (var_18_6 u>= 0x10)
        sub_403160(var_2c.d, var_18_6 + 1, 1)
    
    var_60 = *(arg1 + 0x58)
    int32_t var_18_7 = 0xf
    int32_t var_1c_7 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x7632ac, 0x12)
    int32_t var_8_13 = 0xc
    var_8_13.b = 0xd
    sub_4055a0(arg1 + 0x74, sub_4351a0(&var_60, &var_2c, &var_44, &var_60), 0, 0xffffffff)
    
    if (var_30_6 u>= 0x10)
        sub_403160(var_44.d, var_30_6 + 1, 1)
    
    int32_t var_30_7 = 0xf
    int32_t var_34_7 = 0
    var_44 = 0
    
    if (var_18_7 u>= 0x10)
        sub_403160(var_2c.d, var_18_7 + 1, 1)
    
    int32_t var_30_8 = 0xf
    int32_t var_34_8 = 0
    var_44 = 0
    int32_t var_8_14 = 0xe
    float* esi_1 = *(arg1 + 0x44)
    float var_64_1 = 0f
    float eax_51 = *esi_1
    var_60 = eax_51
    char var_5c
    int32_t var_48
    
    if (eax_51 != esi_1)
        void* ecx_22 = arg1 + 0x4c
        void* var_7c_1 = ecx_22
        
        do
            void** var_68 = eax_51 i+ 0x10
            void* var_8c
            sub_4cfa60(ecx_22, &var_8c, eax_51 i+ 0x28)
            int32_t* ebx_1 = *(eax_51 i+ 0x28)
            int32_t eax_53 = *(var_8c + 0x14)
            int32_t eax_55 = (*(*ebx_1 + 0x10))(eax_2)
            int32_t eax_56 = (*(*ebx_1 + 0x14))()
            float xmm1_1
            
            xmm1_1 = eax_53 != 1 ? 0.00390625f : 0.005859375f
            
            int32_t eax_57 = 1
            
            if (eax_55 s> 1)
                do
                    eax_57 *= 2
                while (eax_57 s< eax_55)
            
            int32_t ecx_25 = 1
            
            if (eax_56 s> 1)
                do
                    ecx_25 *= 2
                while (ecx_25 s< eax_56)
            
            void** eax_59 = var_68
            float xmm0_7 = _mm_cvtepi32_ps(zx.o(eax_57 * ecx_25)) * xmm1_1
            var_64_1 = xmm0_7 + var_64_1
            
            if (eax_59[5] u>= 0x10)
                eax_59 = *eax_59
            
            var_68 = eax_59
            int32_t var_18_8 = 0xf
            int32_t var_1c_8 = 0
            var_2c = 0
            int32_t eax_60 = 0x764648
            int32_t var_a0_9 = sub_403490(&var_2c, " >> %s [%d x %d]\n >> ", 0x3a)
            var_8_14.b = 0xf
            
            if (eax_53 != 1)
                eax_60 = 0x764640
            
            int32_t ecx_29 = 0x764638
            
            if ((*(*ebx_1 + 0x28))(eax_60, xmm0_7) == 0)
                ecx_29 = 0x764630
            
            var_8_14.b = 0x10
            sub_4055a0(&var_44, 
                sub_4cf460(&var_68, &var_2c, &var_5c, &var_68, eax_55, eax_56, ecx_29), 0, 
                0xffffffff)
            
            if (var_48 u>= 0x10)
                sub_403160(var_5c.d, var_48 + 1, 1)
            
            var_8_14.b = 0xe
            var_48 = 0xf
            int32_t var_4c_1 = 0
            var_5c = 0
            
            if (var_18_8 u>= 0x10)
                sub_403160(var_2c.d, var_18_8 + 1, 1)
            
            sub_429080(&var_60)
            eax_51 = var_60
            ecx_22 = var_7c_1
        while (eax_51 != esi_1)
        
        result = result_1
    
    result_1 = *(arg1 + 0x48)
    int32_t var_18_9 = 0xf
    int32_t var_1c_9 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x7645f8, 0x1c)
    var_8_14.b = 0x11
    var_8_14.b = 0x12
    sub_4055a0(arg1 + 0x74, sub_4cf580(&result_1, &var_2c, &var_5c, &result_1), 0, 0xffffffff)
    
    if (var_48 u>= 0x10)
        sub_403160(var_5c.d, var_48 + 1, 1)
    
    var_8_14.b = 0xe
    int32_t var_48_1 = 0xf
    int32_t var_4c_2 = 0
    var_5c = 0
    
    if (var_18_9 u>= 0x10)
        sub_403160(var_2c.d, var_18_9 + 1, 1)
    
    sub_4055a0(arg1 + 0x74, &var_44, 0, 0xffffffff)
    *(result + 0x14) = 0xf
    *(result + 0x10) = 0
    *result = 0
    sub_403590(result, arg1 + 0x74, 0, 0xffffffff)
    
    if (var_30_8 u>= 0x10)
        sub_403160(var_44.d, var_30_8 + 1, 1)
else
    *(result + 0x14) = 0xf
    *(result + 0x10) = 0
    *result = 0
    sub_403590(result, arg1 + 0x74, 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
