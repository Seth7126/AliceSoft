// 函数: sub_43c700
// 地址: 0x43c700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b64fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a4
int32_t eax_2 = __security_cookie ^ &var_a4
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
int32_t* var_a0 = edi
void* ebx = &edi[8]
sub_4107c0(*ebx, edi[9])
*(ebx + 4) = *ebx
bool cond:0 = *arg2 != 0
int32_t var_38 = 0xf
int32_t var_3c = 0
char var_4c = 0
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

sub_402110(&var_4c, arg2, ecx)
int32_t var_c_1 = 0
int32_t eax_6 = *edi
char var_94

if (var_3c != 0)
    int32_t ebx_2 = 0
    int32_t eax_9 = (*(eax_6 + 0x10))(eax_4)
    
    if (eax_9 s> 0)
        do
            char* edx_5 = (*(*edi + 0x14))(ebx_2)
            int32_t var_80_2 = 0xf
            int32_t var_84_2 = 0
            var_94 = 0
            void* ecx_11
            
            if (*edx_5 != 0)
                char* ecx_12 = edx_5
                char* eax_10
                
                do
                    eax_10.b = *ecx_12
                    ecx_12 = &ecx_12[1]
                while (eax_10.b != 0)
                ecx_11 = ecx_12 - &ecx_12[1]
            else
                ecx_11 = nullptr
            
            sub_402110(&var_94, edx_5, ecx_11)
            var_c_1.b = 2
            char var_64
            sub_43c2b0(&var_64, &var_94)
            var_c_1.b = 3
            char var_7c
            sub_43c2b0(&var_7c, &var_4c)
            var_c_1.b = 4
            void* var_6c
            int32_t var_54
            int32_t var_68
            int32_t var_50
            
            if (var_54 u>= var_6c)
                int32_t var_34
                char* edx_6 = sub_403070(&var_64, &var_34, 0, var_6c)
                void* esi_3 = *(edx_6 + 0x10)
                
                if (*(edx_6 + 0x14) u>= 0x10)
                    edx_6 = *edx_6
                
                int32_t* ecx_15 = &var_7c
                void* eax_13 = esi_3
                
                if (var_68 u>= 0x10)
                    ecx_15 = var_7c.d
                
                if (var_6c u< esi_3)
                    eax_13 = var_6c
                
                int32_t eax_14 = sub_405190(eax_13, edx_6, ecx_15, eax_13)
                bool cond:5_1 = eax_14 == 0
                
                if (eax_14 == 0)
                    if (var_6c u>= esi_3)
                        eax_14.b = var_6c != esi_3
                    else
                        eax_14 = 0xffffffff
                    
                    cond:5_1 = eax_14 == 0
                
                eax_14.b = cond:5_1
                char var_a1_1 = eax_14.b
                int32_t var_20
                
                if (var_20 u>= 0x10)
                    j__free(var_34)
                    eax_14.b = var_a1_1
                
                if (eax_14.b != 0)
                    sub_421cd0(ebx, &var_94)
                
                if (var_68 u>= 0x10)
                    j__free(var_7c.d)
                
                var_68 = 0xf
                var_6c = nullptr
                var_7c = 0
                
                if (var_50 u>= 0x10)
                    j__free(var_64.d)
                
                var_c_1.b = 0
                var_50 = 0xf
                var_54 = 0
                var_64 = 0
                
                if (var_80_2 u>= 0x10)
                    j__free(var_94.d)
                
                edi = var_a0
            else
                if (var_68 u>= 0x10)
                    j__free(var_7c.d)
                
                var_68 = 0xf
                var_6c = nullptr
                var_7c = 0
                
                if (var_50 u>= 0x10)
                    j__free(var_64.d)
                
                var_c_1.b = 0
                var_50 = 0xf
                var_54 = 0
                var_64 = 0
                
                if (var_80_2 u>= 0x10)
                    j__free(var_94.d)
            ebx_2 += 1
        while (ebx_2 s< eax_9)
else
    int32_t esi_1 = 0
    int32_t eax_7 = (*(eax_6 + 0x10))(eax_4)
    
    if (eax_7 s> 0)
        do
            char* edx_3 = (*(*edi + 0x14))(esi_1)
            int32_t var_80_1 = 0xf
            int32_t var_84_1 = 0
            var_94 = 0
            void* ecx_5
            
            if (*edx_3 != 0)
                char* ecx_7 = edx_3
                char* eax_8
                
                do
                    eax_8.b = *ecx_7
                    ecx_7 = &ecx_7[1]
                while (eax_8.b != 0)
                ecx_5 = ecx_7 - &edx_3[1]
                edi = var_a0
            else
                ecx_5 = nullptr
            
            sub_402110(&var_94, edx_3, ecx_5)
            var_c_1.b = 1
            sub_412d60(&edi[8], &var_94)
            var_c_1.b = 0
            
            if (var_80_1 u>= 0x10)
                j__free(var_94.d)
            
            esi_1 += 1
        while (esi_1 s< eax_7)
int32_t eax_16
int32_t edx_7
edx_7:eax_16 = muls.dp.d(0x2aaaaaab, *(ebx + 4) - *ebx)
int32_t edx_8 = edx_7 s>> 2

if (var_38 u>= 0x10)
    j__free(var_4c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_a4)
return (edx_8 u>> 0x1f) + edx_8
