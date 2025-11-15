// 函数: sub_40b900
// 地址: 0x40b900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7276e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(*(arg1 + 0x10) + 4)
int32_t* var_78 = edi
int32_t eax_5 = (*(*edi + 8))(eax_2)
void* result = sub_6ca100(arg2, eax_5)
int32_t ecx_2 = 0
int32_t var_58 = 0

if (eax_5 s> 0)
    int32_t* ebx_1 = arg2 + 4
    int32_t* var_74_1 = ebx_1
    
    do
        int32_t* edi_1 = (*(*edi + 0xc))(ecx_2)
        int32_t* var_6c_1 = edi_1
        char* edx_2 = (**edi_1)()
        int32_t var_1c_1 = 0xf
        void* var_20_1 = nullptr
        char var_30 = 0
        void* ecx_5
        
        if (*edx_2 != 0)
            char* ecx_6 = edx_2
            char* eax_8
            
            do
                eax_8.b = *ecx_6
                ecx_6 = &ecx_6[1]
            while (eax_8.b != 0)
            ecx_5 = ecx_6 - &ecx_6[1]
        else
            ecx_5 = nullptr
        
        sub_403490(&var_30, edx_2, ecx_5)
        int32_t var_8_1 = 0
        char* esi_2 = &var_30
        char* edx_3 = &var_30
        
        if (var_1c_1 u>= 0x10)
            esi_2 = var_30.d
        
        if (var_1c_1 u>= 0x10)
            edx_3 = var_30.d
        
        int32_t var_8c_3 = 0.d
        sub_6ca200(ebx_1, *(arg2 + 8), edx_3, var_20_1 + esi_2)
        char var_49 = 0
        sub_4263a0(ebx_1, &var_49)
        int32_t var_8_2 = 0xffffffff
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, var_1c_1 + 1, 1)
        
        char* edx_4 = (*(*edi_1 + 4))()
        int32_t var_1c_2 = 0xf
        void* var_20_2 = nullptr
        var_30 = 0
        void* ecx_11
        
        if (*edx_4 != 0)
            char* ecx_12 = edx_4
            char* eax_15
            
            do
                eax_15.b = *ecx_12
                ecx_12 = &ecx_12[1]
            while (eax_15.b != 0)
            ecx_11 = ecx_12 - &ecx_12[1]
        else
            ecx_11 = nullptr
        
        sub_403490(&var_30, edx_4, ecx_11)
        int32_t var_8_3 = 1
        char* esi_4 = &var_30
        char* edx_5 = &var_30
        
        if (var_1c_2 u>= 0x10)
            esi_4 = var_30.d
        
        if (var_1c_2 u>= 0x10)
            edx_5 = var_30.d
        
        int32_t var_8c_6 = 0.d
        sub_6ca200(ebx_1, *(arg2 + 8), edx_5, var_20_2 + esi_4)
        var_49 = 0
        sub_4263a0(ebx_1, &var_49)
        int32_t var_8_4 = 0xffffffff
        
        if (var_1c_2 u>= 0x10)
            sub_403160(var_30.d, var_1c_2 + 1, 1)
        
        sub_6ca100(arg2, (*(*edi_1 + 8))())
        int32_t eax_23 = (*(*edi_1 + 0xc))()
        result = sub_6ca100(arg2, eax_23)
        int32_t ebx_2 = 0
        
        if (eax_23 s> 0)
            do
                int32_t* eax_25 = (*(*edi_1 + 0x10))(ebx_2)
                char* edx_7 = (**eax_25)()
                int32_t var_1c_3 = 0xf
                void* var_20_3 = nullptr
                var_30 = 0
                void* ecx_22
                
                if (*edx_7 != 0)
                    char* ecx_23 = edx_7
                    char* eax_26
                    
                    do
                        eax_26.b = *ecx_23
                        ecx_23 = &ecx_23[1]
                    while (eax_26.b != 0)
                    ecx_22 = ecx_23 - &ecx_23[1]
                else
                    ecx_22 = nullptr
                
                sub_403490(&var_30, edx_7, ecx_22)
                int32_t var_8_5 = 2
                char* esi_7 = &var_30
                char* edx_8 = &var_30
                
                if (var_1c_3 u>= 0x10)
                    esi_7 = var_30.d
                
                if (var_1c_3 u>= 0x10)
                    edx_8 = var_30.d
                
                int32_t var_8c_12 = 0.d
                sub_6ca200(arg2 + 4, *(arg2 + 8), edx_8, var_20_3 + esi_7)
                var_49 = 0
                sub_4263a0(arg2 + 4, &var_49)
                int32_t var_8_6 = 0xffffffff
                
                if (var_1c_3 u>= 0x10)
                    sub_403160(var_30.d, var_1c_3 + 1, 1)
                
                char* edx_9 = (*(*eax_25 + 8))()
                int32_t var_34_1 = 0xf
                void* const var_38_1 = nullptr
                char var_48 = 0
                void* ecx_28
                
                if (*edx_9 != 0)
                    char* ecx_29 = edx_9
                    char* eax_33
                    
                    do
                        eax_33.b = *ecx_29
                        ecx_29 = &ecx_29[1]
                    while (eax_33.b != 0)
                    ecx_28 = ecx_29 - &ecx_29[1]
                else
                    ecx_28 = nullptr
                
                sub_403490(&var_48, edx_9, ecx_28)
                int32_t var_8_7 = 3
                char* esi_10 = &var_48
                char* edx_10 = &var_48
                
                if (var_34_1 u>= 0x10)
                    esi_10 = var_48.d
                
                if (var_34_1 u>= 0x10)
                    edx_10 = var_48.d
                
                int32_t var_8c_15 = 0.d
                sub_6ca200(arg2 + 4, *(arg2 + 8), edx_10, var_38_1 + esi_10)
                var_49 = 0
                sub_4263a0(arg2 + 4, &var_49)
                int32_t var_8_8 = 0xffffffff
                
                if (var_34_1 u>= 0x10)
                    sub_403160(var_48.d, var_34_1 + 1, 1)
                
                int32_t eax_38 = *eax_25
                int32_t var_34_2 = 0xf
                int32_t var_38_2 = 0
                var_48 = 0
                result = sub_6ca100(arg2, (*(eax_38 + 0xc))())
                edi_1 = var_6c_1
                ebx_2 += 1
            while (ebx_2 s< eax_23)
        
        ebx_1 = var_74_1
        ecx_2 = var_58 + 1
        edi = var_78
        var_58 = ecx_2
    while (ecx_2 s< eax_5)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
