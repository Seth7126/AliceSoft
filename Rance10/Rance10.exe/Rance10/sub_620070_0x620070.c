// 函数: sub_620070
// 地址: 0x620070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** ecx
void** edx
ecx, edx = __alloca_probe(0x3004)
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7446f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_3008
int32_t eax_2 = __security_cookie ^ &var_3008
int32_t var_54 = eax_2
int32_t var_3014
fsbase->NtTib.ExceptionList = &var_3014
void** var_3030 = edx
void** var_3028 = ecx
char* esi = nullptr
char* var_3024 = nullptr
char* var_3020 = nullptr
int32_t var_301c = 0
int32_t var_300c = 0
int32_t eax_4 = ecx[4]

if (eax_4 != 0)
    sub_405a80(&var_3024, eax_4)
    esi = var_3020
    ecx = var_3028

char* eax_5 = ecx[4]
char* var_3040 = eax_5

if (ecx[5] u>= 0x10)
    ecx = *ecx
    var_3028 = ecx

char* edi = nullptr
char var_3015

if (eax_5 s> 0)
    while (true)
        edx.b = *(edi + ecx)
        char* ebx_1 = edi + ecx
        
        if ((edx.b u< 0x81 || edx.b u> 0x9f) && (&edx[8]).b u> 0xf)
            if (edx.b != 0x25)
                edi = &edi[1]
                eax_5, edx = sub_4263a0(&var_3024, ebx_1)
            else if (*(edi + ecx + 1) != 0x25)
                char* var_58_8 = ebx_1
                char* var_5c_1 = ecx
                edi = &edi[1]
                char* var_303c = nullptr
                void* var_302c = edi
                char* var_3038_1 = nullptr
                int32_t var_3034_1 = 0
                var_300c.b = 1
                sub_61f1a0(sub_620840(&var_303c, var_5c_1), &var_302c, var_3028, var_3040)
                void* ecx_10 = var_302c
                char* var_60_6
                void* var_5c_7
                int32_t var_58_16
                char* ebx_6
                
                if (ecx_10 s<= edi)
                    ebx_6 = var_303c
                else
                    int32_t var_58_10 = 0.d
                    sub_620a00(&var_303c, var_3038_1, edi + var_3028, ecx_10 + var_3028)
                    ebx_6 = var_303c
                    char* eax_11 = _memchr(ebx_6, 0x2a, var_3038_1 - ebx_6)
                    char* ecx_12 = var_3038_1
                    
                    if (eax_11 != 0)
                        ecx_12 = eax_11
                    
                    if (ecx_12 != var_3038_1)
                        int32_t var_58_14 = 0.d
                        sub_6208d0(&var_3024, esi, ebx_6, var_3038_1)
                        int32_t var_58_15 = 0.d
                        sub_620a00(&var_3024, var_3020, var_302c + var_3028, var_3028 + var_3040)
                        var_300c.b = 0
                        
                        if (ebx_6 == 0)
                            esi = var_3020
                            break
                            break
                        
                        var_58_16 = 1
                        var_5c_7 = var_3034_1 - ebx_6
                        var_60_6 = ebx_6
                    label_620443:
                        sub_403160(var_60_6, var_5c_7, var_58_16)
                        esi = var_3020
                        break
                        break
                    
                    ecx_10 = var_302c
                
                if (*(ecx_10 + var_3028) == 0x73)
                    var_302c = ecx_10 + 1
                    sub_4263a0(&var_303c, ecx_10 + var_3028)
                    var_3015 = 0
                    sub_4263a0(&var_303c, &var_3015)
                    _memset(&var_3008, 0, 0x3000)
                    void** eax_20 = var_3030
                    char* edi_2 = var_303c
                    
                    if (eax_20[4] u< 0x3000)
                        if (eax_20[5] u>= 0x10)
                            eax_20 = *eax_20
                        
                        void** var_58_20 = eax_20
                        
                        if (sub_406aa0(&var_3008, 0x3000, edi_2) != 0xffffffff)
                            char* edi_3 = &var_3008
                            
                            do
                                eax_20.b = *edi_3
                                edi_3 = &edi_3[1]
                            while (eax_20.b != 0)
                            
                            void var_3007
                            void* edi_4 = edi_3 - &var_3007
                            
                            if (edi_3 != &var_3007)
                                void* esi_2 = esi - var_3024
                                sub_405950(&var_3024, esi_2 + edi_4)
                                sub_700660(var_3024 + esi_2, &var_3008, edi_4)
                                esi = var_3020
                            
                            int32_t var_58_23 = 0
                            sub_620a00(&var_3024, esi, var_302c + var_3028, var_3040 + var_3028)
                            var_300c.b = 0
                            sub_4059a0(&var_303c)
                            esi = var_3020
                            break
                            break
                    
                    char* ecx_26 = edi_2
                    
                    do
                        eax_20.b = *ecx_26
                        ecx_26 = &ecx_26[1]
                    while (eax_20.b != 0)
                    
                    int32_t var_58_24 = 0
                    sub_620a00(&var_3024, esi, edi_2, edi_2 + ecx_26 - &ecx_26[1])
                    int32_t var_58_25 = 0
                    sub_620a00(&var_3024, var_3020, var_302c + var_3028, var_3040 + var_3028)
                    var_300c.b = 0
                    
                    if (edi_2 == 0)
                        esi = var_3020
                        break
                    
                    var_58_16 = 1
                    var_5c_7 = var_3034_1 - edi_2
                    var_60_6 = edi_2
                    goto label_620443
                
                var_3015 = 0x25
                eax_5, edx = sub_4263a0(&var_3024, &var_3015)
                var_300c.b = 0
                
                if (ebx_6 != 0)
                    eax_5, edx = sub_403160(ebx_6, var_3034_1 - ebx_6, 1)
                    var_303c = nullptr
                    int32_t var_3038_2 = 0
                    int32_t var_3034_2 = 0
            else
                var_3015 = 0x25
                eax_5, edx = sub_4263a0(&var_3024, &var_3015)
                edi = &edi[2]
            
            esi = var_3020
        else
            if (ebx_1 u< esi)
                eax_5 = var_3024
            
            if (ebx_1 u>= esi || eax_5 u> ebx_1)
                if (esi == var_301c)
                    eax_5, edx = sub_405a20(&var_3024, 1)
                    esi = var_3020
                    ecx = var_3028
                
                if (esi != 0)
                    eax_5.b = *ebx_1
                    *esi = eax_5.b
            else
                void* ebx_2 = ebx_1 - eax_5
                
                if (esi == var_301c)
                    eax_5, edx = sub_405a20(&var_3024, 1)
                    esi = var_3020
                    ecx = var_3028
                
                if (esi != 0)
                    eax_5.b = *(var_3024 + ebx_2)
                    *esi = eax_5.b
            
            char* esi_1 = &esi[1]
            char* ebx_3 = &edi[1] + ecx
            edi = &edi[2]
            
            if (ebx_3 u< esi_1)
                eax_5 = var_3024
            
            if (ebx_3 u>= esi_1 || eax_5 u> ebx_3)
                if (esi_1 == var_301c)
                    eax_5, edx = sub_405a20(&var_3024, 1)
                
                if (esi_1 != 0)
                    eax_5.b = *ebx_3
                    *esi_1 = eax_5.b
                
                esi = &esi_1[1]
                var_3020 = esi
            else
                void* ebx_4 = ebx_3 - eax_5
                
                if (esi_1 == var_301c)
                    eax_5, edx = sub_405a20(&var_3024, 1)
                
                if (esi_1 != 0)
                    eax_5.b = *(var_3024 + ebx_4)
                    *esi_1 = eax_5.b
                
                esi = &esi_1[1]
                var_3020 = esi
        
        if (edi s>= var_3040)
            break
        
        ecx = var_3028

var_3015 = 0
char* edi_5

if (&var_3015 u< esi)
    edi_5 = var_3024

if (&var_3015 u>= esi || edi_5 u> &var_3015)
    if (esi == var_301c)
        sub_405a20(&var_3024, 1)
        esi = var_3020
    
    if (esi != 0)
        *esi = 0
else
    if (esi == var_301c)
        sub_405a20(&var_3024, 1)
        esi = var_3020
    
    if (esi != 0)
        char* eax_31
        eax_31.b = var_3024[&var_3015 - edi_5]
        *esi = eax_31.b

void* var_3020_2 = &esi[1]
void* ecx_34

if (*var_3024 != 0)
    char* ecx_35 = var_3024
    char* eax_32
    
    do
        eax_32.b = *ecx_35
        ecx_35 = &ecx_35[1]
    while (eax_32.b != 0)
    ecx_34 = ecx_35 - &ecx_35[1]
else
    ecx_34 = nullptr

char* edi_6 = var_3024
sub_403490(arg1, edi_6, ecx_34)
int32_t result = sub_403160(edi_6, var_301c - edi_6, 1)
fsbase->NtTib.ExceptionList = var_3014
@__security_check_cookie@4(eax_2 ^ &var_3008)
return result
