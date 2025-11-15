// 函数: sub_6da41a
// 地址: 0x6da41a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0xac
int32_t (* var_c)(void* arg1) = sub_749858
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_c0_20 = ebx
int32_t esi
int32_t var_c4_4 = esi
int32_t edi
int32_t var_c8 = edi
int32_t __saved_ebp
int32_t eax_58 = __security_cookie ^ &__saved_ebp
void* const var_d0_6 = &data_6da429
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8 = 0
int32_t var_bc
int32_t* eax_4 = sub_6d7479(std::ios_base::getloc(arg4, &var_bc))
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_bc)
int32_t var_8_2 = 1
var_8_2.b = 2
int32_t var_b0
int32_t* var_80
struct std::ctype_base::std::ctype<wchar_t>::VTable* eax_6 =
    sub_633850(std::ios_base::getloc(std::_Mpunct<wchar_t>::grouping(eax_4, &var_80), &var_b0))
var_8_2.b = 1
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_b0)
int32_t esi_3 = *(eax_6->vFunc_0 + 0x2c)
j_sub_4033e0()
int16_t var_50
esi_3("0123456789ABCDEFabcdef-+XxPp", 0x750351, &var_50, eax_58)
int32_t* esi_4 = arg3
void* edi_3 = arg1
char var_82 = 0
char eax_7 = sub_6e320e(arg2, esi_4)
int16_t var_24
int16_t var_22

if (eax_7 == 0)
    if (arg2[1].b == eax_7)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
    
    char* eax_9
    
    if (*(arg2 + 6) != var_22)
        if (arg2[1].b == 0)
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
        
        if (*(arg2 + 6) == var_24)
            eax_9 = edi_3
            *eax_9 = 0x2d
            edi_3 = &eax_9[1]
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
    else
        eax_9 = edi_3
        *eax_9 = 0x2b
        edi_3 = &eax_9[1]
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)

*edi_3 = 0x7830
void* edi_4 = edi_3 + 2
char var_81 = 0
void* var_98 = edi_4
int32_t var_94 = 0
int32_t var_8c = 0
char eax_11 = sub_6e320e(arg2, esi_4)

if (eax_11 == 0)
    if (arg2[1].b == eax_11)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
    
    if (*(arg2 + 6) == var_50)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
        char eax_13 = sub_6e320e(arg2, esi_4)
        
        if (eax_13 != 0)
            var_81 = 1
        else
            if (arg2[1].b == eax_13)
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
            
            int16_t var_1e
            
            if (*(arg2 + 6) == var_1e)
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
            else
                if (arg2[1].b == 0)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                        arg2)
                
                int16_t var_20
                
                if (*(arg2 + 6) != var_20)
                    var_81 = 1
                else
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                        arg2)

int32_t eax_16
eax_16.b = *arg5 != 0x3b9aca00
int32_t* eax_20 = var_80
int32_t var_6c

if (var_6c u< 0x10)
    eax_20 = &var_80

int32_t* var_9c = eax_20
eax_20.b = *eax_20

if (eax_20.b == 0x7f || eax_20.b s<= 0)
    if (sub_6e320e(arg2, esi_4) == 0)
        char i
        
        do
            if (arg2[1].b == 0)
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
            
            int32_t eax_40 = std::_Find_elem<uint16_t>(&var_50, *(arg2 + 6))
            
            if (eax_40 u>= 0x16)
                break
            
            if (((eax_16 - 1) & 0x2dc) + 0x24 s<= var_94)
                var_8c += 1
            else if (eax_40 != 0 || var_94 != 0)
                eax_40.b = (*"0123456789ABCDEFabcdef-+XxPp")[eax_40]
                *edi_4 = eax_40.b
                edi_4 += 1
                var_94 += 1
            
            var_81 = 1
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
            i = sub_6e320e(arg2, esi_4)
        while (i == 0)
        var_98 = edi_4
