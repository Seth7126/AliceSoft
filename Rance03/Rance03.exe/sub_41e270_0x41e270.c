// 函数: sub_41e270
// 地址: 0x41e270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_12 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b472b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_17c
int32_t eax_2 = __security_cookie ^ &var_17c
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_15c = ebp
int32_t ebx = arg2
int32_t var_178 = 0
int32_t var_16c = 0
int32_t var_174 = ebx
int32_t __saved_edi
char* edx = (*(*ebx + 4))(__security_cookie ^ &__saved_edi)
int32_t var_f0 = 0xf
int32_t var_f4 = 0
char var_104 = 0
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_6.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_402110(&var_104, edx, ecx_1)
int32_t var_4 = 0
int32_t var_8c
sub_402b00(&var_8c, &var_104)
var_4.b = 2

if (var_f0 u>= 0x10)
    j__free(var_104.d)

void* eax_7 = ebp + 0x88
int32_t var_f0_1 = 0xf
int32_t var_f4_1 = 0
var_104 = 0
int32_t* edi = eax_7
void** var_a4
sub_402c80(&var_a4, &var_8c)
var_4.b = 3
int32_t result_1
int32_t i
int32_t var_90
int32_t var_78
int32_t var_5c

if (i != 0)
    do
        int32_t* eax_8 = sub_421bc0(edi, &var_a4)
        
        if (eax_8 != 0)
            edi = eax_8
        else
            int32_t* ebx_1 = sub_69adc6(0x38)
            int32_t* var_160_1 = ebx_1
            var_4.b = 4
            
            if (ebx_1 == 0)
                ebx_1 = nullptr
            else
                *ebx_1 = 0
                ebx_1[6] = 0xf
                ebx_1[5] = 0
                ebx_1[1].b = 0
                sub_401ff0(&ebx_1[1], &var_a4, 0, 0xffffffff)
                var_4.b = 5
                ebx_1[0xc] = 0xf
                ebx_1[0xb] = 0
                ebx_1[7].b = 0
                sub_401ff0(&ebx_1[7], &var_a4, 0, 0xffffffff)
                ebx_1[0xd] = 0
            
            var_4.b = 3
            int32_t* esi_2 = sub_69adc6(0x3c)
            
            if (esi_2 == 0)
                esi_2 = nullptr
            else
                *esi_2 = 0
                esi_2[1] = 0
                esi_2[2].b = 0
                esi_2[8] = 0xf
                esi_2[7] = 0
                esi_2[3].b = 0
                __builtin_memset(&esi_2[9], 0, 0x18)
            
            *esi_2 = *edi
            int32_t lParam = edi[1]
            void** eax_13 = &var_a4
            
            if (var_90 u>= 0x10)
                eax_13 = var_a4
            
            void** var_134_1 = eax_13
            int32_t* var_168 = esi_2
            int32_t var_130_1 = i + 1
            int32_t var_148_1 = 0xffff0002
            int32_t var_144_1 = 0x27
            int32_t var_12c_1 = 5
            int32_t var_128_1 = 5
            int32_t* var_120_1 = ebx_1
            esi_2[1] = SendMessageA(*esi_2, 0x1100, 0, &lParam)
            
            if (&esi_2[3] != &var_a4)
                sub_401ff0(&esi_2[3], &var_a4, 0, 0xffffffff)
            
            int32_t eax_17 = edi[0xa]
            int32_t** ecx_10 = &var_168
            
            if (&var_168 u< eax_17)
                ecx_10 = edi[9]
            
            if (&var_168 u>= eax_17 || ecx_10 u> &var_168)
                if (eax_17 == edi[0xb])
                    int32_t** var_194_5 = ecx_10
                    sub_412f20(&edi[9])
                
                void** eax_20 = edi[0xa]
                
                if (eax_20 != 0)
                    *eax_20 = esi_2
            else
                if (eax_17 == edi[0xb])
                    int32_t** var_194_4 = ecx_10
                    sub_412f20(&edi[9])
                
                int32_t* ecx_12 = edi[0xa]
                
                if (ecx_12 != 0)
                    *ecx_12 = *(edi[9] + ((&var_168 - ecx_10) s>> 2 << 2))
                
                ebp = var_15c
            
            edi[0xa] += 4
            edi = esi_2
            result_1 = esi_2[1]
            *sub_41ff70(ebp + 8, &result_1) = ebx_1
        
        char* eax_23 = sub_402b00(&var_5c, &var_8c)
        
        if (&var_8c != eax_23)
            if (var_78 u>= 0x10)
                j__free(var_8c)
            
            int32_t var_78_1 = 0xf
            int32_t var_7c_1 = 0
            var_8c.b = 0
            
            if (*(eax_23 + 0x14) u>= 0x10)
                var_8c = *eax_23
                *eax_23 = 0
            else
                void* eax_24 = *(eax_23 + 0x10)
                
                if (eax_24 != 0xffffffff)
                    _memcpy(&var_8c, eax_23, eax_24 + 1)
            
            int32_t var_7c_2 = *(eax_23 + 0x10)
            var_78 = *(eax_23 + 0x14)
            *(eax_23 + 0x14) = 0xf
            *(eax_23 + 0x10) = 0
            *eax_23 = 0
        
        int32_t var_48
        
        if (var_48 u>= 0x10)
            j__free(var_5c)
        
        var_4.b = 2
        
        if (var_90 u>= 0x10)
            j__free(var_a4)
        
        sub_402c80(&var_a4, &var_8c)
        var_4.b = 3
    while (i != 0)
    
    ebx = var_174

