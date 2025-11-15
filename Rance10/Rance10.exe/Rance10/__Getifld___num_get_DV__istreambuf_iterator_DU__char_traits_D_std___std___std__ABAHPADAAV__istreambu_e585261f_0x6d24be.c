// 函数: ?_Getifld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1HABVlocale@2@@Z
// 地址: 0x6d24be
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x6c
int32_t (* var_c)(void* arg1) = sub_7491da
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_32 = __security_cookie ^ &__saved_ebp
void* const var_90_15 = &data_6d24ca
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = sub_6d1105(arg5)
uint32_t var_60
std::_Mpunct<wchar_t>::grouping(eax_3, &var_60)
int32_t var_8 = 0
char var_62
int32_t var_50

if (var_50 != 0)
    int32_t esi_1 = *(*eax_3 + 0x10)
    j_sub_4033e0()
    var_62 = esi_1(eax_32)
else
    var_62 = 0

int32_t esi_2 = *(*sub_6d0f2e(arg5) + 0x1c)
j_sub_4033e0()
char var_30
esi_2("0123456789ABCDEFabcdef-+Xx", 0x74ee1b, &var_30)
char* esi_3 = arg1
void* var_6c = esi_3
char eax_8 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(arg2, arg3)

if (eax_8 == 0)
    if (arg2[1].b == eax_8)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(arg2)
    
    char var_19
    
    if (*(arg2 + 5) != var_19)
        if (arg2[1].b == 0)
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(arg2)
        
        char var_1a
        
        if (*(arg2 + 5) == var_1a)
            *esi_3 = 0x2d
            var_6c = &esi_3[1]
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(arg2)
    else
        *esi_3 = 0x2b
        var_6c = &esi_3[1]
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(arg2)

int32_t var_90_5 = 0xa
int32_t esi_5 = arg4 & 0xe00
int32_t var_74_1 = 0xa
int32_t result

if (esi_5 == 0x400)
    result = 8
else if (esi_5 != 0x800)
    int32_t esi_6 = neg.d(esi_5)
    result = sbb.d(esi_6, esi_6, esi_5 != 0) & 0xa
else
    result = 0x10

arg4 = result
char var_61 = 0
char var_68 = 0
char var_63 = 0
char eax_10 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(arg2, arg3)

if (eax_10 != 0)
    goto label_6d2665

if (arg2[1].b == eax_10)
    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(arg2)

if (*(arg2 + 5) != var_30)
    goto label_6d2665

var_61 = 1
var_68 = 1
std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(arg2)
char eax_11 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(arg2, arg3)
int32_t eax_12

if (eax_11 != 0)
label_6d265b:
    
    if (result != 0)
        goto label_6d2669
    
    int32_t var_90_10 = 8
    result = 8
    arg4 = 8
label_6d2665:
    
    if (result != 0)
    label_6d2669:
        
        if (result != 0xa)
            eax_12.b = result != 8
            var_74_1 = ((eax_12 - 1) & 0xfffffff2) + 0x16
else
    if (arg2[1].b == eax_11)
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(arg2)
    
    char var_17
    
    if (*(arg2 + 5) != var_17)
        if (arg2[1].b == 0)
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(arg2)
        
        char var_18
        
        if (*(arg2 + 5) != var_18 || (result != 0 && result != 0x10))
            goto label_6d265b
        
        goto label_6d2644
    
    if (result != 0 && result != 0x10)
        goto label_6d265b
    
label_6d2644:
    int32_t var_90_9 = 0x10
    result = 0x10
    arg4 = 0x10
    var_61 = 0
    var_68 = 0
    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(arg2)
    eax_12.b = result != 8
    var_74_1 = ((eax_12 - 1) & 0xfffffff2) + 0x16
int32_t var_38 = 0
int32_t var_34 = 0xf
char var_48 = 0
sub_4e2870(&var_48, 1, var_68)
var_8.b = 1
int32_t edi_2 = 0
char eax_18
uint32_t ecx_19
eax_18, ecx_19 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(arg2, arg3)
int32_t edx_2
char* ebx_1

