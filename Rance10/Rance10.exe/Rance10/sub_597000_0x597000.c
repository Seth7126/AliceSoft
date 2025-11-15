// 函数: sub_597000
// 地址: 0x597000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e142
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50
int32_t var_80 = var_50
int32_t edx = *(arg1 + 0x74)
int32_t* var_48 = arg3
void* var_84 = arg1
int32_t ecx_1 = sub_568960(*(arg1 + 0x70), edx)
*(arg1 + 0x74) = *(arg1 + 0x70)
int32_t var_80_1 = var_50
int32_t var_84_1 = ecx_1
Concurrency::details::Etw::Etw(*(arg1 + 0x64), *(arg1 + 0x68))
*(arg1 + 0x68) = *(arg1 + 0x64)
*(arg1 + 0x7c) = 0xffffffff
int32_t* esi_1 = var_48
int32_t result

if (esi_1 s< 0)
    result.b = 0
else
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = muls.dp.d(0x4da637d, *(arg2 + 8) - *(arg2 + 4))
    int32_t edx_3 = edx_2 s>> 4
    
    if (esi_1 s>= (edx_3 u>> 0x1f) + edx_3)
        result.b = 0
    else
        int32_t esi_2 = esi_1 * 0x34c
        void* esi_3 = esi_2 + *(arg2 + 4)
        
        if (esi_2 == neg.d(*(arg2 + 4)))
            result.b = 0
        else
            *(arg1 + 4) = *(esi_3 + 0x228)
            result = *(esi_3 + 0x208)
            void* esi_4 = esi_3 + 0x210
            *(arg1 + 8) = result
            void* var_50_1 = esi_4
            
            if (*(esi_4 + 0x10) != 0)
                void* ebx_1 = arg2 + 0x20
                int32_t var_6c
                sub_597300(result, ebx_1, &var_6c, esi_4, arg4)
                int32_t var_8_1 = 0
                void* var_44
                char var_2c
                
                if (var_6c == 0)
                    if (*(ebx_1 + 0x14) u>= 0x10)
                        ebx_1 = *ebx_1
                    
                    var_48 = ebx_1
                    sub_403360(&var_44, 0x768648)
                    var_8_1.b = 1
                    void* eax_10
                    
                    if (*(esi_4 + 0x14) u< 0x10)
                        eax_10 = esi_4
                    else
                        eax_10 = *esi_4
                    
                    var_8_1.b = 2
                    sub_5e01e0(sub_461a30(&var_48, &var_44, &var_2c, &var_48, eax_10))
                    sub_403320(&var_2c)
                    var_8_1.b = 0
                    sub_403320(&var_44)
                else
                    sub_56a250(arg1 + 0x64, &var_6c)
                
                int32_t ebx_2 = 1
                int32_t* var_5c
                int32_t var_30
                
                while (true)
                    var_48 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::c_str(
                        esi_4)
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    sub_403490(&var_2c, "%s_%02d", 7)
                    var_8_1.b = 3
                    sub_4075c0(&var_48, &var_2c, &var_44, &var_48, ebx_2)
                    var_8_1.b = 5
                    
                    if (var_18_1 u>= 0x10)
                        sub_403160(var_2c.d, var_18_1 + 1, 1)
                    
                    int32_t var_18_2 = 0xf
                    int32_t var_1c_2 = 0
                    var_2c = 0
                    int32_t var_60
                    sub_597300(&var_44, arg2 + 0x20, &var_60, &var_44, arg4)
                    var_8_1.b = 6
                    
                    if (var_60 == 0)
                        break
                    
                    sub_56a250(arg1 + 0x64, &var_60)
                    var_8_1.b = 8
                    
                    if (var_5c != 0)
                        bool cond:1_1 = var_5c[1] != 1
                        var_5c[1]
                        var_5c[1] -= 1
                        
                        if (not(cond:1_1))
                            (**var_5c)(eax_2)
                            bool cond:3_1 = var_5c[2] != 1
                            var_5c[2]
                            var_5c[2] -= 1
                            
                            if (not(cond:3_1))
                                (*(*var_5c + 4))()
                    
                    var_8_1.b = 0
                    
                    if (var_30 u>= 0x10)
                        sub_403160(var_44, var_30 + 1, 1)
                    
                    esi_4 = var_50_1
                    ebx_2 += 1
                
                var_8_1.b = 7
                
                if (var_5c != 0)
                    bool cond:0_1 = var_5c[1] != 1
                    var_5c[1]
                    var_5c[1] -= 1
                    
                    if (not(cond:0_1))
                        (**var_5c)(eax_2)
                        bool cond:2_1 = var_5c[2] != 1
                        var_5c[2]
                        var_5c[2] -= 1
                        
                        if (not(cond:2_1))
                            (*(*var_5c + 4))()
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44, var_30 + 1, 1)
                
                int32_t var_8_2 = 9
                int32_t* var_68
                
                if (var_68 != 0)
                    bool cond:4_1 = var_68[1] != 1
                    var_68[1]
                    var_68[1] -= 1
                    
                    if (not(cond:4_1))
                        (**var_68)(eax_2)
                        int32_t edi_1 = var_68[2]
                        var_68[2] -= 1
                        
                        if (edi_1 == 1)
                            (*(*var_68 + 4))()
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
