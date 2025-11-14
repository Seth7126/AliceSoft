// 函数: sub_45d960
// 地址: 0x45d960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8600
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
void* ebx
void* var_60 = ebx
int32_t __saved_edi
int32_t var_70 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5

if (*(arg3 + 0x20) != 0)
    eax_5 = *(arg3 + 0x24)

void* eax_6

if (*(arg3 + 0x20) == 0 || eax_5 == *(arg3 + 0x1c))
    eax_6 = nullptr
else
    eax_6 = eax_5 + 8

char result

if (*(eax_6 + 0x1c) != 0x11)
    char var_55 = 0
    struct exfile::CNumeral::VTable* const var_44
    
    if (sub_45d0b0(&var_55, arg3) != 0)
        int32_t var_2c
        sub_401f60(&var_2c, 0x6da182)
        int32_t var_4_1 = 1
        void* var_74_4
        
        if (sub_45d110(&var_2c, arg3) == 0)
            if (*(arg3 + 0x20) == 0 || *(arg3 + 0x24) == *(arg3 + 0x1c))
                *(arg3 + 0x24) = *(*(arg3 + 0x24) + 4)
                sub_401f60(&var_44, 0x6dc550)
                var_4_1.b = 2
            else
                sub_401f60(&var_44, 0x6dc4e8)
                var_4_1.b = 3
            
            void* eax_15
            
            if (*(arg3 + 0x20) != 0)
                eax_15 = *(arg3 + 0x24)
            
            if (*(arg3 + 0x20) == 0 || eax_15 == *(arg3 + 0x1c))
                var_74_4 = nullptr
            else
                var_74_4 = eax_15 + 8
            
            goto label_45dcd7
        
        char var_56_1 = 0
        struct exfile::CNumeral::VTable* const var_54 = &exfile::CNumeral::`vftable'
        int32_t var_50_1 = 0
        int32_t var_4c_1 = 0
        float var_48_1 = 0f
        var_4_1.b = 4
        void* ebx_1
        
        if (*(arg3 + 0x20) != 0)
            ebx_1 = *(arg3 + 0x24)
        
        if (*(arg3 + 0x20) == 0 || ebx_1 == *(arg3 + 0x1c))
            ebx = nullptr
        else
            ebx = ebx_1 + 8
        
        int32_t eax_17 = *(ebx + 0x1c)
        
        if (eax_17 != 0x10)
            if (eax_17 == 5)
                if (sub_45d190(&var_54, arg3) != 0)
                    goto label_45db90
                
                struct exfile::CNumeral::VTable* const* ecx_19 = &var_44
                
                if (sub_4665c0(arg3) == 0)
                    sub_401f60(ecx_19, 0x6dc5e4)
                    var_4_1.b = 8
                    goto label_45dcce
                
                sub_401f60(ecx_19, 0x6dc518)
                var_4_1.b = 7
                var_74_4 = sub_4665c0(arg3)
                goto label_45dcd7
            
            sub_401f60(&var_44, 0x6dc5cc)
            var_4_1.b = 9
        label_45dcce:
            var_74_4 = ebx
        label_45dcd7:
            sub_456ab0(*(arg1 + 4), &var_44, var_74_4)
            sub_401fb0(&var_44)
            ebx.b = 0
        else
            sub_464970(&var_54, ebx + 4)
            
            if (var_50_1 == 0)
                sub_401f60(&var_44, 0x6dc4b8)
                var_4_1.b = 5
                goto label_45dcce
            
            if (sub_4665e0(arg3) == 0)
                goto label_45db90
            
            var_4_1.b = 6
            var_4_1.b = 4
            ebx.b = sub_40c250(sub_4661e0(sub_4665c0(arg3), &var_44), 0x6dc530)
            sub_401fb0(&var_44)
            
            if (ebx.b == 0)
                *(arg3 + 0x24) = *(*(arg3 + 0x24) + 4)
            label_45db90:
                ebx.b = var_56_1
            else
                ebx.b = 1
            
            if (var_55 != 0)
                var_44 = &exfile::CNumeral::`vftable'
                int32_t var_3c_1 = 0xffffffff
                int32_t var_38_1 = 0xbf800000
                int32_t var_40_1 = 1
                sub_464a50(&var_54, &var_44)
            
            sub_45d3d0(&var_54, &var_2c)
            
            if (ebx.b != 0)
                if (not(var_48_1 f< 0))
                    int32_t var_4c_2 = 1
                    int32_t var_48_2 = 0x3f800000
                else if (-100f < var_48_1)
                    int32_t mxcsr
                    float xmm0_1 = ___libm_sse2_powf(mxcsr, 0x41200000, var_48_1 * 0.0500000007f)
                    float var_48_4 = xmm0_1
                    int32_t var_4c_4 = int.d(xmm0_1)
                else
                    int32_t var_4c_3 = 0
                    int32_t var_48_3 = 0
                
                int32_t var_50_2 = 2
            
            sub_45d430(&var_54, 0)
            ebx.b = sub_45e930(arg2, &var_54)
        
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        result = ebx.b
    else
        sub_401f60(&var_44, 0x6dc534)
        int32_t var_4 = 0
        sub_456a00(*(arg1 + 4), &var_44)
        int32_t var_30
        
        if (var_30 u>= 0x10)
            j__free(var_44)
        
        result = 0
else
    *(arg2 + 4) = 3
    void* eax_7
    
    if (*(arg3 + 0x20) != 0)
        eax_7 = *(arg3 + 0x24)
    
    if (*(arg3 + 0x20) == 0 || eax_7 == *(arg3 + 0x1c))
        sub_4608f0(arg2, 4)
        result = 1
    else
        sub_4608f0(arg2, eax_7 + 0xc)
        result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