if (eax_18 != 0)
    ebx_1 = var_48.d
    edx_2 = var_34
    ecx_19.b = var_61
else
    var_68.d = var_48.d
    char i
    
    do
        if (arg2[1].b == 0)
            std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(arg2)
        
        void* eax_21 = std::_Find_elem<char>(&var_30, *(arg2 + 5))
        
        if (eax_21 u>= var_74_1)
            uint32_t eax_25 = var_68.d
            
            if (var_34 u< 0x10)
                eax_25 = &var_48
            
            if (*(eax_25 + edi_2) == 0)
                break
            
            eax_25.b = var_62
            
            if (eax_25.b == 0)
                break
            
            if (arg2[1].b == 0)
                eax_25, ecx_19 =
                    std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(arg2)
                eax_25.b = var_62
            
            if (*(arg2 + 5) != eax_25.b)
                break
            
            sub_405500(&var_48, 1, 0)
            edi_2 += 1
            var_68.d = var_48.d
        else
            ecx_19.b = *(eax_21 + "0123456789ABCDEFabcdef-+Xx")
            *var_6c = ecx_19.b
            
            if ((var_63 != 0 || ecx_19.b != 0x30) && var_6c u< arg1 + 0x1f)
                var_63 = 1
                var_6c += 1
            
            char* eax_24 = var_68.d
            char* edx_1 = eax_24
            var_61 = 1
            
            if (var_34 u< 0x10)
                edx_1 = &var_48
            
            if (edx_1[edi_2] != 0x7f)
                if (var_34 u< 0x10)
                    eax_24 = &var_48
                
                eax_24[edi_2] += 1
                var_68.d = var_48.d
        
        std::istreambuf_iterator<char,struct std::char_traits<char> >::_Inc(arg2)
        i, ecx_19 = std::istreambuf_iterator<char,struct std::char_traits<char> >::equal(arg2, arg3)
    while (i == 0)
    result = arg4
    edx_2 = var_34
    
    if (edi_2 == 0)
        ebx_1 = var_68.d
        ecx_19.b = var_61
    else
        char* eax_27 = var_68.d
        
        if (edx_2 u< 0x10)
            eax_27 = &var_48
        
        ebx_1 = var_68.d
        
        if (eax_27[edi_2] s<= 0)
            ecx_19.b = 0
        else
            edi_2 += 1
            ecx_19.b = var_61

uint32_t eax_28 = var_60
int32_t var_4c

if (var_4c u< 0x10)
    eax_28 = &var_60

void* eax_29

if (ecx_19.b == 0)
label_6d281d:
    eax_29 = arg1
else
    while (true)
        if (edi_2 != 0)
            ecx_19.b = *eax_28
            
            if (ecx_19.b != 0x7f)
                int32_t temp1_1 = edi_2
                edi_2 -= 1
                
                if (temp1_1 != 1)
                    char* edx_3 = ebx_1
                    
                    if (edx_2 u< 0x10)
                        edx_3 = &var_48
                    
                    if (ecx_19.b != edx_3[edi_2])
                        goto label_6d281d
                
                if (edi_2 == 0)
                    char* edx_4 = ebx_1
                    
                    if (var_34 u< 0x10)
                        edx_4 = &var_48
                    
                    if (ecx_19.b s< *edx_4)
                        goto label_6d281d
                
                edx_2 = var_34
                
                if (*(eax_28 + 1) s<= 0)
                    continue
                else
                    eax_28 += 1
                    continue
        
        eax_29 = var_6c
        
        if (var_63 == 0)
            *eax_29 = 0x30
            eax_29 += 1
        
        break

*eax_29 = 0
sub_4033f0(&var_48, 1, nullptr)
sub_4033f0(&var_60, 1, nullptr)
@__security_check_cookie@4(eax_32 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6d2841
return result