if (var_90 u>= 0x10)
    j__free(var_a4)

int32_t var_4_1 = 0xffffffff

if (var_78 u>= 0x10)
    j__free(var_8c)

int32_t var_d8 = 0xf
int32_t var_dc = 0
char var_ec = 0
sub_402110(&var_ec, 0x6da07b, nullptr)
int32_t var_4_2 = 6
char* edx_5 = (*(*ebx + 4))()
int32_t var_f0_2 = 0xf
int32_t var_f4_2 = 0
var_104 = 0
void* ecx_19

if (*edx_5 != 0)
    char* ecx_20 = edx_5
    char* eax_30
    
    do
        eax_30.b = *ecx_20
        ecx_20 = &ecx_20[1]
    while (eax_30.b != 0)
    ecx_19 = ecx_20 - &ecx_20[1]
else
    ecx_19 = nullptr

sub_402110(&var_104, edx_5, ecx_19)
var_4_2.b = 7
int32_t* eax_32 = sub_41f0c0(ebp + 0x88, &var_ec, &var_104, ebp + 0x88)

if (var_f0_2 u>= 0x10)
    j__free(var_104.d)

int32_t var_4_3 = 0xffffffff
int32_t var_f0_3 = 0xf
int32_t var_f4_3 = 0
var_104 = 0

if (var_d8 u>= 0x10)
    j__free(var_ec.d)

int32_t var_d8_1 = 0xf
int32_t var_dc_1 = 0
var_ec = 0
char var_bc
int32_t var_a8

