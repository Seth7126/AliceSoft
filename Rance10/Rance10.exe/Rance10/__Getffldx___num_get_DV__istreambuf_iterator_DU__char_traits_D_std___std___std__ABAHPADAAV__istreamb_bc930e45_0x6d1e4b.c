// 函数: ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AAVios_base@2@PAH@Z
// 地址: 0x6d1e4b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x90
int32_t (* var_c)(void* arg1) = sub_7491a2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_a4_20 = ebx
int32_t esi
int32_t var_a8_4 = esi
int32_t edi
int32_t var_ac = edi
int32_t __saved_ebp
int32_t eax_48 = __security_cookie ^ &__saved_ebp
void* const var_b4_6 = &data_6d1e5a
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx_1 = arg2
int32_t* var_8c = ebx_1
int32_t var_8 = 0
int32_t var_a0
int32_t* eax_4 = sub_6d1105(std::ios_base::getloc(arg4, &var_a0))
int32_t var_8_1 = 0xffffffff
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_a0)
int32_t var_8_2 = 1
var_8_2.b = 2
int32_t var_94
int32_t* var_64
int32_t* eax_6 =
    sub_6d0f2e(std::ios_base::getloc(std::_Mpunct<wchar_t>::grouping(eax_4, &var_64), &var_94))
var_8_2.b = 1
std::_Debug_range2<class std::move_iterator<class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class std::shared_ptr<struct Concurrency::details::_Task_impl<struct std::pair<uint8_t,class Concurrency::details::_CancellationTokenState*> > > > > > > >(
    &var_94)
int32_t esi_3 = *(*eax_6 + 0x1c)
j_sub_4033e0()
char var_34
esi_3("0123456789ABCDEFabcdef-+XxPp", 0x74ee39, &var_34, eax_48)
int32_t* esi_4 = arg3
void* edi_3 = arg1
char var_67 = 0
char eax_7 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, esi_4)
char var_1e
char var_1d

if (eax_7 == 0)
    if (ebx_1[1].b == eax_7)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
    
    char* eax_8
    
    if (*(ebx_1 + 5) != var_1d)
        if (ebx_1[1].b == 0)
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
        
        if (*(ebx_1 + 5) == var_1e)
            eax_8 = edi_3
            *eax_8 = 0x2d
            edi_3 = &eax_8[1]
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)
    else
        eax_8 = edi_3
        *eax_8 = 0x2b
        edi_3 = &eax_8[1]
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)

*edi_3 = 0x7830
void* edi_4 = edi_3 + 2
char var_65 = 0
void* var_7c = edi_4
int32_t var_78 = 0
int32_t var_70 = 0
char eax_9 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, esi_4)

if (eax_9 == 0)
    if (ebx_1[1].b == eax_9)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
    
    if (*(ebx_1 + 5) == var_34)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)
        char eax_10 =
            std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, esi_4)
        
        if (eax_10 != 0)
            var_65 = 1
        else
            if (ebx_1[1].b == eax_10)
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
            
            char var_1b
            
            if (*(ebx_1 + 5) == var_1b)
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)
            else
                if (ebx_1[1].b == 0)
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
                
                char var_1c
                
                if (*(ebx_1 + 5) != var_1c)
                    var_65 = 1
                else
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)

int32_t eax_11
eax_11.b = *arg5 != 0x3b9aca00
int32_t* eax_15 = var_64
int32_t var_50

if (var_50 u< 0x10)
    eax_15 = &var_64

int32_t* var_80 = eax_15
eax_15.b = *eax_15

if (eax_15.b == 0x7f || eax_15.b s<= 0)
    if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, esi_4) == 0)
        char i
        
        do
            if (ebx_1[1].b == 0)
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
            
            void* eax_32 = std::_Find_elem<char>(&var_34, *(ebx_1 + 5))
            
            if (eax_32 u>= 0x16)
                break
            
            if (((eax_11 - 1) & 0x2dc) + 0x24 s<= var_78)
                var_70 += 1
            else if (eax_32 != 0 || var_78 != 0)
                eax_32.b = *(eax_32 + "0123456789ABCDEFabcdef-+XxPp")
                *edi_4 = eax_32.b
                edi_4 += 1
                var_78 += 1
            
            var_65 = 1
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)
            i = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, esi_4)
        while (i == 0)
        var_7c = edi_4
