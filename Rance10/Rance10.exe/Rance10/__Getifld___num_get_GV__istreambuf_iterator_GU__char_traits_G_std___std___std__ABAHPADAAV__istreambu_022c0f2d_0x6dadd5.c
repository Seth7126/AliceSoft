// 函数: ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HABVlocale@2@@Z
// 地址: 0x6dadd5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 0x8c
int32_t (* var_c)(void* arg1) = sub_749890
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_37 = __security_cookie ^ &__saved_ebp
void* const var_b0_15 = &data_6dade4
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = sub_6d73dc(arg5)
uint32_t var_7c
std::_Mpunct<wchar_t>::grouping(eax_3, &var_7c)
int32_t var_8 = 0
int16_t var_94
int32_t var_6c

if (var_6c != 0)
    int32_t esi_1 = *(*eax_3 + 0x10)
    j_sub_4033e0()
    var_94 = esi_1(eax_37)
else
    var_94 = 0

int32_t esi_2 = *(*sub_6d6aa9(arg5) + 0x2c)
j_sub_4033e0()
int16_t var_4c
esi_2("0123456789ABCDEFabcdef-+Xx", 0x7502b7, &var_4c)
char* esi_3 = arg1
void* var_88 = esi_3
int16_t eax_9 = sub_6e320e(arg2, arg3)

if (eax_9.b == 0)
    if (arg2[1].b == eax_9.b)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
    
    int16_t var_1e
    
    if (*(arg2 + 6) != var_1e)
        if (arg2[1].b == 0)
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
        
        int16_t var_20
        
        if (*(arg2 + 6) == var_20)
            *esi_3 = 0x2d
            var_88 = &esi_3[1]
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
    else
        *esi_3 = 0x2b
        var_88 = &esi_3[1]
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)

int32_t var_b0_5 = 0xa
int32_t esi_5 = arg4 & 0xe00
int32_t var_90_1 = 0xa
int32_t result

if (esi_5 == 0x400)
    result = 8
else if (esi_5 != 0x800)
    int32_t esi_6 = neg.d(esi_5)
    result = sbb.d(esi_6, esi_6, esi_5 != 0) & 0xa
else
    result = 0x10

arg4 = result
char var_7d = 0
char var_84 = 0
char var_7e = 0
char eax_12 = sub_6e320e(arg2, arg3)

if (eax_12 != 0)
    goto label_6dafb3

if (arg2[1].b == eax_12)
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)

if (*(arg2 + 6) != var_4c)
    goto label_6dafb3

var_7d = 1
var_84 = 1
std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
char eax_14 = sub_6e320e(arg2, arg3)
int32_t eax_16

if (eax_14 != 0)
label_6dafa9:
    
    if (result != 0)
        goto label_6dafb7
    
    int32_t var_b0_10 = 8
    result = 8
    arg4 = 8
label_6dafb3:
    
    if (result != 0)
    label_6dafb7:
        
        if (result != 0xa)
            eax_16.b = result != 8
            var_90_1 = ((eax_16 - 1) & 0xfffffff2) + 0x16
else
    if (arg2[1].b == eax_14)
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
    
    int16_t var_1a
    
    if (*(arg2 + 6) != var_1a)
        if (arg2[1].b == 0)
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
        
        int16_t var_1c
        
        if (*(arg2 + 6) != var_1c || (result != 0 && result != 0x10))
            goto label_6dafa9
        
        goto label_6daf92
    
    if (result != 0 && result != 0x10)
        goto label_6dafa9
    
label_6daf92:
    int32_t var_b0_9 = 0x10
    result = 0x10
    arg4 = 0x10
    var_7d = 0
    var_84 = 0
    std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
    eax_16.b = result != 8
    var_90_1 = ((eax_16 - 1) & 0xfffffff2) + 0x16