else
    int16_t var_a8_1
    int32_t var_70
    
    if (var_70 != 0)
        int32_t esi_5 = *(*eax_4 + 0x10)
        j_sub_4033e0()
        var_a8_1 = esi_5()
    else
        var_a8_1 = 0
    
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0xf
    char var_68 = 0
    sub_4e2870(&var_68, 1, 0)
    var_8_2.b = 3
    int32_t esi_6 = 0
    char* edx_2
    
    if (sub_6e320e(arg2, arg3) != 0)
        edx_2 = var_68.d
    label_6da781:
        void* eax_34 = var_9c
        
        while (true)
            if (esi_6 == 0)
                goto label_6da7de
            
            char ecx_24 = *eax_34
            
            if (ecx_24 == 0x7f)
                goto label_6da7de
            
            int32_t temp0_1 = esi_6
            esi_6 -= 1
            
            if (temp0_1 != 1)
                char* eax_35 = edx_2
                
                if (var_54_1 u< 0x10)
                    eax_35 = &var_68
                
                if (ecx_24 != eax_35[esi_6])
                    break
            
            if (esi_6 == 0)
                char* eax_36 = edx_2
                
                if (var_54_1 u< 0x10)
                    eax_36 = &var_68
                
                if (ecx_24 s< *eax_36)
                    break
            
            eax_34 = var_9c + 1
            
            if (*eax_34 s<= 0)
                goto label_6da781
            
            var_9c = eax_34
    else
        char* var_90_1 = var_68.d
        char i_1
        
        do
            if (arg2[1].b == 0)
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
            
            int32_t eax_28 = std::_Find_elem<uint16_t>(&var_50, *(arg2 + 6))
            
            if (eax_28 u>= 0x16)
                char* eax_30 = var_90_1
                
                if (var_54_1 u< 0x10)
                    eax_30 = &var_68
                
                if (eax_30[esi_6] == 0)
                    break
                
                if (var_a8_1 == 0)
                    break
                
                if (arg2[1].b == 0)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                        arg2)
                
                if (*(arg2 + 6) != var_a8_1)
                    break
                
                sub_405500(&var_68, 1, 0)
                esi_6 += 1
                var_90_1 = var_68.d
            else
                var_81 = 1
                
                if (((eax_16 - 1) & 0x2dc) + 0x24 s<= var_94)
                    var_8c += 1
                else if (eax_28 != 0 || var_94 != 0)
                    eax_28.b = (*"0123456789ABCDEFabcdef-+XxPp")[eax_28]
                    *edi_4 = eax_28.b
                    edi_4 += 1
                    var_94 += 1
                
                char* ecx_28 = var_90_1
                char* eax_29 = ecx_28
                
                if (var_54_1 u< 0x10)
                    eax_29 = &var_68
                
                if (eax_29[esi_6] != 0x7f)
                    if (var_54_1 u< 0x10)
                        ecx_28 = &var_68
                    
                    ecx_28[esi_6] += 1
                    var_90_1 = var_68.d
            
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
            i_1 = sub_6e320e(arg2, arg3)
        while (i_1 == 0)
        var_98 = edi_4
        
        if (esi_6 == 0)
            goto label_6da77b
        
        char* eax_33 = var_90_1
        
        if (var_54_1 u< 0x10)
            eax_33 = &var_68
        
        if (eax_33[esi_6] s> 0)
            esi_6 += 1
        label_6da77b:
            edx_2 = var_90_1
            goto label_6da781
    var_82 = 1
label_6da7de:
    var_8_2.b = 1
    sub_4033f0(&var_68, 1, nullptr)
    esi_4 = arg3

if (var_81 != 0 && var_94 == 0)
    *edi_4 = 0x30
    edi_4 += 1
    var_98 = edi_4

char eax_41 = sub_6e320e(arg2, esi_4)

if (eax_41 == 0)
    if (arg2[1].b == eax_41)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
    
    int16_t edi_5 = *(arg2 + 6)
    int32_t esi_7 = *(*eax_4 + 0xc)
    j_sub_4033e0()
    int16_t eax_44
    void* ecx_45
    eax_44, ecx_45 = esi_7()
    
    if (edi_5 != eax_44)
        edi_4 = var_98
    else
        char* eax_46
        eax_46.b = **_localeconv(ecx_45)
        *var_98 = eax_46.b
        edi_4 = var_98 + 1
        var_98 = edi_4
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
    
    esi_4 = arg3

