// 函数: sub_466d10
// 地址: 0x466d10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b90e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg1 + 0x20) == 0
int32_t* result = *(arg1 + 0x1c)
char var_69 = 0
void* ecx = *result
*(arg1 + 0x24) = ecx

if (cond:0 || ecx == result || ecx == 0xfffffff8)
    result.b = 0
else
    int32_t* i = ecx + 8
    
    do
        void* ecx_1 = &i[1]
        int32_t edi_1 = *(ecx_1 + 0x10)
        
        if (i[6] u>= 0x10)
            ecx_1 = *ecx_1
        
        int32_t edx_1 = 7
        
        if (edi_1 u< 7)
            edx_1 = edi_1
        
        int32_t eax_7
        bool cond:1_1
        
        if (edx_1 == 0)
        label_466df9:
            
            if (edi_1 u>= 7)
                eax_7.b = edi_1 != 7
            else
                eax_7 = 0xffffffff
            
            cond:1_1 = eax_7 == 0
        else
            char const* const esi_1 = "#define"
            int32_t j_1 = edx_1 - 4
            
            if (edx_1 u>= 4)
                int32_t j
                
                do
                    if (*ecx_1 != *esi_1)
                        goto label_466dbc
                    
                    ecx_1 += 4
                    esi_1 = &esi_1[4]
                    j = j_1
                    j_1 -= 4
                while (j u>= 4)
            
            if (j_1 == 0xfffffffc)
                eax_7 = 0
            else
            label_466dbc:
                result.b = *ecx_1
                char const temp2_1 = *esi_1
                
                if (result.b != temp2_1)
                    eax_7 = sbb.d(result, result, result.b u< temp2_1) | 1
                else if (j_1 == 0xfffffffd)
                    eax_7 = 0
                else
                    result.b = *(ecx_1 + 1)
                    char temp5_1 = esi_1[1]
                    
                    if (result.b != temp5_1)
                        eax_7 = sbb.d(result, result, result.b u< temp5_1) | 1
                    else if (j_1 == 0xfffffffe)
                        eax_7 = 0
                    else
                        result.b = *(ecx_1 + 2)
                        char temp6_1 = esi_1[2]
                        
                        if (result.b != temp6_1)
                            eax_7 = sbb.d(result, result, result.b u< temp6_1) | 1
                        else if (j_1 == 0xffffffff)
                            eax_7 = 0
                        else
                            result.b = *(ecx_1 + 3)
                            char temp7_1 = esi_1[3]
                            
                            if (result.b == temp7_1)
                                eax_7 = 0
                            else
                                eax_7 = sbb.d(result, result, result.b u< temp7_1) | 1
            
            cond:1_1 = eax_7 == 0
            
            if (eax_7 == 0)
                goto label_466df9
        
        eax_7.b = cond:1_1
        eax_7.b = eax_7.b == 0
        
        if (eax_7.b == 0)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            int32_t var_4 = 0
            int32_t* var_68 = nullptr
            int32_t var_64_1 = 0
            int32_t var_60_1 = 0
            var_4.b = 1
            int32_t* var_84_1 = &var_68
            char eax_10 = sub_467040(arg1, &var_2c)
            int32_t var_3c_1 = 0xf
            int32_t var_40_1 = 0
            char var_50 = 0
            int32_t* var_84_7
            
            if (eax_10 != 0)
                sub_401ff0(&var_50, &var_2c, 0, 0xffffffff)
                var_4.b = 3
                void var_38
                int32_t ecx_8 = sub_467a60(&var_38, &var_68)
                var_4.b = 4
                uint32_t var_84_5 = zx.d(data_75dd28)
                char* var_88_3 = &var_50
                void* var_58
                sub_4678b0(arg2, &var_58, ecx_8)
                var_4.b = 1
                sub_45d550(&var_38)
                
                if (var_3c_1 u>= 0x10)
                    j__free(var_50.d)
                
                var_4.b = 0
                int32_t* edi_3 = var_68
                
                if (edi_3 != 0)
                    int32_t* esi_3 = edi_3
                    
                    if (edi_3 != var_64_1)
                        do
                            (**esi_3)(0)
                            esi_3 = &esi_3[9]
                        while (esi_3 != var_64_1)
                    
                    var_84_7 = edi_3
                label_466f90:
                    j__free(var_84_7)
                    int32_t var_60_2 = 0
                    int32_t var_64_2 = 0
                    var_68 = nullptr
            else
                sub_402110(&var_50, "#define", 0x44)
                var_4.b = 2
                sub_456ab0(*(arg1 + 0x28), &var_50, i)
                
                if (var_3c_1 u>= 0x10)
                    j__free(var_50.d)
                
                var_69 = 1
                var_4.b = 0
                int32_t* ebx_2 = var_68
                *(arg1 + 0x24) = **(arg1 + 0x24)
                
                if (ebx_2 != 0)
                    int32_t* esi_2 = ebx_2
                    
                    if (ebx_2 != var_64_1)
                        do
                            (**esi_2)(0)
                            esi_2 = &esi_2[9]
                        while (esi_2 != var_64_1)
                    
                    var_84_7 = ebx_2
                    goto label_466f90
            int32_t var_4_1 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                j__free(var_2c.d)
        else
            *(arg1 + 0x24) = **(arg1 + 0x24)
        
        i = sub_4665c0(arg1)
    while (i != 0)
    
    result.b = var_69

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