int32_t var_54 = 0
int32_t var_50 = 0xf
char var_64 = 0
sub_4e2870(&var_64, 1, var_84)
var_8.b = 1
int32_t edi_2 = 0
char eax_22
uint32_t ecx_19
eax_22, ecx_19 = sub_6e320e(arg2, arg3)
int32_t edx_2
char* ebx_1

if (eax_22 != 0)
    ebx_1 = var_64.d
    edx_2 = var_50
    ecx_19.b = var_7d
else
    var_84.d = var_64.d
    char i
    
    do
        if (arg2[1].b == 0)
            std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
        
        int32_t eax_25 = std::_Find_elem<uint16_t>(&var_4c, *(arg2 + 6))
        
        if (eax_25 u>= var_90_1)
            char* eax_29 = var_84.d
            
            if (var_50 u< 0x10)
                eax_29 = &var_64
            
            if (eax_29[edi_2] == 0)
                break
            
            int16_t eax_30 = var_94
            
            if (eax_30 == 0)
                break
            
            if (arg2[1].b == 0)
                std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Peek(arg2)
                eax_30 = var_94
            
            if (*(arg2 + 6) != eax_30)
                break
            
            sub_405500(&var_64, 1, 0)
            edi_2 += 1
            var_84.d = var_64.d
        else
            ecx_19.b = (*"0123456789ABCDEFabcdef-+Xx")[eax_25]
            *var_88 = ecx_19.b
            
            if ((var_7e != 0 || ecx_19.b != 0x30) && var_88 u< arg1 + 0x1f)
                var_7e = 1
                var_88 += 1
            
            char* eax_28 = var_84.d
            char* edx_1 = eax_28
            var_7d = 1
            
            if (var_50 u< 0x10)
                edx_1 = &var_64
            
            if (edx_1[edi_2] != 0x7f)
                if (var_50 u< 0x10)
                    eax_28 = &var_64
                
                eax_28[edi_2] += 1
                var_84.d = var_64.d
        
        std::istreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> >::_Inc(arg2)
        i, ecx_19 = sub_6e320e(arg2, arg3)
    while (i == 0)
    result = arg4
    edx_2 = var_50
    
    if (edi_2 == 0)
        ebx_1 = var_84.d
        ecx_19.b = var_7d
    else
        char* eax_32 = var_84.d
        
        if (edx_2 u< 0x10)
            eax_32 = &var_64
        
        ebx_1 = var_84.d
        
        if (eax_32[edi_2] s<= 0)
            ecx_19.b = 0
        else
            edi_2 += 1
            ecx_19.b = var_7d

uint32_t eax_33 = var_7c
int32_t var_68

if (var_68 u< 0x10)
    eax_33 = &var_7c

void* eax_34

if (ecx_19.b == 0)
label_6db191:
    eax_34 = arg1
else
    while (true)
        if (edi_2 != 0)
            ecx_19.b = *eax_33
            
            if (ecx_19.b != 0x7f)
                int32_t temp1_1 = edi_2
                edi_2 -= 1
                
                if (temp1_1 != 1)
                    char* edx_3 = ebx_1
                    
                    if (edx_2 u< 0x10)
                        edx_3 = &var_64
                    
                    if (ecx_19.b != edx_3[edi_2])
                        goto label_6db191
                
                if (edi_2 == 0)
                    char* edx_4 = ebx_1
                    
                    if (var_50 u< 0x10)
                        edx_4 = &var_64
                    
                    if (ecx_19.b s< *edx_4)
                        goto label_6db191
                
                edx_2 = var_50
                
                if (*(eax_33 + 1) s<= 0)
                    continue
                else
                    eax_33 += 1
                    continue
        
        eax_34 = var_88
        
        if (var_7e == 0)
            *eax_34 = 0x30
            eax_34 += 1
        
        break

*eax_34 = 0
sub_4033f0(&var_64, 1, nullptr)
sub_4033f0(&var_7c, 1, nullptr)
@__security_check_cookie@4(eax_37 ^ &__saved_ebp)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_6db1b8
return result
