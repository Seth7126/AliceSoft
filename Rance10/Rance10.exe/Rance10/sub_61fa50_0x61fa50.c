// 函数: sub_61fa50
// 地址: 0x61fa50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7446ac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** ecx
int32_t* edx
ecx, edx = __alloca_probe(0x306c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_307c = edx
void** var_3058 = ecx
char* esi = nullptr
char* var_3054 = nullptr
char* var_3050 = nullptr
int32_t var_304c = 0
int32_t var_8_1 = 0
int32_t eax_3 = ecx[4]

if (eax_3 != 0)
    sub_405a80(&var_3054, eax_3)
    esi = var_3050
    ecx = var_3058

char* eax_4 = ecx[4]
char* var_3078 = eax_4

if (ecx[5] u>= 0x10)
    ecx = *ecx
    var_3058 = ecx

void* edi = nullptr
char var_3045

if (eax_4 s> 0)
    while (true)
        edx.b = *(edi + ecx)
        char* ebx = edi + ecx
        
        if ((edx.b u< 0x81 || edx.b u> 0x9f) && (&edx[8]).b u> 0xf)
            if (edx.b != 0x25)
                edi += 1
                eax_4, edx = sub_4263a0(&var_3054, ebx)
            else if (*(edi + ecx + 1) != 0x25)
                char* var_24_8 = ebx
                char* var_28_1 = ecx
                edi += 1
                char* var_3070 = nullptr
                void* var_3074 = edi
                void* var_306c_1 = nullptr
                int32_t var_3068_1 = 0
                var_8_1.b = 1
                sub_61f1a0(sub_620840(&var_3070, var_28_1), &var_3074, var_3058, var_3078)
                char* ecx_10 = var_3074
                char* ebx_5
                
                if (ecx_10 s<= edi)
                    ebx_5 = var_3070
                else
                    int32_t var_24_10 = 0.d
                    sub_620a00(&var_3070, var_306c_1, edi + var_3058, ecx_10 + var_3058)
                    ebx_5 = var_3070
                    void* eax_10 = _memchr(ebx_5, 0x2a, var_306c_1 - ebx_5)
                    void* ecx_12 = var_306c_1
                    
                    if (eax_10 != 0)
                        ecx_12 = eax_10
                    
                    if (ecx_12 != var_306c_1)
                        int32_t var_24_14 = 0.d
                        sub_6208d0(&var_3054, esi, ebx_5, var_306c_1)
                        int32_t var_24_15 = 0.d
                        sub_620a00(&var_3054, var_3050, var_3074 + var_3058, var_3058 + var_3078)
                        var_8_1.b = 0
                        
                        if (ebx_5 != 0)
                            sub_403160(ebx_5, var_3068_1 - ebx_5, 1)
                        
                        esi = var_3050
                        break
                        break
                    
                    ecx_10 = var_3074
                
                var_3045 = 0
                void** eax_11
                eax_11.b = *(ecx_10 + var_3058)
                void** ebx_6
                void* edi_3
                
                if (eax_11.b == 0x66)
                    ebx_6 = var_3058
                    char var_3064
                    var_3064.d = &ecx_10[1]
                    sub_4263a0(&var_3070, ecx_10 + ebx_6)
                    edi_3 = var_3064.d
                label_61fe48:
                    char var_305d = 0
                    sub_4263a0(&var_3070, &var_305d)
                    void var_3014
                    
                    if (sub_417e40(_memset(&var_3014, 0, 0x3000), 0x3000, &var_3014, arg1, var_3070)
                            == 0xffffffff)
                        char* edx_3 = var_3070
                        char* ecx_23 = edx_3
                        void* eax_21
                        
                        do
                            eax_21.b = *ecx_23
                            ecx_23 = &ecx_23[1]
                        while (eax_21.b != 0)
                        int32_t var_24_21 = 0
                        sub_620a00(&var_3054, esi, edx_3, edx_3 + ecx_23 - &ecx_23[1])
                    else if (var_3045 == 0)
                        sub_620800(&var_3054, &var_3014)
                    else
                        void var_3044
                        sub_403360(&var_3044, &var_3014)
                        var_8_1.b = 2
                        char* var_302c
                        sub_620500(&var_302c, &var_3044)
                        var_8_1.b = 4
                        sub_403320(&var_3044)
                        char* edx_5 = &var_302c
                        int32_t var_3018
                        
                        if (var_3018 u>= 0x10)
                            edx_5 = var_302c
                        
                        sub_620800(&var_3054, edx_5)
                        var_8_1.b = 1
                        sub_403320(&var_302c)
                    
                    int32_t var_24_23 = 0
                    sub_620a00(&var_3054, var_3050, edi_3 + ebx_6, var_3078 + ebx_6)
                    var_8_1.b = 0
                    sub_4059a0(&var_3070)
                    esi = var_3050
                    break
                
                char* var_24_12 = &var_3045
                
                if (eax_11.b == 0x46)
                    var_3045 = 0x66
                    sub_4263a0(&var_3070, var_24_12)
                    ebx_6 = var_3058
                    edi_3 = var_3074 + 1
                    var_3045 = 1
                    goto label_61fe48
                
                var_3045 = 0x25
                eax_4, edx = sub_4263a0(&var_3054, var_24_12)
                var_8_1.b = 0
                
                if (ebx_5 != 0)
                    eax_4, edx = sub_403160(ebx_5, var_3068_1 - ebx_5, 1)
                    var_3070 = nullptr
                    int32_t var_306c_2 = 0
                    int32_t var_3068_2 = 0
            else
                var_3045 = 0x25
                eax_4, edx = sub_4263a0(&var_3054, &var_3045)
                edi += 2
            
            esi = var_3050
        else
            if (ebx u< esi)
                eax_4 = var_3054
            
            if (ebx u>= esi || eax_4 u> ebx)
                if (esi == var_304c)
                    eax_4, edx = sub_405a20(&var_3054, 1)
                    esi = var_3050
                    ecx = var_3058
                
                if (esi != 0)
                    eax_4.b = *ebx
                    *esi = eax_4.b
            else
                int32_t ebx_1 = ebx - eax_4
                
                if (esi == var_304c)
                    eax_4, edx = sub_405a20(&var_3054, 1)
                    esi = var_3050
                    ecx = var_3058
                
                if (esi != 0)
                    eax_4.b = var_3054[ebx_1]
                    *esi = eax_4.b
            
            char* esi_1 = &esi[1]
            char* ebx_2 = edi + 1 + ecx
            edi += 2
            
            if (ebx_2 u< esi_1)
                eax_4 = var_3054
            
            if (ebx_2 u>= esi_1 || eax_4 u> ebx_2)
                if (esi_1 == var_304c)
                    eax_4, edx = sub_405a20(&var_3054, 1)
                
                if (esi_1 != 0)
                    eax_4.b = *ebx_2
                    *esi_1 = eax_4.b
                
                esi = &esi_1[1]
                var_3050 = esi
            else
                int32_t ebx_3 = ebx_2 - eax_4
                
                if (esi_1 == var_304c)
                    eax_4, edx = sub_405a20(&var_3054, 1)
                
                if (esi_1 != 0)
                    eax_4.b = var_3054[ebx_3]
                    *esi_1 = eax_4.b
                
                esi = &esi_1[1]
                var_3050 = esi
        
        if (edi s>= var_3078)
            break
        
        ecx = var_3058

var_3045 = 0
char* edi_4

if (&var_3045 u< esi)
    edi_4 = var_3054

if (&var_3045 u>= esi || edi_4 u> &var_3045)
    if (esi == var_304c)
        sub_405a20(&var_3054, 1)
        esi = var_3050
    
    if (esi != 0)
        *esi = 0
else
    if (esi == var_304c)
        sub_405a20(&var_3054, 1)
        esi = var_3050
    
    if (esi != 0)
        char* eax_25
        eax_25.b = var_3054[&var_3045 - edi_4]
        *esi = eax_25.b

void* var_3050_2 = &esi[1]
void* ecx_37

if (*var_3054 != 0)
    char* ecx_38 = var_3054
    char* eax_26
    
    do
        eax_26.b = *ecx_38
        ecx_38 = &ecx_38[1]
    while (eax_26.b != 0)
    ecx_37 = ecx_38 - &ecx_38[1]
else
    ecx_37 = nullptr

char* edi_5 = var_3054
sub_403490(var_307c, edi_5, ecx_37)
int32_t result = sub_403160(edi_5, var_304c - edi_5, 1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t entry_ebx
@__security_check_cookie@4(entry_ebx ^ &__saved_ebp)
return result
