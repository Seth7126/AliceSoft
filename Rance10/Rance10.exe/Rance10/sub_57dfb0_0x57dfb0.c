// 函数: sub_57dfb0
// 地址: 0x57dfb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73cf66
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = arg1
void** esi = arg3
int32_t edx = eax_3[1]
void** ebx = arg2
void** var_4c = arg4
void** var_84 = var_4c
int32_t* var_58 = esi
void** var_88 = arg1
Concurrency::details::Etw::Etw(*eax_3, edx)
eax_3[1] = *eax_3
char* result

if (ebx[4] == 0)
    result.b = 1
else
    int32_t* var_84_1 = eax_3
    var_88 = esi
    int32_t var_60
    sub_57ea50(arg4, &var_60, ebx, var_88)
    int32_t var_8_1 = 0
    int32_t* var_5c
    void* var_48
    char var_30
    
    if (var_60 != 0)
        std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
            &var_88, &var_60)
        std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::_Move_assign(
            var_88)
        int32_t var_8_3 = 6
        
        if (var_5c != 0)
            bool cond:0_1 = var_5c[1] != 1
            var_5c[1]
            var_5c[1] -= 1
            
            if (not(cond:0_1))
                (**var_5c)(eax_2)
                bool cond:1_1 = var_5c[2] != 1
                var_5c[2]
                var_5c[2] -= 1
                
                if (not(cond:1_1))
                    (*(*var_5c + 4))()
        
        int32_t var_84_6 = 1
        int32_t var_8_4 = 0xffffffff
        int32_t var_54_1 = 1
        sub_57e430(&var_48, ebx)
        int32_t var_84_7 = 1
        int32_t var_8_5 = 7
        sub_57e430(&var_30, var_58)
        var_8_5.b = 8
        void** esi_3 = var_4c
        char eax_14
        int32_t ecx_19
        eax_14, ecx_19 = sub_5d0440(esi_3[5], &var_48)
        char* var_34
        void* const var_1c
        
        if (eax_14 != 0)
            char i
            
            do
                int32_t var_20
                
                if (var_20 != 0)
                    char eax_15
                    eax_15, ecx_19 = sub_5d0440(esi_3[5], &var_30)
                    
                    if (eax_15 == 0)
                        break
                
                int32_t var_84_10 = ecx_19
                var_88 = &var_30
                int32_t var_68
                sub_57ea50(esi_3, &var_68, &var_48, var_88)
                int32_t* var_64
                
                if (var_68 == 0)
                    var_8_5.b = 0xa
                    
                    if (var_64 != 0)
                        bool cond:3_1 = var_64[1] != 1
                        var_64[1]
                        var_64[1] -= 1
                        
                        if (not(cond:3_1))
                            (**var_64)(eax_2)
                            int32_t edi_3 = var_64[2]
                            var_64[2] -= 1
                            
                            if (edi_3 == 1)
                                (*(*var_64 + 4))()
                    
                    break
                
                void var_70
                std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
                    &var_70, &var_68)
                var_8_5.b = 0xb
                sub_56a250(eax_3, &var_70)
                var_8_5.b = 0xc
                int32_t* var_6c
                
                if (var_6c != 0)
                    bool cond:4_1 = var_6c[1] != 1
                    var_6c[1]
                    var_6c[1] -= 1
                    
                    if (not(cond:4_1))
                        (**var_6c)(eax_2)
                        bool cond:6_1 = var_6c[2] != 1
                        var_6c[2]
                        var_6c[2] -= 1
                        
                        if (not(cond:6_1))
                            (*(*var_6c + 4))()
                
                var_8_5.b = 0xd
                
                if (var_64 != 0)
                    bool cond:5_1 = var_64[1] != 1
                    var_64[1]
                    var_64[1] -= 1
                    
                    if (not(cond:5_1))
                        (**var_64)(eax_2)
                        bool cond:7_1 = var_64[2] != 1
                        var_64[2]
                        var_64[2] -= 1
                        
                        if (not(cond:7_1))
                            (*(*var_64 + 4))()
                
                if (var_1c u>= 0x10)
                    int32_t var_84_13 = 1
                    var_88 = var_1c + 1
                    sub_403160(var_30.d, var_88, var_84_13)
                
                int32_t var_8_6 = 0xffffffff
                var_1c = 0xf
                var_20 = 0
                var_30 = 0
                
                if (var_34 u>= 0x10)
                    int32_t var_84_14 = 1
                    var_88 = &var_34[1]
                    sub_403160(var_48, var_88, var_84_14)
                
                int32_t esi_7 = var_54_1 + 1
                int32_t var_84_15 = esi_7
                var_54_1 = esi_7
                sub_57e430(&var_48, ebx)
                int32_t var_84_16 = esi_7
                var_8_5 = 7
                sub_57e430(&var_30, var_58)
                var_8_5.b = 8
                esi_3 = var_4c
                i, ecx_19 = sub_5d0440(esi_3[5], &var_48)
            while (i != 0)
        
        if (var_1c u>= 0x10)
            int32_t var_84_18 = 1
            var_88 = var_1c + 1
            sub_403160(var_30.d, var_88, var_84_18)
        
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        var_30 = 0
        
        if (var_34 u>= 0x10)
            int32_t var_84_19 = 1
            var_88 = &var_34[1]
            sub_403160(var_48, var_88, var_84_19)
        
        result.b = 1
    else
        char* eax_6
        
        if (esi[4] == 0)
            if (ebx[5] u>= 0x10)
                ebx = *ebx
            
            char* var_84_4 = &data_767fe4
            var_4c = ebx
            sub_403360(&var_48, var_84_4)
            var_8_1.b = 3
            eax_6 = sub_409240(&var_4c, &var_48, &var_30, &var_4c)
            var_8_1.b = 4
        else
            if (ebx[5] u>= 0x10)
                ebx = *ebx
            
            void* const var_84_2 = &data_767fa4
            var_4c = ebx
            sub_403360(&var_48, var_84_2)
            var_8_1.b = 1
            
            if (esi[5] u>= 0x10)
                esi = *esi
            
            var_88 = &var_4c
            eax_6 = sub_461a30(&var_4c, &var_48, &var_30, var_88, esi)
            var_8_1.b = 2
        
        sub_5e01e0(eax_6)
        sub_403320(&var_30)
        sub_403320(&var_48)
        int32_t var_8_2 = 5
        
        if (var_5c != 0)
            bool cond:2_1 = var_5c[1] != 1
            var_5c[1]
            var_5c[1] -= 1
            
            if (not(cond:2_1))
                (**var_5c)(eax_2)
                int32_t edi_1 = var_5c[2]
                var_5c[2] -= 1
                
                if (edi_1 == 1)
                    (*(*var_5c + 4))()
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
