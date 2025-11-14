// 函数: sub_494720
// 地址: 0x494720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_9 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb658
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t __saved_edi
int32_t var_94 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_74 = ebx
void** var_7c = arg2
int32_t var_78 = arg3
int32_t var_5c = 0xf
int32_t var_60 = 0
char var_70 = 0
sub_402110(&var_70, 0x6dfc04, 0x10)
int32_t var_4 = 0
sub_494b30(&var_7c, &var_70)
int32_t var_4_1 = 0xffffffff

if (var_5c u>= 0x10)
    j__free(var_70.d)

int32_t* edi = *(ebx + 0x20)
var_80 = 0
int32_t* i = *edi
char var_58
int32_t var_44
int32_t var_40
int32_t var_2c

if (i != edi)
    do
        char* ebp_1 = sub_494c00(&var_40, i[0xa])
        int32_t var_4_2 = 1
        char* eax_8 = sub_494c00(&var_58, &i[4])
        var_4_2.b = 2
        
        if (*(ebp_1 + 0x14) u>= 0x10)
            ebp_1 = *ebp_1
        
        if (*(eax_8 + 0x14) u>= 0x10)
            eax_8 = *eax_8
        
        int32_t ebx_2 = var_80
        char* var_98_4 = ebp_1
        char* var_9c_3 = eax_8
        int32_t var_a0_1 = ebx_2
        var_4_2.b = 3
        sub_494b30(&var_7c, sub_4691f0(&var_70, 0x6dfc38))
        var_80 = ebx_2 + 1
        
        if (var_5c u>= 0x10)
            j__free(var_70.d)
        
        var_5c = 0xf
        int32_t var_60_1 = 0
        var_70 = 0
        
        if (var_44 u>= 0x10)
            j__free(var_58.d)
        
        int32_t var_4_3 = 0xffffffff
        var_44 = 0xf
        int32_t var_48_1 = 0
        var_58 = 0
        
        if (var_2c u>= 0x10)
            j__free(var_40)
        
        if (*(i + 0xd) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0xd) != 0)
                int32_t* i_4 = i[1]
                
                if (*(i_4 + 0xd) == 0)
                    while (i == i_4[2])
                        i = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0xd) != 0)
                            break
                
                i = i_4
            else
                i = i_2
                int32_t* i_3 = *i
                
                while (*(i_3 + 0xd) == 0)
                    i = i_3
                    i_3 = *i
    while (i != edi)
    
    ebx = var_74

void* const var_9c_4 = &data_6dfc20
int32_t var_5c_1 = 0xf
int32_t var_60_2 = 0
var_70 = 0
sub_402110(&var_70, &data_6dfc20, 0x14)
int32_t var_4_4 = 4
sub_494b30(&var_7c, &var_70)
int32_t var_4_5 = 0xffffffff

if (var_5c_1 u>= 0x10)
    j__free(var_70.d)

int32_t* edi_1 = *(ebx + 0x28)
var_80 = 0
int32_t* i_1 = *edi_1

if (i_1 != edi_1)
    do
        char* ebp_2 = sub_494c00(&var_40, i_1[0xa])
        int32_t var_4_6 = 5
        void* eax_11 = sub_494c00(&var_70, &i_1[4])
        var_4_6.b = 6
        
        if (*(ebp_2 + 0x14) u>= 0x10)
            ebp_2 = *ebp_2
        
        if (*(eax_11 + 0x14) u>= 0x10)
            eax_11 = *eax_11
        
        int32_t ebx_6 = var_80
        char* var_98_13 = ebp_2
        var_9c_4 = eax_11
        int32_t var_a0_2 = ebx_6
        var_4_6.b = 7
        sub_494b30(&var_7c, sub_4691f0(&var_58, 0x6dfc7c))
        var_80 = ebx_6 + 1
        
        if (var_44 u>= 0x10)
            j__free(var_58.d)
        
        var_44 = 0xf
        int32_t var_48_2 = 0
        var_58 = 0
        
        if (var_5c_1 u>= 0x10)
            j__free(var_70.d)
        
        int32_t var_4_7 = 0xffffffff
        var_5c_1 = 0xf
        int32_t var_60_3 = 0
        var_70 = 0
        
        if (var_2c u>= 0x10)
            j__free(var_40)
        
        if (*(i_1 + 0xd) == 0)
            int32_t* i_5 = i_1[2]
            
            if (*(i_5 + 0xd) != 0)
                int32_t* i_7 = i_1[1]
                
                if (*(i_7 + 0xd) == 0)
                    while (i_1 == i_7[2])
                        i_1 = i_7
                        i_7 = i_7[1]
                        
                        if (*(i_7 + 0xd) != 0)
                            break
                
                i_1 = i_7
            else
                i_1 = i_5
                int32_t* i_6 = *i_1
                
                while (*(i_6 + 0xd) == 0)
                    i_1 = i_6
                    i_6 = *i_1
    while (i_1 != edi_1)
    
    ebx = var_74

var_9c_4.q = _mm_cvtps_pd(*(ebx + 0x30))
int32_t var_4_8 = 8
int32_t var_28
sub_494b30(&var_7c, sub_4691f0(&var_28, "FPS = %f"))
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_80)
return result
