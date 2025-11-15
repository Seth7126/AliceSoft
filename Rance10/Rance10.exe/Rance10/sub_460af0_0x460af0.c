// 函数: sub_460af0
// 地址: 0x460af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@G@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_84 = edi
int32_t* var_9c = arg3
int32_t* var_8c = nullptr
int32_t var_88 = 0
int32_t* eax_5 = sub_461920()
int32_t* ebx = eax_5
int32_t* var_94 = eax_5
var_8c = ebx
int32_t var_8_1 = 0
int32_t* i = *(edi + 0x14)
void* var_98
int32_t var_68
int32_t var_64
void* var_60
int32_t var_4c
char var_48
int32_t var_34
char var_30

if (i != *(edi + 0x18))
    int32_t ecx = arg2
    
    do
        int32_t* edi_1 = *i
        
        if (ecx s>= 0)
            ecx = arg2
            
            if ((*(*edi_1 + 8))(eax_2) s> ecx)
                void* ecx_2 = *(edi_1[1] + (ecx << 2))
                var_98 = ecx_2
                
                if (ecx_2 != 0)
                    void* eax_9 = var_84
                    int32_t var_34_1 = 0xf
                    int32_t var_38_1 = 0
                    var_48 = 0
                    int32_t ebx_3 = (i - *(eax_9 + 0x14)) s>> 2
                    var_8_1.b = 1
                    sub_46dfd0(ecx_2, &var_30, &var_48)
                    var_8_1.b = 3
                    
                    if (var_34_1 u>= 0x10)
                        sub_403160(var_48.d, var_34_1 + 1, 1)
                    
                    var_34 = 0xf
                    int32_t var_38_2 = 0
                    var_48 = 0
                    void** eax_12
                    int32_t* ecx_4
                    eax_12, ecx_4 = sub_432330(&var_8c, &var_30)
                    void** edi_2 = eax_12
                    
                    if (edi_2 == var_8c)
                    label_460c30:
                        int32_t* var_bc_4 = ecx_4
                        var_94 = &var_30
                        int32_t** var_c0_4 = &var_94
                        int32_t* eax_15 = sub_462090(ecx_4)
                        void** var_a0
                        sub_462160(&var_8c, &var_a0, edi_2, &eax_15[4], eax_15)
                        edi_2 = var_a0
                    else
                        char eax_14
                        eax_14, ecx_4 = sub_412ca0(&var_30, &edi_2[4])
                        
                        if (eax_14 != 0)
                            goto label_460c30
                    
                    sub_428f00(&edi_2[0xa], &var_98)
                    char* eax_17 = sub_462db0(&var_60, &var_30)
                    var_8_1.b = 4
                    var_68 = 0xf
                    int32_t var_6c_1 = 0
                    char var_7c = 0
                    int32_t ecx_9 = sub_403590(&var_7c, eax_17, 0, 0xffffffff)
                    var_64 = ebx_3
                    var_8_1.b = 5
                    int32_t* var_bc_7 = var_9c
                    char* var_c0_6 = &var_7c
                    void* var_a8
                    sub_461c40(var_84 + 0x28, &var_a8, ecx_9)
                    
                    if (var_68 u>= 0x10)
                        sub_403160(var_7c.d, var_68 + 1, 1)
                    
                    if (var_4c u>= 0x10)
                        sub_403160(var_60, var_4c + 1, 1)
                    
                    var_8_1.b = 0
                    int32_t var_1c
                    
                    if (var_1c u>= 0x10)
                        sub_403160(var_30.d, var_1c + 1, 1)
                
                ecx = arg2
            
            ebx = var_8c
        
        edi = var_84
        i = &i[1]
    while (i != *(edi + 0x18))
    
    var_94 = ebx

char var_7d

if (var_88 != (*(edi + 0x18) - *(edi + 0x14)) s>> 2)
    void* eax_27 = *ebx
    var_84 = eax_27
    
    if (eax_27 != ebx)
        do
            if ((*(eax_27 + 0x2c) - *(eax_27 + 0x28)) s>> 2 s> 1)
                sub_6ca360(&var_48, eax_27 + 0x10)
                var_8_1.b = 6
                int32_t* esi = *(eax_27 + 0x28)
                int32_t edi_4 = *(eax_27 + 0x2c)
                
                if (esi != edi_4)
                    int32_t* ebx_4 = var_9c
                    
                    do
                        void** var_78
                        sub_46df00(*esi, &var_78)
                        var_8_1.b = 7
                        void* eax_31 = &var_48
                        char* ecx_14 = &var_30
                        int32_t var_1c_1 = 0xf
                        int32_t var_20_1 = 0
                        var_30 = 0
                        char* eax_33
                        
                        if (var_68 != 0)
                            if (var_34 u>= 0x10)
                                eax_31 = var_48.d
                            
                            var_98 = eax_31
                            sub_403490(ecx_14, 0x75e200, 0x3c)
                            var_8_1.b = 0xa
                            void** eax_34 = &var_78
                            
                            if (var_64 u>= 0x10)
                                eax_34 = var_78
                            
                            eax_33 = sub_461a30(&var_98, &var_30, &var_60, &var_98, eax_34)
                            var_8_1.b = 0xb
                        else
                            if (var_34 u>= 0x10)
                                eax_31 = var_48.d
                            
                            var_98 = eax_31
                            sub_403490(ecx_14, 0x75e1d4, 0x2a)
                            var_8_1.b = 8
                            eax_33 = sub_409240(&var_98, &var_30, &var_60, &var_98)
                            var_8_1.b = 9
                        
                        int32_t var_bc_11 = *(*esi + 0xa0)
                        sub_45ed40(ebx_4, eax_33)
                        
                        if (var_4c u>= 0x10)
                            sub_403160(var_60, var_4c + 1, 1)
                        
                        var_60.b = 0
                        int32_t var_50_1 = 0
                        var_4c = 0xf
                        
                        if (var_1c_1 u>= 0x10)
                            sub_403160(var_30.d, var_1c_1 + 1, 1)
                        
                        var_8_1.b = 6
                        
                        if (var_64 u>= 0x10)
                            sub_403160(var_78, var_64 + 1, 1)
                        
                        esi = &esi[1]
                    while (esi != edi_4)
                    
                    ebx = var_94
                
                var_8_1.b = 0
                
                if (var_34 u>= 0x10)
                    sub_403160(var_48.d, var_34 + 1, 1)
            
            sub_429080(&var_84)
            eax_27 = var_84
        while (eax_27 != ebx)
        
        ebx = var_8c
    
    var_7d = 0
else
    var_7d = 1

int32_t* var_bc_12 = ebx
sub_460fa0(&var_8c, &var_9c, *ebx)
sub_403160(var_8c, 1, 0x34)
int32_t result
result.b = var_7d
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
