// 函数: sub_40fc40
// 地址: 0x40fc40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t* var_48 = edi
char* result = arg3
char* result_1 = result
int32_t esi = arg5
int32_t var_68 = esi
int32_t var_44 = 0
int32_t i_1 = (edi[1] - *edi) s/ 0x74
int32_t i_2 = i_1

if (i_1 s> 0)
    int32_t* var_60 = nullptr
    int32_t var_5c_1 = 0
    int32_t var_58_1 = 0
    int32_t var_4 = 0
    sub_410480(&var_60, i_1)
    int32_t var_74 = 0
    int32_t var_28
    int32_t var_14
    
    if (i_1 s> 0)
        int32_t edx_3 = esi + 1
        int32_t eax_7 = 0
        int32_t* esi_2 = &var_60[4]
        int32_t var_50_1 = edx_3
        int32_t var_64_1 = 0
        int32_t ebp = 0
        int32_t i
        
        do
            char* eax_8 = sub_40f400(*edi + eax_7, &var_28, arg4, edx_3)
            
            if (&esi_2[-4] != eax_8)
                if (esi_2[1] u>= 0x10)
                    j__free(esi_2[-4])
                
                esi_2[1] = 0xf
                *esi_2 = 0
                esi_2[-4].b = 0
                
                if (*(eax_8 + 0x14) u>= 0x10)
                    esi_2[-4] = *eax_8
                    *eax_8 = 0
                else
                    void* eax_9 = *(eax_8 + 0x10)
                    
                    if (eax_9 != 0xffffffff)
                        _memcpy(&esi_2[-4], eax_8, eax_9 + 1, eax_4)
                
                *esi_2 = *(eax_8 + 0x10)
                esi_2[1] = *(eax_8 + 0x14)
                *(eax_8 + 0x14) = 0xf
                *(eax_8 + 0x10) = 0
                *eax_8 = 0
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            int32_t eax_14 = *esi_2
            edi = var_48
            int32_t var_54
            int32_t* ecx_8 = &var_54
            var_54 = eax_14
            
            if (ebp s>= eax_14)
                ecx_8 = &var_74
            
            edx_3 = var_50_1
            eax_7 = var_64_1 + 0x74
            esi_2 = &esi_2[6]
            var_64_1 = eax_7
            ebp = *ecx_8
            var_74 = ebp
            i = i_1
            i_1 -= 1
        while (i != 1)
        result = result_1
        esi = var_68
    
    int32_t var_2c_1 = 0xf
    void* const var_30_1 = nullptr
    char var_40 = 0
    sub_402110(&var_40, 0x6da258, 2)
    var_4.b = 1
    int32_t* eax_16 = sub_4031c0(&var_40, (esi << 2) + 4, 0x20)
    int32_t esi_3 = 0
    
    if (i_2 s> 0)
        int32_t* edi_2 = var_60
        
        do
            var_4.b = 2
            sub_403110(&var_40, sub_410930(eax_16, edi_2, &var_28, U",\n\n}"), nullptr, 0xffffffff)
            var_4.b = 1
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            sub_4031c0(&var_40, var_74 - edi_2[4] + 1, 0x20)
            eax_16 = esi_3 u% 0xa
            
            if (eax_16 == 9)
                sub_4057c0(&var_40, &(*U",\n\n}")[1], 1)
                eax_16 = sub_4031c0(&var_40, (esi << 2) + 4, 0x20)
            
            esi_3 += 1
            edi_2 = &edi_2[6]
        while (esi_3 s< i_2)
        
        result = result_1
    
    sub_4057c0(&var_40, &(*U",\n\n}")[2], 1)
    sub_4031c0(&var_40, var_68 << 2, 0x20)
    sub_4057c0(&var_40, &(*U",\n\n}")[3], 1)
    *(result + 0x14) = 0xf
    *(result + 0x10) = 0
    *result = 0
    int32_t ecx_22 = var_2c_1
    
    if (ecx_22 u>= 0x10)
        *result = var_40.d
        var_40.d = 0
    else if (var_30_1 != 0xffffffff)
        _memcpy(result, &var_40, var_30_1 + 1, eax_4)
        ecx_22 = var_2c_1
    
    int32_t* ebx_5 = var_60
    *(result + 0x10) = var_30_1
    *(result + 0x14) = ecx_22
    int32_t var_2c_2 = 0xf
    int32_t var_30_2 = 0
    var_40 = 0
    
    if (ebx_5 != 0)
        int32_t* esi_4 = ebx_5
        
        if (ebx_5 != var_5c_1)
            do
                if (esi_4[5] u>= 0x10)
                    j__free(*esi_4)
                
                esi_4[5] = 0xf
                esi_4[4] = 0
                *esi_4 = 0
                esi_4 = &esi_4[6]
            while (esi_4 != var_5c_1)
        
        j__free(ebx_5)
else
    sub_401f60(result, "{ }")

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_78)
return result