if (eax_32 != 0)
    int32_t* eax_33 = sub_69adc6(0x38)
    int32_t* var_160_2 = eax_33
    int32_t var_4_4 = 8
    char var_44
    int32_t* edi_2
    
    if (eax_33 == 0)
        edi_2 = nullptr
    else
        sub_401f60(&var_44, (*(*ebx + 4))())
        var_4_4.b = 9
        int32_t var_16c_1 = 1
        sub_401f60(&var_bc, (**ebx)())
        int32_t var_4_5 = 0xa
        var_178 = 3
        int32_t var_16c_2 = 3
        edi_2 = sub_420e30(eax_33, 1, &var_bc, &var_44, (*(*ebx + 8))())
    
    int32_t eax_40 = var_178
    
    if ((eax_40.b & 2) != 0)
        eax_40 &= 0xfffffffd
        var_178 = eax_40
        
        if (var_a8 u>= 0x10)
            j__free(var_bc.d)
            eax_40 = var_178
        
        var_a8 = 0xf
        int32_t var_ac_1 = 0
        var_bc = 0
    
    int32_t var_4_6 = 0xffffffff
    
    if ((eax_40.b & 1) != 0)
        var_178 = eax_40 & 0xfffffffe
        int32_t var_30
        
        if (var_30 u>= 0x10)
            j__free(var_44.d)
        
        int32_t var_30_1 = 0xf
        int32_t var_34_1 = 0
        var_44 = 0
    
    char var_2c
    sub_401f60(&var_2c, (**ebx)())
    int32_t var_4_7 = 0xd
    int32_t* eax_44 = sub_69adc6(0x3c)
    int32_t* ecx_32
    
    if (eax_44 == 0)
        ecx_32 = nullptr
    else
        ecx_32 = sub_4218a0(eax_44)
    
    *ecx_32 = *eax_32
    int32_t var_194_23 = eax_32[1]
    var_174 = ecx_32
    sub_421a90(ecx_32, &var_2c, edi_2, 0, var_194_23)
    sub_412de0(&eax_32[9], &var_174)
    int32_t var_4_8 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c.d)
    
    int32_t eax_47 = var_174
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    result_1 = *(eax_47 + 4)
    *sub_41ff70(ebp + 8, &result_1) = edi_2

int32_t eax_51 = (*(*ebx + 0xc))()
int32_t result = 0
result_1 = 0