else
    char var_66_1
    int32_t var_54
    
    if (var_54 != 0)
        int32_t esi_5 = *(*eax_4 + 0x10)
        j_sub_4033e0()
        var_66_1 = esi_5()
    else
        var_66_1 = 0
    
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0xf
    char var_4c = 0
    sub_4e2870(&var_4c, 1, 0)
    var_8_2.b = 3
    int32_t esi_6 = 0
    uint32_t edx_2
    
    if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, arg3) != 0)
        edx_2 = var_4c.d
    label_6d2161:
        void* eax_26 = var_80
        
        while (true)
            if (esi_6 == 0)
                goto label_6d21b5
            
            char ecx_24 = *eax_26
            
            if (ecx_24 == 0x7f)
                goto label_6d21b5
            
            int32_t temp0_1 = esi_6
            esi_6 -= 1
            
            if (temp0_1 != 1)
                uint32_t eax_27 = edx_2
                
                if (var_38_1 u< 0x10)
                    eax_27 = &var_4c
                
                if (ecx_24 != *(eax_27 + esi_6))
                    break
            
            if (esi_6 == 0)
                uint32_t eax_28 = edx_2
                
                if (var_38_1 u< 0x10)
                    eax_28 = &var_4c
                
                if (ecx_24 s< *eax_28)
                    break
            
            eax_26 = var_80 + 1
            
            if (*eax_26 s<= 0)
                goto label_6d2161
            
            var_80 = eax_26
    else
        uint32_t var_74_1 = var_4c.d
        uint32_t eax_20
        
        do
            if (ebx_1[1].b == 0)
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
            
            eax_20.b = *(ebx_1 + 5)
            var_7c.b = eax_20.b
            void* eax_21 = std::_Find_elem<char>(&var_34, var_7c.b)
            
            if (eax_21 u>= 0x16)
                uint32_t eax_23 = var_74_1
                
                if (var_38_1 u< 0x10)
                    eax_23 = &var_4c
                
                if (*(eax_23 + esi_6) == 0)
                    break
                
                if (var_66_1 == 0)
                    break
                
                if (ebx_1[1].b == 0)
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
                
                eax_23.b = *(ebx_1 + 5)
                
                if (eax_23.b != var_66_1)
                    break
                
                sub_405500(&var_4c, 1, 0)
                esi_6 += 1
                var_74_1 = var_4c.d
            else
                var_65 = 1
                
                if (((eax_11 - 1) & 0x2dc) + 0x24 s<= var_78)
                    var_70 += 1
                else if (eax_21 != 0 || var_78 != 0)
                    eax_21.b = *(eax_21 + "0123456789ABCDEFabcdef-+XxPp")
                    *edi_4 = eax_21.b
                    edi_4 += 1
                    var_78 += 1
                
                uint32_t ecx_28 = var_74_1
                uint32_t eax_22 = ecx_28
                
                if (var_38_1 u< 0x10)
                    eax_22 = &var_4c
                
                if (*(eax_22 + esi_6) != 0x7f)
                    if (var_38_1 u< 0x10)
                        ecx_28 = &var_4c
                    
                    *(ecx_28 + esi_6) += 1
                    var_74_1 = var_4c.d
            
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)
            eax_20 =
                std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, arg3)
        while (eax_20.b == 0)
        var_7c = edi_4
        
        if (esi_6 == 0)
            goto label_6d215e
        
        uint32_t eax_25 = var_74_1
        
        if (var_38_1 u< 0x10)
            eax_25 = &var_4c
        
        if (*(eax_25 + esi_6) s> 0)
            esi_6 += 1
        label_6d215e:
            edx_2 = var_74_1
            goto label_6d2161
    var_67 = 1
label_6d21b5:
    var_8_2.b = 1
    sub_4033f0(&var_4c, 1, nullptr)
    esi_4 = arg3

if (var_65 != 0 && var_78 == 0)
    *edi_4 = 0x30
    edi_4 += 1
    var_7c = edi_4

char eax_33 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, esi_4)

