// 函数: sub_61f360
// 地址: 0x61f360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_74464c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** ecx
int32_t edx
ecx, edx = __alloca_probe(0x3070)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = ecx
void** var_305c = ecx
void* esi = nullptr
uint32_t (* var_3058)[0x4] = nullptr
void* var_3054 = nullptr
int32_t var_3050 = 0
int32_t var_8_1 = 0
int32_t eax_4 = ebx[4]

if (eax_4 != 0)
    sub_405a80(&var_3058, eax_4)
    esi = var_3054

char* eax_5 = ebx[4]

if (ebx[5] u>= 0x10)
    ebx = *ebx
    var_305c = ebx

char var_3018
_memset(&var_3018, 0, 0x3000)
void* edi = nullptr
char var_3049

if (eax_5 s> 0)
    do
        char* ecx_2
        ecx_2.b = *(ebx + edi)
        void* ebx_1 = ebx + edi
        uint32_t (* eax_6)[0x4]
        
        if (ecx_2.b u< 0x81 || ecx_2.b u> 0x9f)
            eax_6.b = ecx_2.b
            eax_6.b += 0x20
        
        if ((ecx_2.b u< 0x81 || ecx_2.b u> 0x9f) && eax_6.b u> 0xf)
            if (ecx_2.b != 0x25)
                edi += 1
                eax_6, ecx_2 = sub_4263a0(&var_3058, ebx_1)
                ebx = var_305c
            else if (*(edi + var_305c + 1) != 0x25)
                void* var_24_9 = ebx_1
                edi += 1
                char* var_3074 = nullptr
                void* var_3078 = edi
                char* var_3070_1 = nullptr
                int32_t var_306c_1 = 0
                var_8_1.b = 1
                ebx = var_305c
                sub_61f1a0(sub_620840(&var_3074, ecx_2), &var_3078, ebx, eax_5)
                void* ecx_11 = var_3078
                char var_3060
                
                if (ecx_11 s> edi)
                    var_3060 = 0
                    int32_t var_24_11 = var_3060.d
                    sub_620a00(&var_3074, var_3070_1, edi + ebx, ecx_11 + ebx)
                    void* eax_11 = var_3078
                    
                    if (sub_61f240(eax_11, &var_3074, &var_3058, edx, ebx, eax_11, eax_5) != 0)
                        var_8_1.b = 0
                        char* ecx_15 = var_3074
                        
                        if (ecx_15 != 0)
                            sub_403160(ecx_15, var_306c_1 - ecx_15, 1)
                        
                        esi = var_3054
                        break
                        break
                    
                    esi = var_3054
                    ecx_11 = var_3078
                
                char i = *(ecx_11 + ebx)
                var_3049 = 0
                void* edi_3
                
                if (i == 0x64)
                label_61f836:
                    sub_4263a0(&var_3074, ecx_11 + ebx)
                    edi_3 = ecx_11 + 1
                label_61f847:
                    char var_3065 = 0
                    sub_4263a0(&var_3074, &var_3065)
                    int32_t var_24_22 = edx
                    
                    if (sub_406aa0(&var_3018, 0x3000, var_3074) == 0xffffffff)
                        char* edx_4 = var_3074
                        char* ecx_32 = edx_4
                        var_3060.d = &ecx_32[1]
                        void* eax_24
                        
                        do
                            eax_24.b = *ecx_32
                            ecx_32 = &ecx_32[1]
                        while (eax_24.b != 0)
                        sub_620890(&var_3058, &var_3060, esi, edx_4, &edx_4[ecx_32 - var_3060.d])
                    else if (var_3049 == 0)
                        sub_620800(&var_3058, &var_3018)
                    else
                        void var_3048
                        sub_403360(&var_3048, &var_3018)
                        var_8_1.b = 2
                        char* var_3030
                        sub_620500(&var_3030, &var_3048)
                        var_8_1.b = 4
                        sub_403320(&var_3048)
                        char* edx_6 = &var_3030
                        int32_t var_301c
                        
                        if (var_301c u>= 0x10)
                            edx_6 = var_3030
                        
                        sub_620800(&var_3058, edx_6)
                        var_8_1.b = 1
                        sub_403320(&var_3030)
                    
                    sub_620890(&var_3058, &var_3060, var_3054, edi_3 + ebx, eax_5 + ebx)
                    goto label_61f965
                
                if (i == 0x44)
                    var_3049 = 0x64
                    sub_4263a0(&var_3074, &var_3049)
                    edi_3 = var_3078 + 1
                    var_3049 = 1
                    goto label_61f847
                
                void* var_305c_1
                
                if (i == 0x63)
                    var_305c_1 = ecx_11 + 1
                    char var_3017
                    
                    if (edx s> 0xff)
                        var_3017 = edx.b
                        var_3018 = (edx s>> 8).b
                        char var_3016_1 = 0
                    else
                        var_3018 = edx.b
                        var_3017 = 0
                    
                    void* esi_2 = esi - var_3058
                    char* ecx_23 = &var_3018
                    
                    do
                        i = *ecx_23
                        ecx_23 = &ecx_23[1]
                    while (i != 0)
                    
                    sub_405950(&var_3058, ecx_23 - &var_3017 + esi_2)
                    char* ecx_26 = &var_3018
                    char i_1
                    
                    do
                        i_1 = *ecx_26
                        ecx_26 = &ecx_26[1]
                    while (i_1 != 0)
                    sub_700660(var_3058 + esi_2, &var_3018, ecx_26 - &var_3017)
                label_61f742:
                    var_3060 = 0
                    int32_t var_24_16 = var_3060.d
                    sub_620a00(&var_3058, var_3054, var_305c_1 + ebx, eax_5 + ebx)
                label_61f965:
                    var_8_1.b = 0
                    sub_4059a0(&var_3074)
                    esi = var_3054
                    break
                
                if (i == 0x62)
                    char* edx_3 = "false"
                    var_305c_1 = ecx_11 + 1
                    
                    if (edx != 0)
                        edx_3 = "true"
                    
                    sub_620800(&var_3058, edx_3)
                    goto label_61f742
                
                if (i == 0x78 || i == 0x58)
                    goto label_61f836
                
                var_3049 = 0x25
                sub_4263a0(&var_3058, &var_3049)
                var_8_1.b = 0
                ecx_2 = var_3074
                
                if (ecx_2 != 0)
                    eax_6, ecx_2 = sub_403160(ecx_2, var_306c_1 - ecx_2, 1)
                    var_3074 = nullptr
                    int32_t var_3070_2 = 0
                    int32_t var_306c_2 = 0
            else
                var_3049 = 0x25
                eax_6, ecx_2 = sub_4263a0(&var_3058, &var_3049)
                ebx = var_305c
                edi += 2
            
            esi = var_3054
        else
            if (ebx_1 u< esi)
                eax_6 = var_3058
            
            if (ebx_1 u>= esi || eax_6 u> ebx_1)
                if (esi == var_3050)
                    eax_6, ecx_2 = sub_405a20(&var_3058, 1)
                    esi = var_3054
                
                if (esi != 0)
                    eax_6.b = *ebx_1
                    *esi = eax_6.b
            else
                char* ebx_2 = ebx_1 - eax_6
                
                if (esi == var_3050)
                    eax_6, ecx_2 = sub_405a20(&var_3058, 1)
                    esi = var_3054
                
                if (esi != 0)
                    eax_6.b = *(ebx_2 + var_3058)
                    *esi = eax_6.b
            
            char* esi_1 = esi + 1
            void* ebx_4 = var_305c + edi + 1
            edi += 2
            
            if (ebx_4 u< esi_1)
                eax_6 = var_3058
            
            if (ebx_4 u>= esi_1 || eax_6 u> ebx_4)
                if (esi_1 == var_3050)
                    eax_6, ecx_2 = sub_405a20(&var_3058, 1)
                
                if (esi_1 != 0)
                    eax_6.b = *ebx_4
                    *esi_1 = eax_6.b
                
                ebx = var_305c
                esi = &esi_1[1]
                var_3054 = esi
            else
                char* ebx_5 = ebx_4 - eax_6
                
                if (esi_1 == var_3050)
                    eax_6, ecx_2 = sub_405a20(&var_3058, 1)
                
                if (esi_1 != 0)
                    eax_6.b = *(ebx_5 + var_3058)
                    *esi_1 = eax_6.b
                
                ebx = var_305c
                esi = &esi_1[1]
                var_3054 = esi
    while (edi s< eax_5)

