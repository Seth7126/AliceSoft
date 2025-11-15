// 函数: sub_56e7f0
// 地址: 0x56e7f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c651
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_98 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_7c = ebx
int32_t* edi = arg2
int32_t* var_60 = edi
sub_56eb60(arg1)
int32_t* eax_3 = ebx + 0x24
int32_t var_9c = arg3
void* result

if (sub_58c520(eax_3, edi).b == 0)
label_56eb4c:
    result.b = 0
else
    int32_t esi_3 = (edi[0x19] - edi[0x18]) s>> 2
    result = (*(ebx + 0x34) - *(ebx + 0x2c)) s>> 2
    int32_t var_6c = esi_3
    
    if (result u< esi_3)
        if (esi_3 u> 0x3fffffff)
        label_56e86d:
            sub_6d0927("vector<T> too long")
            noreturn
        
        sub_56f3f0(ebx + 0x2c, esi_3)
    
    int32_t ecx_2 = 0
    void* var_5c = nullptr
    int32_t var_70_1 = 0
    char arg_8
    
    if (esi_3 s> 0)
        do
            int32_t ecx_3
            
            if (ecx_2 s< 0 || ecx_2 s>= (edi[0x19] - edi[0x18]) s>> 2)
                ecx_3 = 0
            else
                ecx_3 = *(edi[0x18] + (ecx_2 << 2))
            
            int32_t var_4c = ecx_3
            int32_t var_80 = ecx_3
            
            if (ecx_3 == 0)
                goto label_56eb4c
            
            result = *(ecx_3 + 0x24)
            int32_t esi_4 = *(ecx_3 + 0x28)
            
            if (result != esi_4)
                void* ebx_1 = nullptr
                void* var_58 = nullptr
                void* var_54_1 = nullptr
                int32_t var_50_1 = 0
                void* esi_5 = esi_4 - result
                int32_t var_8_1 = 0
                int32_t eax_8
                void* edx_1
                edx_1:eax_8 = muls.dp.d(0x88888889, esi_5)
                int32_t edx_3 = (edx_1 + esi_5) s>> 6
                int32_t eax_11 = esi_5 s/ 0x78
                
                if (edx_3 u>> 0x1f != neg.d(edx_3))
                    if (eax_11 u> 0x4444444)
                        goto label_56e86d
                    
                    sub_56f290(&var_58, eax_11)
                    ebx_1 = var_54_1
                    ecx_3 = var_4c
                
                int32_t esi_6 = *(ecx_3 + 0x24)
                int32_t edi_1 = *(ecx_3 + 0x28)
                void* var_68
                void* var_64
                
                if (esi_6 != edi_1)
                    do
                        if (ebx_1 == var_50_1)
                            int32_t var_9c_3 = ecx_3
                            eax_11, ecx_3 = sub_570170(&var_58)
                            ebx_1 = var_54_1
                        
                        var_68 = ebx_1
                        var_64 = ebx_1
                        var_8_1.b = 1
                        
                        if (ebx_1 != 0)
                            eax_11, ecx_3 = sub_57c630(ebx_1, esi_6)
                        
                        ebx_1 += 0x3c
                        var_8_1.b = 0
                        esi_6 += 0x78
                        var_54_1 = ebx_1
                    while (esi_6 != edi_1)
                    
                    ecx_3 = var_4c
                
                eax_11.b = *(ecx_3 + 0x21)
                char var_74_1 = eax_11.b
                var_68 = nullptr
                int32_t var_a0_1 = *(ecx_3 + 0x1c)
                var_64 = nullptr
                
                if (sub_58c680(eax_3, &var_68, &var_64, *(ecx_3 + 0x18), var_a0_1, var_74_1) == 0)
                    int32_t eax_23 = var_4c
                    
                    if (*(eax_23 + 0x14) u>= 0x10)
                        eax_23 = *eax_23
                    
                    var_6c = eax_23
                    void* var_1c_1 = 0xf
                    int32_t var_20_1 = 0
                    char var_30 = 0
                    sub_403490(&var_30, 0x767e98, 0x2a)
                    var_8_1.b = 2
                    var_8_1.b = 3
                    char var_48
                    sub_5e01e0(sub_409240(&var_6c, &var_30, &var_48, &var_6c))
                    int32_t var_34
                    
                    if (var_34 u>= 0x10)
                        sub_403160(var_48.d, var_34 + 1, 1)
                    
                    int32_t var_34_1 = 0xf
                    int32_t var_38_1 = 0
                    var_48 = 0
                    
                    if (var_1c_1 u>= 0x10)
                        sub_403160(var_30.d, var_1c_1 + 1, 1)
                    
                    void* ecx_26 = var_58
                    
                    if (ecx_26 != 0)
                        Concurrency::propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<enum Concurrency::agent_status> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<enum Concurrency::agent_status> >::~propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<enum Concurrency::agent_status> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<enum Concurrency::agent_status> >(
                            ecx_26, ebx_1)
                        void* esi_9 = var_58
                        sub_403160(esi_9, (var_50_1 - esi_9) s/ 0x3c, 0x3c)
                    
                    goto label_56eb4c
                
                ebx = var_7c
                var_4c = ebx + 0x4c
                var_8_1.b = 4
                int32_t* var_84
                sub_5700f0(ebx + 0x2c, 
                    sub_56fff0(&var_68, &var_4c, &var_84, &var_68, &var_64, &var_58, &var_5c, 
                        &var_60, &arg_8, &var_80))
                int32_t* ecx_10 = var_84
                
                if (ecx_10 != 0)
                    int32_t* var_9c_8 = ecx_10
                    sub_56f510(ecx_10)
                
                void* esi_7 = var_58
                int32_t var_8_2 = 0xffffffff
                var_5c += (var_54_1 - esi_7) s/ 0x3c * 3
                
                if (esi_7 != 0)
                    Concurrency::propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<enum Concurrency::agent_status> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<enum Concurrency::agent_status> >::~propagator_block<class Concurrency::multi_link_registry<class Concurrency::ITarget<enum Concurrency::agent_status> >,class Concurrency::multi_link_registry<class Concurrency::ISource<enum Concurrency::agent_status> >,class Concurrency::ordered_message_processor<enum Concurrency::agent_status> >(
                        esi_7, var_54_1)
                    void* esi_8 = var_58
                    sub_403160(esi_8, (var_50_1 - esi_8) s/ 0x3c, 0x3c)
                    var_58 = nullptr
                    int32_t var_54_2 = 0
                    int32_t var_50_2 = 0
                
                edi = var_60
            
            ecx_2 = var_70_1 + 1
            var_70_1 = ecx_2
        while (ecx_2 s< var_6c)
    
    sub_56ec20(ebx)
    result.b = arg_8
    *(ebx + 0x5c) = result.b
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