if (eax_33 == 0)
    if (ebx_1[1].b == eax_33)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
    
    ebx_1.b = *(ebx_1 + 5)
    int32_t esi_7 = *(*eax_4 + 0xc)
    j_sub_4033e0()
    char eax_36
    void* ecx_45
    eax_36, ecx_45 = esi_7()
    
    if (ebx_1.b != eax_36)
        ebx_1 = var_8c
    else
        ebx_1 = var_8c
        char* eax_38
        eax_38.b = **_localeconv(ecx_45)
        *edi_4 = eax_38.b
        edi_4 += 1
        var_7c = edi_4
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)
    
    esi_4 = arg3

if (var_78 == 0)
    if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, esi_4) == 0)
        int32_t edi_5 = var_70
        char i_1
        
        do
            if (ebx_1[1].b == 0)
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
            
            if (*(ebx_1 + 5) != var_34)
                break
            
            var_65 = 1
            edi_5 -= 1
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)
            i_1 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, esi_4)
        while (i_1 == 0)
        var_70 = edi_5
        edi_4 = var_7c
    
    if (var_70 s< 0)
        *edi_4 = 0x30
        edi_4 += 1
        var_70 += 1

void* eax_42

while (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, esi_4).b == 0)
    if (ebx_1[1].b == 0)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
    
    eax_42 = std::_Find_elem<char>(&var_34, *(ebx_1 + 5))
    
    if (eax_42 u>= 0x16)
        break
    
    if (var_78 s< ((eax_11 - 1) & 0x2dc) + 0x24)
        eax_42.b = *(eax_42 + "0123456789ABCDEFabcdef-+XxPp")
        *edi_4 = eax_42.b
        edi_4 += 1
        var_78 += 1
    
    var_65 = 1
    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)

eax_42.b = var_65

if (eax_42.b != 0)
    eax_42 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, esi_4)
    
    if (eax_42.b == 0)
        if (ebx_1[1].b == eax_42.b)
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
        
        eax_42.b = *(ebx_1 + 5)
        char var_19
        
        if (eax_42.b == var_19)
        label_6d2393:
            *edi_4 = 0x70
            edi_4 += 1
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)
            int32_t esi_8 = 0
            var_65 = 0
            int32_t var_8c_1 = 0
            char eax_43 =
                std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, arg3)
            
            if (eax_43 == 0)
                if (ebx_1[1].b == eax_43)
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
                
                if (*(ebx_1 + 5) != var_1d)
                    if (ebx_1[1].b == 0)
                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
                    
                    if (*(ebx_1 + 5) == var_1e)
                        *edi_4 = 0x2d
                        edi_4 += 1
                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)
                else
                    *edi_4 = 0x2b
                    edi_4 += 1
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)
            
            if (std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(ebx_1, arg3)
                    == 0)
                char i_2
                
                do
                    if (ebx_1[1].b == 0)
                        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
                    
                    if (*(ebx_1 + 5) != var_34)
                        break
                    
                    var_65 = 1
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)
                    i_2 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(
                        ebx_1, arg3)
                while (i_2 == 0)
                esi_8 = var_8c_1
                
                if (var_65 != 0)
                    *edi_4 = 0x30
                    edi_4 += 1
            
            while (true)
                eax_42 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(
                    ebx_1, arg3)
                
                if (eax_42.b != 0)
                    break
                
                if (ebx_1[1].b == eax_42.b)
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
                
                eax_42 = std::_Find_elem<char>(&var_34, *(ebx_1 + 5))
                
                if (eax_42 u>= 0x16)
                    break
                
                if (esi_8 s< 8)
                    eax_42.b = *(eax_42 + "0123456789ABCDEFabcdef-+XxPp")
                    *edi_4 = eax_42.b
                    edi_4 += 1
                    esi_8 += 1
                
                var_65 = 1
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(ebx_1)
        else
            if (ebx_1[1].b == 0)
                std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(ebx_1)
            
            eax_42.b = *(ebx_1 + 5)
            char var_1a
            
            if (eax_42.b == var_1a)
                goto label_6d2393
    
    eax_42.b = var_65

if (var_67 != 0 || eax_42.b == 0)
    edi_4 = arg1

*edi_4 = 0
*arg5 = var_70
sub_4033f0(&var_64, 1, nullptr)
@__security_check_cookie@4(eax_48 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d24bd
return 0
