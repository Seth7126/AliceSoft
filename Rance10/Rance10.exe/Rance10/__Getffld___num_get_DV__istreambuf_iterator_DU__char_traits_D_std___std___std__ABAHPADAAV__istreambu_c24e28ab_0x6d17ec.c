// 函数: ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AAVios_base@2@PAH@Z
// 地址: 0x6d17ec
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x84
int32_t (* var_c)(void* arg1) = sub_749154
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_46 = __security_cookie ^ &__saved_ebp
void* const var_a8_25 = &data_6d17fb
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg3
char* var_80 = arg2
int32_t* var_8c = ebx
int32_t result

if ((arg5[5] & 0x3000) != 0x3000)
    int32_t var_8 = 0
    void var_94
    int32_t* eax_3 = sub_6d1105(std::ios_base::getloc(arg5, &var_94))
    int32_t var_8_1 = 0xffffffff
    std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
        &var_94)
    int32_t var_8_2 = 1
    char var_58_1 = 0
    char var_56_1 = 0
    var_8_2.b = 2
    void var_88
    int32_t* var_54
    int32_t* eax_5 =
        sub_6d0f2e(std::ios_base::getloc(std::_Mpunct<wchar_t>::grouping(eax_3, &var_54), &var_88))
    var_8_2.b = 1
    std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
        &var_88)
    int32_t esi_2 = *(*eax_5 + 0x1c)
    j_sub_4033e0()
    char var_24
    esi_2("0123456789-+Ee", 0x74edff, &var_24)
    int32_t* esi_3 = arg4
    char eax_6 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx, esi_3)
    char var_1a
    char var_19
    int32_t* edi_2
    
    if (eax_6 != 0)
        edi_2 = arg2
    else
        if (ebx[1].b == eax_6)
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx)
        
        if (*(ebx + 5) != var_19)
            if (ebx[1].b == 0)
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx)
            
            if (*(ebx + 5) != var_1a)
                edi_2 = arg2
            else
                *var_80 = 0x2d
                edi_2 = &var_80[1]
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx)
        else
            *var_80 = 0x2b
            edi_2 = &var_80[1]
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx)
    
    *edi_2 = 0x30
    void* edi_3 = edi_2 + 1
    void* var_64_2 = edi_3
    char var_55_1 = 0
    int32_t eax_8
    eax_8.b = *arg6 != 0x3b9aca00
    int32_t var_6c_1 = 0
    int32_t result_1 = 0
    int32_t* eax_12 = var_54
    int32_t var_40
    
    if (var_40 u< 0x10)
        eax_12 = &var_54
    
    int32_t* var_70_1 = eax_12
    eax_12.b = *eax_12
    
    if (eax_12.b == 0x7f || eax_12.b s<= 0)
        if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx, esi_3) == 0)
            char i
            
            do
                if (ebx[1].b == 0)
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx)
                
                void* eax_29 = std::_Find_elem<char>(&var_24, *(ebx + 5))
                
                if (eax_29 u>= 0xa)
                    break
                
                if (((eax_8 - 1) & 0x2dc) + 0x24 s<= var_6c_1)
                    result_1 += 1
                    
                    if (eax_29 != 0)
                        var_56_1 = 1
                else if (eax_29 != 0 || var_6c_1 != 0)
                    eax_29.b = *(eax_29 + "0123456789-+Ee")
                    *edi_3 = eax_29.b
                    edi_3 += 1
                    var_6c_1 += 1
                
                var_55_1 = 1
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx)
                i = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx, esi_3)
            while (i == 0)
            var_64_2 = edi_3
    else
        char var_57_1
        int32_t var_44
        
        if (var_44 != 0)
            int32_t esi_4 = *(*eax_3 + 0x10)
            j_sub_4033e0()
            var_57_1 = esi_4(eax_46)
        else
            var_57_1 = 0
        
        int32_t var_28_1 = 0xf
        int32_t var_2c_1 = 0
        char var_3c = 0
        sub_4e2870(&var_3c, 1, 0)
        var_8_2.b = 3
        int32_t esi_5 = 0
        uint32_t edx_2
        
        if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx, arg4) != 0)
            edx_2 = var_3c.d
        label_6d1ab9:
            void* eax_23 = var_70_1
            
            while (true)
                if (esi_5 == 0)
                    goto label_6d1b0d
                
                char ecx_18 = *eax_23
                
                if (ecx_18 == 0x7f)
                    goto label_6d1b0d
                
                int32_t temp0_1 = esi_5
                esi_5 -= 1
                
                if (temp0_1 != 1)
                    uint32_t eax_24 = edx_2
                    
                    if (var_28_1 u< 0x10)
                        eax_24 = &var_3c
                    
                    if (ecx_18 != *(eax_24 + esi_5))
                        break
                
                if (esi_5 == 0)
                    uint32_t eax_25 = edx_2
                    
                    if (var_28_1 u< 0x10)
                        eax_25 = &var_3c
                    
                    if (ecx_18 s< *eax_25)
                        break
                
                eax_23 = var_70_1 + 1
                
                if (*eax_23 s<= 0)
                    goto label_6d1ab9
                
                var_70_1 = eax_23
        else
            uint32_t var_68_1 = var_3c.d
            uint32_t eax_17
            
            do
                if (ebx[1].b == 0)
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx)
                
                eax_17.b = *(ebx + 5)
                var_64_2.b = eax_17.b
                void* eax_18 = std::_Find_elem<char>(&var_24, var_64_2.b)
                
                if (eax_18 u>= 0xa)
                    uint32_t eax_20 = var_68_1
                    
                    if (var_28_1 u< 0x10)
                        eax_20 = &var_3c
                    
                    if (*(eax_20 + esi_5) == 0)
                        break
                    
                    if (var_57_1 == 0)
                        break
                    
                    if (ebx[1].b == 0)
                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx)
                    
                    eax_20.b = *(ebx + 5)
                    
                    if (eax_20.b != var_57_1)
                        break
                    
                    sub_405500(&var_3c, 1, 0)
                    esi_5 += 1
                    var_68_1 = var_3c.d
                else
                    var_55_1 = 1
                    
                    if (((eax_8 - 1) & 0x2dc) + 0x24 s<= var_6c_1)
                        result_1 += 1
                        
                        if (eax_18 != 0)
                            var_56_1 = 1
                    else if (eax_18 != 0 || var_6c_1 != 0)
                        eax_18.b = *(eax_18 + "0123456789-+Ee")
                        *edi_3 = eax_18.b
                        edi_3 += 1
                        var_6c_1 += 1
                    
                    uint32_t ecx_22 = var_68_1
                    uint32_t eax_19 = ecx_22
                    
                    if (var_28_1 u< 0x10)
                        eax_19 = &var_3c
                    
                    if (*(eax_19 + esi_5) != 0x7f)
                        if (var_28_1 u< 0x10)
                            ecx_22 = &var_3c
                        
                        *(ecx_22 + esi_5) += 1
                        var_68_1 = var_3c.d
                
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx)
                eax_17 =
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx, arg4)
            while (eax_17.b == 0)
            var_64_2 = edi_3
            
            if (esi_5 == 0)
                goto label_6d1ab6
            
            uint32_t eax_22 = var_68_1
            
            if (var_28_1 u< 0x10)
                eax_22 = &var_3c
            
            if (*(eax_22 + esi_5) s> 0)
                esi_5 += 1
            label_6d1ab6:
                edx_2 = var_68_1
                goto label_6d1ab9
        var_58_1 = 1
    label_6d1b0d:
        var_8_2.b = 1
        sub_4033f0(&var_3c, 1, nullptr)
        esi_3 = arg4
    
    char eax_30 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx, esi_3)
    
    if (eax_30 == 0)
        if (ebx[1].b == eax_30)
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx)
        
        ebx.b = *(ebx + 5)
        int32_t esi_6 = *(*eax_3 + 0xc)
        j_sub_4033e0()
        char eax_33
        void* ecx_39
        eax_33, ecx_39 = esi_6(eax_46)
        
        if (ebx.b != eax_33)
            ebx = var_8c
        else
            ebx = var_8c
            char* eax_35
            eax_35.b = **_localeconv(ecx_39)
            *edi_3 = eax_35.b
            edi_3 += 1
            var_64_2 = edi_3
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx)
        
        esi_3 = arg4
    
    if (*arg6 != 0x3b9aca00 && var_6c_1 == 0)
        if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx, esi_3) == 0)
            int32_t result_2 = result_1
            char i_1
            
            do
                if (ebx[1].b == 0)
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx)
                
                if (*(ebx + 5) != var_24)
                    break
                
                var_55_1 = 1
                result_2 -= 1
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx)
                i_1 =
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx, esi_3)
            while (i_1 == 0)
            result_1 = result_2
            edi_3 = var_64_2
        
        if (result_1 s< 0)
            *edi_3 = 0x30
            edi_3 += 1
            result_1 += 1
    
    int32_t* eax_40
    uint32_t ecx_46
    
    while (true)
        eax_40, ecx_46 =
            std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx, esi_3)
        
        if (eax_40.b != 0)
            break
        
        if (ebx[1].b == 0)
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx)
        
        uint32_t eax_39 = zx.d(*(ebx + 5))
        eax_40 = std::_Find_elem<char>(&var_24, eax_39.b)
        ecx_46 = eax_39
        
        if (eax_40 u>= 0xa)
            break
        
        if (var_6c_1 s< ((eax_8 - 1) & 0x2dc) + 0x24)
            eax_40.b = *(eax_40 + "0123456789-+Ee")
            *edi_3 = eax_40.b
            edi_3 += 1
            var_6c_1 += 1
        else if (eax_40 != 0)
            var_56_1 = 1
        
        var_55_1 = 1
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx)
    
    if (var_56_1 != 0)
        void* esi_7 = edi_3 - 1
        
        if (esi_7 == edi_2)
            result_1 += 1
            *esi_7 = 0x31
        else
            do
                int32_t* eax_41
                eax_41, ecx_46 = _localeconv(ecx_46)
                ecx_46.b = *esi_7
                
                if (ecx_46.b != **eax_41)
                    if (ecx_46.b != 0x39)
                        *esi_7 += 1
                        eax_40 = edi_2
                        break
                    
                    *esi_7 = 0x30
                
                eax_40 = edi_2
                esi_7 -= 1
            while (esi_7 != eax_40)
            
            if (esi_7 == eax_40)
                result_1 += 1
                *esi_7 = 0x31
        
        esi_3 = arg4
    
    eax_40.b = var_55_1
    
    if (eax_40.b != 0)
        eax_40 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx, esi_3)
        
        if (eax_40.b == 0)
            if (ebx[1].b == eax_40.b)
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx)
            
            eax_40.b = *(ebx + 5)
            char var_17
            
            if (eax_40.b == var_17)
            label_6d1d32:
                *edi_3 = 0x65
                edi_3 += 1
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx)
                int32_t esi_8 = 0
                var_55_1 = 0
                int32_t var_78_1 = 0
                char eax_43 =
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx, arg4)
                
                if (eax_43 == 0)
                    if (ebx[1].b == eax_43)
                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx)
                    
                    if (*(ebx + 5) != var_19)
                        if (ebx[1].b == 0)
                            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(
                                ebx)
                        
                        if (*(ebx + 5) == var_1a)
                            *edi_3 = 0x2d
                            edi_3 += 1
                            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx)
                    else
                        *edi_3 = 0x2b
                        edi_3 += 1
                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx)
                
                if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx, arg4)
                        == 0)
                    char i_2
                    
                    do
                        if (ebx[1].b == 0)
                            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(
                                ebx)
                        
                        if (*(ebx + 5) != var_24)
                            break
                        
                        var_55_1 = 1
                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx)
                        i_2 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(
                            ebx, arg4)
                    while (i_2 == 0)
                    esi_8 = var_78_1
                    
                    if (var_55_1 != 0)
                        *edi_3 = 0x30
                        edi_3 += 1
                
                while (true)
                    eax_40 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(
                        ebx, arg4)
                    
                    if (eax_40.b != 0)
                        break
                    
                    if (ebx[1].b == eax_40.b)
                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx)
                    
                    eax_40 = std::_Find_elem<char>(&var_24, *(ebx + 5))
                    
                    if (eax_40 u>= 0xa)
                        break
                    
                    if (esi_8 s< 8)
                        eax_40.b = *(eax_40 + "0123456789-+Ee")
                        *edi_3 = eax_40.b
                        edi_3 += 1
                        esi_8 += 1
                    
                    var_55_1 = 1
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx)
            else
                if (ebx[1].b == 0)
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx)
                
                eax_40.b = *(ebx + 5)
                char var_18
                
                if (eax_40.b == var_18)
                    goto label_6d1d32
        
        eax_40.b = var_55_1
    
    if (var_58_1 != 0 || eax_40.b == 0)
        edi_3 = var_80
    
    *edi_3 = 0
    sub_4033f0(&var_54, 1, nullptr)
    result = result_1
else
    int32_t* var_a8 = arg6
    result = std::num_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getffldx(
        arg1, arg2, ebx, arg4, arg5)

@__security_check_cookie@4(eax_46 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d1e4a
return result
