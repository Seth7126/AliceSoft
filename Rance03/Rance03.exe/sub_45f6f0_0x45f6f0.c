// 函数: sub_45f6f0
// 地址: 0x45f6f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4b08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t ebx
int32_t var_40 = ebx
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
int32_t var_30 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0

while (*(esi + 0xc) u> *(esi + 4))
    char* eax_6 = *(esi + 4)
    ebx.b = *eax_6
    char var_54_2
    
    if ((ebx.b u< 0x81 || ebx.b u> 0x9f) && (ebx.b u< 0xe0 || ebx.b u> 0xef))
        char eax_8
        eax_8, arg1 = sub_45ff70(esi)
        
        if (eax_8 != 0)
            break
        
        var_54_2 = ebx.b
    else
        if (ebx.b == 0x81 && eax_6[1] == 0x40)
            break
        
        sub_4031c0(&var_2c, 1, ebx.b)
        *(esi + 4) += 1
        char* eax_7 = *(esi + 4)
        
        if (*(esi + 0xc) u> eax_7)
            eax_7.b = *eax_7
            var_54_2 = eax_7.b
        else
            var_54_2 = 0
    
    arg1 = sub_4031c0(&var_2c, 1, var_54_2)
    *(esi + 4) += 1

int32_t var_54_3 = 1
char var_38 = 0x2e

if (sub_4294e0(&var_2c, &var_38, arg1) == 0xffffffff)
    void* edx_1 = &var_2c
    int32_t ebp_1 = 3
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c.d
    
    int32_t ecx_5 = 3
    
    if (var_1c u< 3)
        ecx_5 = var_1c
    
    if (ecx_5 != 0)
        void* const esi_1 = &data_6dcb44
        int32_t i_1 = ecx_5 - 4
        
        if (ecx_5 u>= 4)
            int32_t i
            
            do
                if (*edx_1 != *esi_1)
                    goto label_45f85a
                
                edx_1 += 4
                esi_1 += 4
                i = i_1
                i_1 -= 4
            while (i u>= 4)
        
        int32_t eax_12
        
        if (i_1 == 0xfffffffc)
            eax_12 = 0
        else
        label_45f85a:
            void* eax_10
            eax_10.b = *edx_1
            char temp2_1 = *esi_1
            
            if (eax_10.b != temp2_1)
                eax_12 = sbb.d(eax_10, eax_10, eax_10.b u< temp2_1) | 1
            else if (i_1 == 0xfffffffd)
                eax_12 = 0
            else
                eax_10.b = *(edx_1 + 1)
                char temp4_1 = *(esi_1 + 1)
                
                if (eax_10.b != temp4_1)
                    eax_12 = sbb.d(eax_10, eax_10, eax_10.b u< temp4_1) | 1
                else if (i_1 == 0xfffffffe)
                    eax_12 = 0
                else
                    eax_10.b = *(edx_1 + 2)
                    char temp5_1 = *(esi_1 + 2)
                    
                    if (eax_10.b != temp5_1)
                        eax_12 = sbb.d(eax_10, eax_10, eax_10.b u< temp5_1) | 1
                    else if (i_1 == 0xffffffff)
                        eax_12 = 0
                    else
                        eax_10.b = *(edx_1 + 3)
                        char temp6_1 = *(esi_1 + 3)
                        
                        if (eax_10.b == temp6_1)
                            eax_12 = 0
                        else
                            eax_12 = sbb.d(eax_10, eax_10, eax_10.b u< temp6_1) | 1
        
        if (eax_12 != 0 || var_1c u< 3)
            goto label_45f8ac
        
        goto label_45f89c
    
    if (var_1c u< 3)
    label_45f8ac:
        char* ecx_6 = &var_2c
        int32_t eax_14 = 7
        
        if (var_18 u>= 0x10)
            ecx_6 = var_2c.d
        
        if (var_1c u< 7)
            eax_14 = var_1c
        
        if (sub_405190(eax_14, "#define", ecx_6, eax_14) == 0 && var_1c u>= 7)
            int32_t eax_15
            eax_15.b = var_1c != 7
            
            if (eax_15 == 0)
                goto label_45f9fa
        
        if (sub_40c250(&var_2c, "#include") != 0)
            goto label_45f9fa
        
        if (sub_40c250(&var_2c, "#gamename") != 0)
            goto label_45f9fa
        
        int32_t eax_18 = sub_40c250(&var_2c, "#EOF")
        
        if (eax_18.b != 0)
            goto label_45f9fa
        
        char* ecx_10 = &var_2c
        
        if (var_18 u>= 0x10)
            ecx_10 = var_2c.d
        
        if (var_1c u< 3)
            ebp_1 = var_1c
        
        if (sub_405190(eax_18, 0x6dcb28, ecx_10, ebp_1) == 0 && var_1c u>= 3)
            int32_t eax_19
            eax_19.b = var_1c != 3
            
            if (eax_19 == 0)
                goto label_45f9c9
            
            goto label_45f967
        
    label_45f967:
        
        if (sub_40c250(&var_2c, "string") != 0)
        label_45f9c9:
            *arg2 = &exfile::CToken::`vftable'
            arg2[6] = 0xf
            arg2[5] = 0
            arg2[1].b = 0
            sub_401ff0(&arg2[1], &var_2c, 0, 0xffffffff)
            arg2[7] = 1
        else
            if (sub_40c250(&var_2c, "float") != 0)
                goto label_45f9c9
            
            char eax_22 = sub_40c250(&var_2c, 0x6dcb54)
            
            if (eax_22 != 0)
                goto label_45f9c9
            
            *arg2 = &exfile::CToken::`vftable'
            arg2[6] = 0xf
            arg2[5] = 0
            arg2[1].b = eax_22
            sub_401ff0(&arg2[1], &var_2c, 0, 0xffffffff)
            arg2[7] = 0x12
    else
    label_45f89c:
        int32_t eax_13
        eax_13.b = var_1c != 3
        
        if (eax_13 != 0)
            goto label_45f8ac
        
    label_45f9fa:
        *arg2 = &exfile::CToken::`vftable'
        arg2[6] = 0xf
        arg2[5] = 0
        arg2[1].b = 0
        sub_401ff0(&arg2[1], &var_2c, 0, 0xffffffff)
        arg2[7] = 2
else
    *arg2 = &exfile::CToken::`vftable'
    arg2[6] = 0xf
    arg2[5] = 0
    arg2[1].b = 0
    sub_401ff0(&arg2[1], &var_2c, 0, 0xffffffff)
    arg2[7] = 0

arg2[8] = 0

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return arg2