if (var_94 == 0)
    if (sub_6e320e(arg2, esi_4).b == 0)
        int32_t edi_7 = var_8c
        int16_t eax_47
        
        do
            if (arg2[1].b == 0)
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
            
            if (*(arg2 + 6) != var_50)
                break
            
            var_81 = 1
            edi_7 -= 1
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
            eax_47 = sub_6e320e(arg2, esi_4)
        while (eax_47.b == 0)
        var_8c = edi_7
        edi_4 = var_98
    
    if (var_8c s< 0)
        *edi_4 = 0x30
        edi_4 += 1
        var_8c += 1

int32_t eax_51

while (sub_6e320e(arg2, esi_4).b == 0)
    if (arg2[1].b == 0)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
    
    eax_51 = std::_Find_elem<uint16_t>(&var_50, *(arg2 + 6))
    
    if (eax_51 u>= 0x16)
        break
    
    if (var_94 s< ((eax_16 - 1) & 0x2dc) + 0x24)
        eax_51.b = (*"0123456789ABCDEFabcdef-+XxPp")[eax_51]
        *edi_4 = eax_51.b
        edi_4 += 1
        var_94 += 1
    
    var_81 = 1
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)

eax_51.b = var_81

if (eax_51.b != 0)
    eax_51 = sub_6e320e(arg2, esi_4)
    
    if (eax_51.b == 0)
        if (arg2[1].b == eax_51.b)
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
        
        eax_51.w = *(arg2 + 6)
        int16_t var_1a
        
        if (eax_51.w == var_1a)
        label_6da9fd:
            *edi_4 = 0x70
            edi_4 += 1
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
            int32_t esi_8 = 0
            var_81 = 0
            int32_t var_ac_1 = 0
            int16_t eax_52 = sub_6e320e(arg2, arg3)
            
            if (eax_52.b == 0)
                if (arg2[1].b == eax_52.b)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                        arg2)
                
                if (*(arg2 + 6) != var_22)
                    if (arg2[1].b == 0)
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                            arg2)
                    
                    if (*(arg2 + 6) == var_24)
                        *edi_4 = 0x2d
                        edi_4 += 1
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                            arg2)
                else
                    *edi_4 = 0x2b
                    edi_4 += 1
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                        arg2)
            
            if (sub_6e320e(arg2, arg3).b == 0)
                int16_t eax_53
                
                do
                    if (arg2[1].b == 0)
                        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                            arg2)
                    
                    if (*(arg2 + 6) != var_50)
                        break
                    
                    var_81 = 1
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(
                        arg2)
                    eax_53 = sub_6e320e(arg2, arg3)
                while (eax_53.b == 0)
                esi_8 = var_ac_1
                
                if (var_81 != 0)
                    *edi_4 = 0x30
                    edi_4 += 1
            
            while (true)
                eax_51 = sub_6e320e(arg2, arg3)
                
                if (eax_51.b != 0)
                    break
                
                if (arg2[1].b == eax_51.b)
                    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(
                        arg2)
                
                eax_51 = std::_Find_elem<uint16_t>(&var_50, *(arg2 + 6))
                
                if (eax_51 u>= 0x16)
                    break
                
                if (esi_8 s< 8)
                    eax_51.b = (*"0123456789ABCDEFabcdef-+XxPp")[eax_51]
                    *edi_4 = eax_51.b
                    edi_4 += 1
                    esi_8 += 1
                
                var_81 = 1
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
        else
            if (arg2[1].b == 0)
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
            
            eax_51.w = *(arg2 + 6)
            int16_t var_1c
            
            if (eax_51.w == var_1c)
                goto label_6da9fd
    
    eax_51.b = var_81

if (var_82 != 0 || eax_51.b == 0)
    edi_4 = arg1

*edi_4 = 0
*arg5 = var_8c
sub_4033f0(&var_80, 1, nullptr)
@__security_check_cookie@4(eax_58 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6dab3c
return 0