if (eax_51 s> 0)
    do
        int32_t* edi_3 = (*(*ebx + 0x14))(result)
        
        if (edi_3 != 0)
            int32_t var_48_1 = 0xf
            int32_t var_4c_1 = 0
            var_5c.b = 0
            int32_t var_4_9 = 0xe
            int32_t var_c0_1 = 0xf
            int32_t var_c4_1 = 0
            char var_d4 = 0
            var_4_9.b = 0xf
            sub_41fba0(edi_3, &var_5c, &var_d4)
            char* edx_9 = (**ebx)()
            int32_t var_60_1 = 0xf
            uint32_t var_64_1 = 0
            char var_74 = 0
            void* ecx_40
            
            if (*edx_9 != 0)
                char* ecx_41 = edx_9
                char* eax_54
                
                do
                    eax_54.b = *ecx_41
                    ecx_41 = &ecx_41[1]
                while (eax_54.b != 0)
                ecx_40 = ecx_41 - &ecx_41[1]
            else
                ecx_40 = nullptr
            
            sub_402110(&var_74, edx_9, ecx_40)
            var_4_9.b = 0x10
            char* ecx_43 = &var_74
            char* eax_55 = &var_d4
            
            if (var_60_1 u>= 0x10)
                ecx_43 = var_74.d
            
            if (var_c0_1 u>= 0x10)
                eax_55 = var_d4.d
            
            int32_t var_164_1
            
            if (_strncmp(eax_55, ecx_43, var_64_1) != 0)
                char* eax_57
                
                if (var_c4_1 != 0)
                    eax_57 = &var_d4
                    
                    if (var_c0_1 u>= 0x10)
                        eax_57 = var_d4.d
                
                if (var_c4_1 == 0 || *eax_57 != 0x7e)
                    var_174 = 7
                    var_164_1 = 4
                else
                    var_174 = 4
                    var_164_1 = 3
            else
                var_174 = 3
                var_164_1 = 2
            
            char* edx_10 = (**ebx)()
            int32_t var_f0_4 = 0xf
            int32_t var_f4_4 = 0
            var_104 = 0
            void* ecx_45
            
            if (*edx_10 != 0)
                char* ecx_46 = edx_10
                char* eax_59
                
                do
                    eax_59.b = *ecx_46
                    ecx_46 = &ecx_46[1]
                while (eax_59.b != 0)
                ecx_45 = ecx_46 - &ecx_46[1]
            else
                ecx_45 = nullptr
            
            sub_402110(&var_104, edx_10, ecx_45)
            var_4_9.b = 0x11
            char* edx_11 = (*(*ebx + 4))()
            int32_t var_d8_2 = 0xf
            int32_t var_dc_2 = 0
            var_ec = 0
            void* ecx_49
            
            if (*edx_11 != 0)
                char* ecx_50 = edx_11
                char* eax_61
                
                do
                    eax_61.b = *ecx_50
                    ecx_50 = &ecx_50[1]
                while (eax_61.b != 0)
                ecx_49 = ecx_50 - &ecx_50[1]
            else
                ecx_49 = nullptr
            
            var_4_9.b = 0x12
            HWND* eax_63 = sub_41f0c0(sub_402110(&var_ec, edx_11, ecx_49), &var_104, &var_ec, eax_7)
            
            if (var_d8_2 u>= 0x10)
                j__free(var_ec.d)
            
            var_4_9.b = 0x10
            int32_t var_d8_3 = 0xf
            int32_t var_dc_3 = 0
            var_ec = 0
            
            if (var_f0_4 u>= 0x10)
                j__free(var_104.d)
            
            int32_t var_f0_5 = 0xf
            int32_t var_f4_5 = 0
            var_104 = 0
            
            if (eax_63 != 0)
                int32_t* eax_64 = sub_69adc6(0x38)
                int32_t* var_150_1 = eax_64
                var_4_9.b = 0x13
                int32_t* esi_10
                
                if (eax_64 == 0)
                    esi_10 = nullptr
                else
                    char* edx_14 = (*(*edi_3 + 0x3c))()
                    var_a8 = 0xf
                    int32_t var_ac_2 = 0
                    var_bc = 0
                    void* ecx_54
                    
                    if (*edx_14 != 0)
                        char* ecx_55 = edx_14
                        char* eax_65
                        
                        do
                            eax_65.b = *ecx_55
                            ecx_55 = &ecx_55[1]
                        while (eax_65.b != 0)
                        ecx_54 = ecx_55 - &ecx_55[1]
                    else
                        ecx_54 = nullptr
                    
                    sub_402110(&var_bc, edx_14, ecx_54)
                    var_4_9.b = 0x14
                    int32_t eax_67 = var_178 | 4
                    var_178 = eax_67
                    int32_t var_16c_4 = eax_67
                    esi_10 = sub_420e30(eax_64, var_164_1, &var_d4, &var_bc, (*(*edi_3 + 0x40))())
                
                int32_t var_4_10 = 0x10
                
                if ((var_178.b & 4) != 0)
                    var_178 &= 0xfffffffb
                    
                    if (var_a8 u>= 0x10)
                        j__free(var_bc.d)
                    
                    var_a8 = 0xf
                    int32_t var_ac_3 = 0
                    var_bc = 0
                
                struct HWND__** var_158 = sub_421b10(eax_63, &var_d4, var_174, esi_10)
                *sub_41ff70(var_15c + 8, &var_158) = esi_10
            
            if (var_60_1 u>= 0x10)
                j__free(var_74.d)
            
            int32_t var_60_2 = 0xf
            int32_t var_64_2 = 0
            var_74 = 0
            
            if (var_c0_1 u>= 0x10)
                j__free(var_d4.d)
            
            int32_t var_4_11 = 0xffffffff
            int32_t var_c0_2 = 0xf
            int32_t var_c4_2 = 0
            var_d4 = 0
            
            if (var_48_1 u>= 0x10)
                j__free(var_5c)
        
        result = result_1 + 1
        result_1 = result
    while (result s< eax_51)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_17c)
return result
