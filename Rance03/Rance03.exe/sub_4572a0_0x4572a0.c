// 函数: sub_4572a0
// 地址: 0x4572a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7c8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_8c
int32_t eax_2 = __security_cookie ^ &var_8c
int32_t __saved_edi
int32_t var_a0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_7c = edi
void* ebx = arg3
void* var_80 = ebx
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
int32_t var_4 = 0
var_8c = nullptr
int32_t var_88 = 0
int32_t* ecx = sub_458460()
var_8c = ecx
var_4.b = 1
int32_t* i = *(edi + 0x14)

if (i != *(edi + 0x18))
    do
        void* ecx_1 = *i
        
        if (arg2 s>= 0 && (*(ecx_1 + 8) - *(ecx_1 + 4)) s>> 2 s> arg2)
            void* eax_10 = *(*(ecx_1 + 4) + (arg2 << 2))
            
            if (eax_10 != 0)
                void* ebx_2 = i - *(edi + 0x14)
                int32_t var_78 = *(eax_10 + 0xc) ^ 0x65656565
                int32_t ebx_3 = ebx_2 s>> 2
                int32_t var_84 = ebx_3
                void* eax_13 = sub_457c80(&var_8c, &var_78)
                int32_t ecx_3 = *(eax_13 + 4)
                int32_t eax_14
                
                if (&var_84 u< ecx_3)
                    eax_14 = *eax_13
                
                if (&var_84 u>= ecx_3 || eax_14 u> &var_84)
                    if (ecx_3 == *(eax_13 + 8))
                        sub_415950(eax_13, 1)
                    
                    int32_t* eax_17 = *(eax_13 + 4)
                    
                    if (eax_17 != 0)
                        *eax_17 = ebx_3
                else
                    if (ecx_3 == *(eax_13 + 8))
                        sub_415950(eax_13, 1)
                    
                    int32_t* ecx_5 = *(eax_13 + 4)
                    
                    if (ecx_5 != 0)
                        *ecx_5 = *(*eax_13 + ((&var_84 - eax_14) s>> 2 << 2))
                
                *(eax_13 + 4) += 4
                edi = var_7c
        
        i = &i[1]
    while (i != *(edi + 0x18))
    
    ecx = var_8c
    ebx = var_80

if (var_88 != (*(edi + 0x18) - *(edi + 0x14)) s>> 2)
    int32_t* i_2 = *ecx
    
    while (i_2 != ecx)
        if (((i_2[6] - i_2[5]) & 0xfffffffc) s> 4)
            i_2[4]
            int32_t* var_44
            sub_469290(&var_44)
            int32_t var_60_1 = 0xf
            int32_t var_64_1 = 0
            char var_74 = 0
            var_4.b = 3
            int32_t* eax_24 = &var_44
            int32_t var_30
            
            if (var_30 u>= 0x10)
                eax_24 = var_44
            
            int32_t* var_a4_2 = eax_24
            var_4.b = 4
            int32_t var_5c
            sub_403110(&var_74, sub_4691f0(&var_5c, 0x6db968), nullptr, 0xffffffff)
            var_4.b = 3
            int32_t var_48
            
            if (var_48 u>= 0x10)
                j__free(var_5c)
            
            sub_4057c0(&var_74, 0x6db99c, 6)
            
            for (int32_t* i_1 = i_2[5]; i_1 != i_2[6]; i_1 = &i_1[1])
                int32_t var_a4_4 = *i_1 + 1
                var_4.b = 5
                sub_403110(&var_74, sub_4691f0(&var_5c, "%d ,"), nullptr, 0xffffffff)
                var_4.b = 3
                
                if (var_48 u>= 0x10)
                    j__free(var_5c)
            
            sub_4057c0(&var_74, 0x6db9d4, 2)
            char* eax_29 = &var_74
            
            if (var_60_1 u>= 0x10)
                eax_29 = var_74.d
            
            var_4.b = 6
            sub_403110(ebx + 4, sub_410930(sub_455910(eax_29), &var_74, &var_5c, \n"), nullptr, 
                0xffffffff)
            
            if (var_48 u>= 0x10)
                j__free(var_5c)
            
            if (var_60_1 u>= 0x10)
                j__free(var_74.d)
            
            var_4.b = 1
            int32_t var_60_2 = 0xf
            int32_t var_64_2 = 0
            var_74 = 0
            
            if (var_30 u>= 0x10)
                j__free(var_44)
            
            ecx = var_8c
        
        if (*(i_2 + 0xd) == 0)
            int32_t* i_3 = i_2[2]
            
            if (*(i_3 + 0xd) != 0)
                int32_t* i_5 = i_2[1]
                
                if (*(i_5 + 0xd) == 0)
                    while (i_2 == i_5[2])
                        i_2 = i_5
                        i_5 = i_5[1]
                        
                        if (*(i_5 + 0xd) != 0)
                            break
                
                i_2 = i_5
            else
                i_2 = i_3
                int32_t* i_4 = *i_2
                
                while (*(i_4 + 0xd) == 0)
                    i_2 = i_4
                    i_4 = *i_2
    
    ebx.b = 0
else
    ebx.b = 1

sub_457d00(&var_8c, &var_80, *ecx, ecx)
j__free(var_8c)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_8c)
return result
