// 函数: sub_460770
// 地址: 0x460770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bfeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_84 = arg2
int32_t* var_98 = arg3
int32_t* var_94 = nullptr
int32_t var_90 = 0
int32_t* eax_5 = sub_461990()
int32_t* ebx = eax_5
int32_t* var_88 = eax_5
var_94 = ebx
int32_t var_8_1 = 0
int32_t* i = *(arg1 + 0x14)
void* var_8c

if (i != *(arg1 + 0x18))
    void* ecx = var_84
    void* ebx_1 = arg1
    
    do
        int32_t* edi_1 = *i
        
        if (ecx s>= 0)
            int32_t eax_8 = (*(*edi_1 + 8))(eax_2)
            ecx = var_84
            
            if (eax_8 s> ecx)
                void* eax_10 = *(edi_1[1] + (ecx << 2))
                var_8c = eax_10
                
                if (eax_10 != 0)
                    int32_t ecx_3 = *(eax_10 + 0x34)
                    int32_t edi_4 = (i - *(arg1 + 0x14)) s>> 2
                    int32_t eax_11
                    
                    if (ecx_3 == 2)
                        eax_11 = int.d(sub_462f40(*(eax_10 + 0x40)))
                    else if (ecx_3 == 1)
                        eax_11 = *(eax_10 + 0x3c) ^ 0x65656565
                    else
                        eax_11 = 0
                    
                    var_88 = eax_11
                    void* var_a8
                    sub_461ee0(&var_94, &var_a8, &var_88)
                    int32_t ecx_7 = sub_428f00(var_a8 + 0x14, &var_8c)
                    int32_t* var_c4_3 = var_98
                    int32_t var_9c_1 = edi_4
                    int32_t var_a0 = var_88 ^ 0x65656565
                    int32_t* var_c8_2 = &var_a0
                    int32_t* var_b0
                    sub_461b40(arg1 + 0x20, &var_b0, ecx_7)
                    ebx_1 = arg1
                    ecx = var_84
        
        i = &i[1]
    while (i != *(ebx_1 + 0x18))
    
    ebx = var_94
    var_88 = ebx

char var_79

if (var_90 != (*(arg1 + 0x18) - *(arg1 + 0x14)) s>> 2)
    void* edi_5 = *ebx
    var_84 = edi_5
    
    if (edi_5 != ebx)
        do
            if ((*(edi_5 + 0x18) - *(edi_5 + 0x14)) s>> 2 s> 1)
                void* var_60
                sub_6ca3a0(&var_60, *(edi_5 + 0x10))
                var_8_1.b = 1
                int32_t* esi_2 = *(edi_5 + 0x14)
                int32_t edi_6 = *(edi_5 + 0x18)
                int32_t var_4c
                
                if (esi_2 != edi_6)
                    int32_t* ebx_2 = var_98
                    
                    do
                        void** var_78
                        sub_46df00(*esi_2, &var_78)
                        var_8_1.b = 2
                        void* eax_21 = &var_60
                        char var_30
                        char* ecx_12 = &var_30
                        int32_t var_1c_1 = 0xf
                        int32_t var_20_1 = 0
                        var_30 = 0
                        int32_t var_68
                        int32_t var_64
                        char var_48
                        char* eax_23
                        
                        if (var_68 != 0)
                            if (var_4c u>= 0x10)
                                eax_21 = var_60
                            
                            var_8c = eax_21
                            sub_403490(ecx_12, 0x75e194, 0x3c)
                            var_8_1.b = 5
                            void** eax_24 = &var_78
                            
                            if (var_64 u>= 0x10)
                                eax_24 = var_78
                            
                            eax_23 = sub_461a30(&var_8c, &var_30, &var_48, &var_8c, eax_24)
                            var_8_1.b = 6
                        else
                            if (var_4c u>= 0x10)
                                eax_21 = var_60
                            
                            var_8c = eax_21
                            sub_403490(ecx_12, 0x75e168, 0x2a)
                            var_8_1.b = 3
                            eax_23 = sub_409240(&var_8c, &var_30, &var_48, &var_8c)
                            var_8_1.b = 4
                        
                        int32_t var_c4_7 = *(*esi_2 + 0xa0)
                        sub_45ed40(ebx_2, eax_23)
                        int32_t var_34
                        
                        if (var_34 u>= 0x10)
                            sub_403160(var_48.d, var_34 + 1, 1)
                        
                        var_48 = 0
                        int32_t var_38_1 = 0
                        var_34 = 0xf
                        
                        if (var_1c_1 u>= 0x10)
                            sub_403160(var_30.d, var_1c_1 + 1, 1)
                        
                        var_8_1.b = 1
                        
                        if (var_64 u>= 0x10)
                            sub_403160(var_78, var_64 + 1, 1)
                        
                        esi_2 = &esi_2[1]
                    while (esi_2 != edi_6)
                    
                    ebx = var_88
                
                var_8_1.b = 0
                
                if (var_4c u>= 0x10)
                    sub_403160(var_60, var_4c + 1, 1)
            
            sub_429080(&var_84)
            edi_5 = var_84
        while (edi_5 != ebx)
        
        ebx = var_94
    
    var_79 = 0
else
    var_79 = 1

int32_t* var_c4_8 = ebx
sub_461060(&var_94, &var_98, *ebx)
sub_403160(var_94, 1, 0x20)
int32_t result
result.b = var_79
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
