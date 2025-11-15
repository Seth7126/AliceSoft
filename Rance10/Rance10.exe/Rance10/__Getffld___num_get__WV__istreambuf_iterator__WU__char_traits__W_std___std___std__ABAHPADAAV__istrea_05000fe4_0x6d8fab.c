// 函数: ?_Getffld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AAVios_base@2@PAH@Z
// 地址: 0x6d8fab
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x94
int32_t (* var_c)(void* arg1) = sub_74980a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_53 = __security_cookie ^ &__saved_ebp
void* const var_b8_25 = &data_6d8fba
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_94 = arg2
int32_t result

if ((arg5[5] & 0x3000) != 0x3000)
    int32_t var_8 = 0
    void var_a4
    int32_t* eax_3 = sub_6d73dc(std::ios_base::getloc(arg5, &var_a4))
    int32_t var_8_1 = 0xffffffff
    std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
        &var_a4)
    int32_t var_8_2 = 1
    char var_67_1 = 0
    char var_66_1 = 0
    var_8_2.b = 2
    void var_9c
    int32_t* var_64
    int32_t* eax_5 =
        sub_6d6aa9(std::ios_base::getloc(std::_Mpunct<wchar_t>::grouping(eax_3, &var_64), &var_9c))
    var_8_2.b = 1
    std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
        &var_9c)
    int32_t esi_2 = *(*eax_5 + 0x2c)
    j_sub_4033e0()
    int16_t var_34
    esi_2("0123456789-+Ee", 0x75029b, &var_34)
    int32_t* esi_3 = arg4
    char eax_6 = sub_6e320e(arg3, esi_3)
    int16_t var_20
    int16_t var_1e
    int32_t* edi_2
    
    if (eax_6 != 0)
        edi_2 = arg2
    else
        if (arg3[1].b == eax_6)
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg3)
        
        if (*(arg3 + 6) != var_1e)
            if (arg3[1].b == 0)
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg3)
            
            if (*(arg3 + 6) != var_20)
                edi_2 = arg2
            else
                *var_94 = 0x2d
                edi_2 = &var_94[1]
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg3)
        else
            *var_94 = 0x2b
            edi_2 = &var_94[1]
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg3)
    
    *edi_2 = 0x30
    void* edi_3 = edi_2 + 1
    void* var_74_2 = edi_3
    char var_65_1 = 0
    int32_t eax_10
    eax_10.b = *arg6 != 0x3b9aca00
    int32_t var_7c_1 = 0
    int32_t result_1 = 0
    int32_t* eax_14 = var_64
    int32_t var_50
    
    if (var_50 u< 0x10)
        eax_14 = &var_64
    
    int32_t* var_80_1 = eax_14
    eax_14.b = *eax_14
    
    if (eax_14.b == 0x7f || eax_14.b s<= 0)
        if (sub_6e320e(arg3, esi_3) == 0)
            char i
            
            do
                if (arg3[1].b == 0)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                        arg3)
                
                int32_t eax_34 = std::_Find_elem<uint16_t>(&var_34, *(arg3 + 6))
                
                if (eax_34 u>= 0xa)
                    break
                
                if (((eax_10 - 1) & 0x2dc) + 0x24 s<= var_7c_1)
                    result_1 += 1
                    
                    if (eax_34 != 0)
                        var_66_1 = 1
                else if (eax_34 != 0 || var_7c_1 != 0)
                    eax_34.b = (*"0123456789-+Ee")[eax_34]
                    *edi_3 = eax_34.b
                    edi_3 += 1
                    var_7c_1 += 1
                
                var_65_1 = 1
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg3)
                i = sub_6e320e(arg3, esi_3)
            while (i == 0)
            var_74_2 = edi_3
    else
        int16_t var_8c_1
        int32_t var_54
        
        if (var_54 != 0)
            int32_t esi_4 = *(*eax_3 + 0x10)
            j_sub_4033e0()
            var_8c_1 = esi_4(eax_53)
        else
            var_8c_1 = 0
        
        int32_t var_38_1 = 0xf
        int32_t var_3c_1 = 0
        char var_4c = 0
        sub_4e2870(&var_4c, 1, 0)
        var_8_2.b = 3
        int32_t esi_5 = 0
        char* edx_2
        
        if (sub_6e320e(arg3, arg4) != 0)
            edx_2 = var_4c.d
        label_6d929c:
            void* eax_28 = var_80_1
            
            while (true)
                if (esi_5 == 0)
                    goto label_6d92f0
                
                char ecx_18 = *eax_28
                
                if (ecx_18 == 0x7f)
                    goto label_6d92f0
                
                int32_t temp0_1 = esi_5
                esi_5 -= 1
                
                if (temp0_1 != 1)
                    char* eax_29 = edx_2
                    
                    if (var_38_1 u< 0x10)
                        eax_29 = &var_4c
                    
                    if (ecx_18 != eax_29[esi_5])
                        break
                
                if (esi_5 == 0)
                    char* eax_30 = edx_2
                    
                    if (var_38_1 u< 0x10)
                        eax_30 = &var_4c
                    
                    if (ecx_18 s< *eax_30)
                        break
                
                eax_28 = var_80_1 + 1
                
                if (*eax_28 s<= 0)
                    goto label_6d929c
                
                var_80_1 = eax_28
        else
            char* var_78_1 = var_4c.d
            char i_1
            
            do
                if (arg3[1].b == 0)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                        arg3)
                
                int32_t eax_22 = std::_Find_elem<uint16_t>(&var_34, *(arg3 + 6))
                
                if (eax_22 u>= 0xa)
                    char* eax_24 = var_78_1
                    
                    if (var_38_1 u< 0x10)
                        eax_24 = &var_4c
                    
                    if (eax_24[esi_5] == 0)
                        break
                    
                    if (var_8c_1 == 0)
                        break
                    
                    if (arg3[1].b == 0)
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                            arg3)
                    
                    if (*(arg3 + 6) != var_8c_1)
                        break
                    
                    sub_405500(&var_4c, 1, 0)
                    esi_5 += 1
                    var_78_1 = var_4c.d
                else
                    var_65_1 = 1
                    
                    if (((eax_10 - 1) & 0x2dc) + 0x24 s<= var_7c_1)
                        result_1 += 1
                        
                        if (eax_22 != 0)
                            var_66_1 = 1
                    else if (eax_22 != 0 || var_7c_1 != 0)
                        eax_22.b = (*"0123456789-+Ee")[eax_22]
                        *edi_3 = eax_22.b
                        edi_3 += 1
                        var_7c_1 += 1
                    
                    char* ecx_22 = var_78_1
                    char* eax_23 = ecx_22
                    
                    if (var_38_1 u< 0x10)
                        eax_23 = &var_4c
                    
                    if (eax_23[esi_5] != 0x7f)
                        if (var_38_1 u< 0x10)
                            ecx_22 = &var_4c
                        
                        ecx_22[esi_5] += 1
                        var_78_1 = var_4c.d
                
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg3)
                i_1 = sub_6e320e(arg3, arg4)
            while (i_1 == 0)
            var_74_2 = edi_3
            
            if (esi_5 == 0)
                goto label_6d9299
            
            char* eax_27 = var_78_1
            
            if (var_38_1 u< 0x10)
                eax_27 = &var_4c
            
            if (eax_27[esi_5] s> 0)
                esi_5 += 1
            label_6d9299:
                edx_2 = var_78_1
                goto label_6d929c
        var_67_1 = 1
    label_6d92f0:
        var_8_2.b = 1
        sub_4033f0(&var_4c, 1, nullptr)
        esi_3 = arg4
    
    char eax_35 = sub_6e320e(arg3, esi_3)
    
    if (eax_35 == 0)
        if (arg3[1].b == eax_35)
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg3)
        
        int16_t edi_4 = *(arg3 + 6)
        int32_t esi_6 = *(*eax_3 + 0xc)
        j_sub_4033e0()
        int16_t eax_38
        void* ecx_39
        eax_38, ecx_39 = esi_6(eax_53)
        
        if (edi_4 != eax_38)
            edi_3 = var_74_2
        else
            char* eax_40
            eax_40.b = **_localeconv(ecx_39)
            *var_74_2 = eax_40.b
            edi_3 = var_74_2 + 1
            var_74_2 = edi_3
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg3)
        
        esi_3 = arg4
    
    if (*arg6 != 0x3b9aca00 && var_7c_1 == 0)
        if (sub_6e320e(arg3, esi_3).b == 0)
            int32_t result_2 = result_1
            int16_t eax_42
            
            do
                if (arg3[1].b == 0)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                        arg3)
                
                if (*(arg3 + 6) != var_34)
                    break
                
                var_65_1 = 1
                result_2 -= 1
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg3)
                eax_42 = sub_6e320e(arg3, esi_3)
            while (eax_42.b == 0)
            result_1 = result_2
            edi_3 = var_74_2
        
        if (result_1 s< 0)
            *edi_3 = 0x30
            edi_3 += 1
            result_1 += 1
    
    int32_t* eax_46
    uint32_t ecx_46
    
    while (true)
        eax_46, ecx_46 = sub_6e320e(arg3, esi_3)
        
        if (eax_46.b != 0)
            break
        
        if (arg3[1].b == 0)
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg3)
        
        uint32_t eax_45 = zx.d(*(arg3 + 6))
        eax_46 = std::_Find_elem<uint16_t>(&var_34, eax_45.w)
        ecx_46 = eax_45
        
        if (eax_46 u>= 0xa)
            break
        
        if (var_7c_1 s< ((eax_10 - 1) & 0x2dc) + 0x24)
            eax_46.b = *(eax_46 + "0123456789-+Ee")
            *edi_3 = eax_46.b
            edi_3 += 1
            var_7c_1 += 1
        else if (eax_46 != 0)
            var_66_1 = 1
        
        var_65_1 = 1
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg3)
    
    if (var_66_1 != 0)
        void* esi_7 = edi_3 - 1
        
        if (esi_7 == edi_2)
            result_1 += 1
            *esi_7 = 0x31
        else
            do
                int32_t* eax_47
                eax_47, ecx_46 = _localeconv(ecx_46)
                ecx_46.b = *esi_7
                
                if (ecx_46.b != **eax_47)
                    if (ecx_46.b != 0x39)
                        *esi_7 += 1
                        eax_46 = edi_2
                        break
                    
                    *esi_7 = 0x30
                
                eax_46 = edi_2
                esi_7 -= 1
            while (esi_7 != eax_46)
            
            if (esi_7 == eax_46)
                result_1 += 1
                *esi_7 = 0x31
        
        esi_3 = arg4
    
    eax_46.b = var_65_1
    
    if (eax_46.b != 0)
        eax_46 = sub_6e320e(arg3, esi_3)
        
        if (eax_46.b == 0)
            if (arg3[1].b == eax_46.b)
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg3)
            
            eax_46.w = *(arg3 + 6)
            int16_t var_1a
            
            if (eax_46.w == var_1a)
            label_6d9529:
                *edi_3 = 0x65
                edi_3 += 1
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg3)
                int32_t esi_8 = 0
                var_65_1 = 0
                int32_t var_88_1 = 0
                int16_t eax_49 = sub_6e320e(arg3, arg4)
                
                if (eax_49.b == 0)
                    if (arg3[1].b == eax_49.b)
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                            arg3)
                    
                    if (*(arg3 + 6) != var_1e)
                        if (arg3[1].b == 0)
                            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                                arg3)
                        
                        if (*(arg3 + 6) == var_20)
                            *edi_3 = 0x2d
                            edi_3 += 1
                            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                                arg3)
                    else
                        *edi_3 = 0x2b
                        edi_3 += 1
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                            arg3)
                
                if (sub_6e320e(arg3, arg4).b == 0)
                    int16_t eax_50
                    
                    do
                        if (arg3[1].b == 0)
                            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                                arg3)
                        
                        if (*(arg3 + 6) != var_34)
                            break
                        
                        var_65_1 = 1
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                            arg3)
                        eax_50 = sub_6e320e(arg3, arg4)
                    while (eax_50.b == 0)
                    esi_8 = var_88_1
                    
                    if (var_65_1 != 0)
                        *edi_3 = 0x30
                        edi_3 += 1
                
                while (true)
                    eax_46 = sub_6e320e(arg3, arg4)
                    
                    if (eax_46.b != 0)
                        break
                    
                    if (arg3[1].b == eax_46.b)
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                            arg3)
                    
                    eax_46 = std::_Find_elem<uint16_t>(&var_34, *(arg3 + 6))
                    
                    if (eax_46 u>= 0xa)
                        break
                    
                    if (esi_8 s< 8)
                        eax_46.b = *(eax_46 + "0123456789-+Ee")
                        *edi_3 = eax_46.b
                        edi_3 += 1
                        esi_8 += 1
                    
                    var_65_1 = 1
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                        arg3)
            else
                if (arg3[1].b == 0)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                        arg3)
                
                eax_46.w = *(arg3 + 6)
                int16_t var_1c
                
                if (eax_46.w == var_1c)
                    goto label_6d9529
        
        eax_46.b = var_65_1
    
    if (var_67_1 != 0 || eax_46.b == 0)
        edi_3 = var_94
    
    *edi_3 = 0
    sub_4033f0(&var_64, 1, nullptr)
    result = result_1
else
    int32_t* var_b8 = arg6
    result = sub_6d9cf7(arg1, arg2, arg3, arg4, arg5)

@__security_check_cookie@4(eax_53 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d9650
return result
