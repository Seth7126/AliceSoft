// 函数: sub_43c440
// 地址: 0x43c440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b64a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4107c0(arg1[8], arg1[9])
arg1[9] = arg1[8]
bool cond:0 = *arg2 != 0
int32_t var_20 = 0xf
int32_t var_24 = 0
char var_34 = 0
void* ecx

if (cond:0)
    int32_t* ecx_1 = arg2
    void* edx_1 = ecx_1 + 1
    int32_t eax_5
    
    do
        eax_5.b = *ecx_1
        ecx_1 += 1
    while (eax_5.b != 0)
    ecx = ecx_1 - edx_1
else
    ecx = nullptr

sub_402110(&var_34, arg2, ecx)
int32_t var_c_1 = 0
int32_t esi_1 = 0
int32_t eax_6 = *arg1
char var_7c

if (var_24 != 0)
    int32_t edi_3 = (*(eax_6 + 0x10))(eax_4)
    var_84 = edi_3
    
    if (edi_3 s> 0)
        do
            char* edx_5 = (*(*arg1 + 0x14))(esi_1)
            int32_t var_68_2 = 0xf
            int32_t var_6c_2 = 0
            var_7c = 0
            void* ecx_10
            
            if (*edx_5 != 0)
                char* ecx_11 = edx_5
                char* eax_10
                
                do
                    eax_10.b = *ecx_11
                    ecx_11 = &ecx_11[1]
                while (eax_10.b != 0)
                ecx_10 = ecx_11 - &ecx_11[1]
                edi_3 = var_84
            else
                ecx_10 = nullptr
            
            sub_402110(&var_7c, edx_5, ecx_10)
            var_c_1.b = 2
            char var_4c
            sub_43c2b0(&var_4c, &var_7c)
            var_c_1.b = 3
            char var_64
            sub_43c2b0(&var_64, &var_34)
            var_c_1.b = 4
            int32_t var_54
            int32_t var_50
            int32_t var_3c
            
            if (var_3c u>= var_54)
                char* eax_11 = &var_64
                int32_t var_98_10 = var_54
                
                if (var_50 u>= 0x10)
                    eax_11 = var_64.d
                
                if (sub_4294e0(&var_4c, eax_11, var_54) != 0xffffffff)
                    sub_421cd0(&arg1[8], &var_7c)
            
            if (var_50 u>= 0x10)
                j__free(var_64.d)
            
            var_64 = 0
            var_54 = 0
            var_50 = 0xf
            int32_t var_38
            
            if (var_38 u>= 0x10)
                j__free(var_4c.d)
            
            var_c_1.b = 0
            var_4c = 0
            var_3c = 0
            var_38 = 0xf
            
            if (var_68_2 u>= 0x10)
                j__free(var_7c.d)
            
            esi_1 += 1
        while (esi_1 s< edi_3)
else
    int32_t edi_1 = (*(eax_6 + 0x10))(eax_4)
    var_84 = edi_1
    
    if (edi_1 s> 0)
        do
            char* edx_3 = (*(*arg1 + 0x14))(esi_1)
            int32_t var_68_1 = 0xf
            int32_t var_6c_1 = 0
            var_7c = 0
            void* ecx_5
            
            if (*edx_3 != 0)
                char* ecx_6 = edx_3
                char* eax_8
                
                do
                    eax_8.b = *ecx_6
                    ecx_6 = &ecx_6[1]
                while (eax_8.b != 0)
                ecx_5 = ecx_6 - &ecx_6[1]
                edi_1 = var_84
            else
                ecx_5 = nullptr
            
            sub_402110(&var_7c, edx_3, ecx_5)
            var_c_1.b = 1
            sub_412d60(&arg1[8], &var_7c)
            var_c_1.b = 0
            
            if (var_68_1 u>= 0x10)
                j__free(var_7c.d)
            
            esi_1 += 1
        while (esi_1 s< edi_1)
int32_t eax_14
int32_t edx_6
edx_6:eax_14 = muls.dp.d(0x2aaaaaab, arg1[9] - arg1[8])
int32_t edx_7 = edx_6 s>> 2

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_84)
return (edx_7 u>> 0x1f) + edx_7
