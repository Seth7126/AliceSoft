// 函数: sub_5ffc60
// 地址: 0x5ffc60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc6b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebx = nullptr
char* esi = nullptr
int32_t edx = 0
char* var_44 = nullptr
char* var_40 = nullptr
int32_t var_3c = 0
struct _EXCEPTION_REGISTRATION_RECORD*** result_3 = arg2
char* i = nullptr
int32_t var_4 = 0
char* i_1 = nullptr
struct _EXCEPTION_REGISTRATION_RECORD** result

if (result_3[4] s> 0)
    char var_2c
    
    do
        int32_t eax_5 = result_3[5]
        struct _EXCEPTION_REGISTRATION_RECORD** result_5
        
        if (eax_5 u< 0x10)
            result_5 = result_3
        else
            result_5 = *result_3
        
        struct _EXCEPTION_REGISTRATION_RECORD** result_6
        
        if (*(i + result_5) u>= 0x81)
            if (eax_5 u< 0x10)
                result_6 = result_3
            else
                result_6 = *result_3
        
        struct _EXCEPTION_REGISTRATION_RECORD** result_7
        struct _EXCEPTION_REGISTRATION_RECORD** result_8
        
        if (*(i + result_5) u< 0x81 || *(i + result_6) u> 0x9f)
            if (eax_5 u< 0x10)
                result_7 = result_3
            else
                result_7 = *result_3
            
            if (*(i + result_7) u>= 0xe0)
                if (eax_5 u< 0x10)
                    result_8 = result_3
                else
                    result_8 = *result_3
        
        if ((*(i + result_5) u< 0x81 || *(i + result_6) u> 0x9f)
                && (*(i + result_7) u< 0xe0 || *(i + result_8) u> 0xef))
            struct _EXCEPTION_REGISTRATION_RECORD** result_9
            
            if (eax_5 u< 0x10)
                result_9 = result_3
            else
                result_9 = *result_3
            
            if (*(i + result_9) != 0xa)
                if (eax_5 u< 0x10)
                    result = result_3
                else
                    result = *result_3
                
                char* ebp_7 = result + i
                
                if (ebp_7 u>= esi || ebx u> ebp_7)
                    if (esi == edx)
                        sub_403590(&var_44, 1)
                        esi = var_40
                        ebx = var_44
                        i = i_1
                    
                    if (esi != 0)
                        result.b = *ebp_7
                        *esi = result.b
                else
                    int32_t ebp_8 = ebp_7 - ebx
                    
                    if (esi == edx)
                        sub_403590(&var_44, 1)
                        esi = var_40
                        ebx = var_44
                        i = i_1
                    
                    if (esi != 0)
                        result.b = ebx[ebp_8]
                        *esi = result.b
                
                esi = &esi[1]
                var_40 = esi
            else
                void* ebp_6
                
                if (ebx == esi)
                    ebp_6 = arg1
                else
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    sub_402110(&var_2c, ebx, esi - ebx)
                    ebp_6 = arg1
                    var_4.b = 1
                    sub_403110(*(*(ebp_6 + 8) - 4) + 4, &var_2c, nullptr, 0xffffffff)
                    var_4.b = 0
                    
                    if (var_18_1 u>= 0x10)
                        j__free(var_2c.d)
                    
                    int32_t eax_9 = *(*(*(ebp_6 + 8) - 4) + 0x14)
                    
                    if (*(ebp_6 + 0x10) s< eax_9)
                        *(ebp_6 + 0x10) = eax_9
                    
                    esi = ebx
                    var_40 = esi
                
                result = sub_69adc6(0x1c)
                struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                
                if (result == 0)
                    result = nullptr
                    result_1 = nullptr
                else
                    *result = &crayfish::CLogLine::`vftable'
                    result[6] = 0xf
                    result[5] = 0
                    result[1].b = 0
                
                int32_t ecx_7 = *(ebp_6 + 8)
                struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
                int32_t edx_1
                
                if (&result_2 u< ecx_7)
                    edx_1 = *(ebp_6 + 4)
                    result_3 = arg2
                
                if (&result_2 u>= ecx_7 || edx_1 u> &result_2)
                    if (ecx_7 == *(ebp_6 + 0xc))
                        int32_t var_64_4 = ecx_7
                        sub_412f20(ebp_6 + 4)
                        result = result_1
                    
                    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_12 = *(ebp_6 + 8)
                    
                    if (ecx_12 != 0)
                        *ecx_12 = result
                    
                    *(ebp_6 + 8) += 4
                    i = i_1
                else
                    if (ecx_7 == *(ebp_6 + 0xc))
                        int32_t var_64_3 = ecx_7
                        sub_412f20(ebp_6 + 4)
                    
                    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_10 = *(ebp_6 + 8)
                    
                    if (ecx_10 == 0)
                        *(ebp_6 + 8) += 4
                        i = i_1
                    else
                        *ecx_10 = *(*(ebp_6 + 4) + ((&result_2 - edx_1) s>> 2 << 2))
                        *(ebp_6 + 8) += 4
                        i = i_1
            
            i = &i[1]
        else
            struct _EXCEPTION_REGISTRATION_RECORD** result_4
            
            if (eax_5 u< 0x10)
                result_4 = result_3
            else
                result_4 = *result_3
            
            char* ebp_1 = result_4 + i
            
            if (ebp_1 u>= esi || ebx u> ebp_1)
                if (esi == edx)
                    sub_403590(&var_44, 1)
                    esi = var_40
                    ebx = var_44
                    i = i_1
                    edx = var_3c
                
                if (esi != 0)
                    result_4.b = *ebp_1
                    *esi = result_4.b
            else
                int32_t ebp_2 = ebp_1 - ebx
                
                if (esi == edx)
                    sub_403590(&var_44, 1)
                    esi = var_40
                    ebx = var_44
                    i = i_1
                    edx = var_3c
                
                if (esi != 0)
                    result_4.b = ebx[ebp_2]
                    *esi = result_4.b
            
            void* esi_1 = &esi[1]
            
            if (result_3[5] u< 0x10)
                result = result_3
            else
                result = *result_3
            
            char* ebp_4 = &i[1] + result
            
            if (ebp_4 u>= esi_1 || ebx u> ebp_4)
                if (esi_1 == edx)
                    sub_403590(&var_44, 1)
                    ebx = var_44
                    i = i_1
                
                if (esi_1 == 0)
                    goto label_5ffdec
                
                result.b = *ebp_4
                *esi_1 = result.b
            label_5ffdec:
                esi = esi_1 + 1
                i = &i[2]
                var_40 = esi
            else
                int32_t ebp_5 = ebp_4 - ebx
                
                if (esi_1 == edx)
                    sub_403590(&var_44, 1)
                    ebx = var_44
                    i = i_1
                
                if (esi_1 == 0)
                    goto label_5ffdec
                
                result.b = ebx[ebp_5]
                *esi_1 = result.b
                esi = esi_1 + 1
                var_40 = esi
                i = &i[2]
        
        edx = var_3c
        i_1 = i
    while (i s< result_3[4])
    
    if (ebx != esi)
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_402110(&var_2c, ebx, esi - ebx)
        var_4.b = 2
        sub_403110(*(*(arg1 + 8) - 4) + 4, &var_2c, nullptr, 0xffffffff)
        
        if (var_18_2 u>= 0x10)
            j__free(var_2c.d)
        
        result = *(*(*(arg1 + 8) - 4) + 0x14)
        
        if (*(arg1 + 0x10) s< result)
            *(arg1 + 0x10) = result
    
    if (ebx != 0)
        j__free(ebx)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