var_3049 = 0
uint32_t (* edi_4)[0x4]

if (&var_3049 u< esi)
    edi_4 = var_3058

if (&var_3049 u>= esi || edi_4 u> &var_3049)
    if (esi == var_3050)
        sub_405a20(&var_3058, 1)
        esi = var_3054
    
    if (esi != 0)
        *esi = 0
else
    if (esi == var_3050)
        sub_405a20(&var_3058, 1)
        esi = var_3054
    
    if (esi != 0)
        uint32_t (* eax_29)[0x4]
        eax_29.b = *(&var_3049 - edi_4 + var_3058)
        *esi = eax_29.b

void* var_3054_2 = esi + 1
void* ecx_45

if (*var_3058 != 0)
    char* ecx_46 = var_3058
    uint32_t (* eax_30)[0x4]
    
    do
        eax_30.b = *ecx_46
        ecx_46 = &ecx_46[1]
    while (eax_30.b != 0)
    ecx_45 = ecx_46 - &ecx_46[1]
else
    ecx_45 = nullptr

uint32_t (* edi_5)[0x4] = var_3058
sub_403490(arg2, edi_5, ecx_45)
int32_t result = sub_403160(edi_5, var_3050 - edi_5, 1)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(arg1 ^ &__saved_ebp)
return result
