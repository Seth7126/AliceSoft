// 函数: sub_51b4c0
// 地址: 0x51b4c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2968
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t result_1
__builtin_memset(&result_1, 0, 0x18)
var_4.b = 1
char var_31 = 0x20
sub_414b60(&result_1, &var_31)
var_31 = 0x40
sub_414b60(&result_1, &var_31)
struct _EXCEPTION_REGISTRATION_RECORD** i_1
sub_51b860(&i_1, arg1, &result_1)
int32_t result_2 = result_1
var_31 = 0x3d
sub_414b60(&result_1, &var_31)
struct _EXCEPTION_REGISTRATION_RECORD** i = i_1
int32_t var_14
int32_t ebx = var_14
char* ebp = arg3

for (; i != ebx; i = &i[6])
    struct _EXCEPTION_REGISTRATION_RECORD** var_30 = nullptr
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    var_4.b = 2
    sub_51b860(&var_30, i, &result_1)
    struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = var_30
    int32_t var_50_5
    
    if ((var_2c_1 - edi_1) s/ 0x18 == 2)
        int32_t ebx_2 = edi_1[4]
        struct _EXCEPTION_REGISTRATION_RECORD* ecx_5
        
        if (edi_1[5] u< 0x10)
            ecx_5 = edi_1
        else
            ecx_5 = *edi_1
        
        int32_t eax_8 = 4
        
        if (ebx_2 u< 4)
            eax_8 = ebx_2
        
        int32_t eax_9 = sub_405190(eax_8, "text", ecx_5, eax_8)
        bool cond:2_1 = eax_9 == 0
        
        if (eax_9 == 0)
            if (ebx_2 u>= 4)
                eax_9.b = ebx_2 != 4
            else
                eax_9 = 0xffffffff
            
            cond:2_1 = eax_9 == 0
        
        eax_9.b = cond:2_1
        
        if (eax_9.b == 0)
            struct _EXCEPTION_REGISTRATION_RECORD* ecx_8
            
            if (edi_1[5] u< 0x10)
                ecx_8 = edi_1
            else
                ecx_8 = *edi_1
            
            int32_t eax_11 = 4
            
            if (ebx_2 u< 4)
                eax_11 = ebx_2
            
            int32_t eax_12 = sub_405190(eax_11, "ruby", ecx_8, eax_11)
            bool cond:3_1 = eax_12 == 0
            
            if (eax_12 == 0)
                if (ebx_2 u>= 4)
                    eax_12.b = ebx_2 != 4
                else
                    eax_12 = 0xffffffff
                
                cond:3_1 = eax_12 == 0
            
            eax_12.b = cond:3_1
            
            if (eax_12.b != 0 && ebp != &edi_1[6])
                int32_t var_50_9 = 0xffffffff
                int32_t var_54_3 = 0
                sub_401ff0(ebp, &edi_1[6], 0, 0xffffffff)
        else if (arg2 != &edi_1[6])
            int32_t var_50_7 = 0xffffffff
            int32_t var_54_2 = 0
            sub_401ff0(arg2, &edi_1[6], 0, 0xffffffff)
        
        var_4.b = 1
        var_50_5 = var_2c_1
        goto label_51b6ac
    
    var_4.b = 1
    
    if (edi_1 != 0)
        var_50_5 = var_2c_1
    label_51b6ac:
        sub_4107c0(edi_1, var_50_5)
        j__free(edi_1)
        int32_t var_28_2 = 0
        int32_t var_2c_2 = 0
        var_30 = nullptr
    
    ebx = var_14

int32_t* eax_14 = arg2
int32_t* esi = &eax_14[4]

if (eax_14[4] != 0)
    int32_t edx_3 = eax_14[5]
    char* ecx_9
    
    if (edx_3 u< 0x10)
        ecx_9 = eax_14
    else
        ecx_9 = *eax_14
    
    if (*ecx_9 == 0x22)
        void* ecx_10
        
        if (edx_3 u< 0x10)
            ecx_10 = eax_14
        else
            ecx_10 = *eax_14
        
        int32_t* edx_4
        
        if (edx_3 u< 0x10)
            edx_4 = eax_14
        else
            edx_4 = *eax_14
        
        if (ecx_10 != 0)
            ecx_10 -= edx_4
        
        sub_402210(eax_14, ecx_10, 1)
        eax_14 = arg2

void* ecx_12 = *esi

if (ecx_12 != 0)
    int32_t edi_2 = eax_14[5]
    int32_t* edx_5
    
    if (edi_2 u< 0x10)
        edx_5 = eax_14
    else
        edx_5 = *eax_14
    
    if (*(ecx_12 + edx_5 - 1) == 0x22)
        if (ecx_12 u< ecx_12 - 1)
            sub_69a57f("invalid string position")
            noreturn
        
        *esi = ecx_12 - 1
        
        if (edi_2 u>= 0x10)
            eax_14 = *eax_14
        
        *(ecx_12 - 1 + eax_14) = 0

if (*(ebp + 0x10) != 0)
    int32_t ecx_13 = *(ebp + 0x14)
    char* eax_15
    
    if (ecx_13 u< 0x10)
        eax_15 = ebp
    else
        eax_15 = *ebp
    
    if (*eax_15 == 0x22)
        void* eax_16
        
        if (ecx_13 u< 0x10)
            eax_16 = ebp
        else
            eax_16 = *ebp
        
        char* ecx_14
        
        if (ecx_13 u< 0x10)
            ecx_14 = ebp
        else
            ecx_14 = *ebp
        
        if (eax_16 != 0)
            eax_16 -= ecx_14
        
        sub_402210(ebp, eax_16, 1)

int32_t ecx_16 = *(ebp + 0x10)

if (ecx_16 != 0)
    int32_t edx_7 = *(ebp + 0x14)
    char* eax_17
    
    if (edx_7 u< 0x10)
        eax_17 = ebp
    else
        eax_17 = *ebp
    
    if (eax_17[ecx_16 - 1] == 0x22)
        char* eax_19 = *esi - 1
        
        if (ecx_16 u< eax_19)
            sub_69a57f("invalid string position")
            noreturn
        
        *(ebp + 0x10) = eax_19
        
        if (edx_7 u>= 0x10)
            ebp = *ebp
        
        *(eax_19 + ebp) = 0

sub_51ae10(arg1, arg4)
int32_t result = result_1

if (result != 0)
    result = j__free(result)

struct _EXCEPTION_REGISTRATION_RECORD** i_2 = i_1

if (i_2 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** i_3 = i_2
    
    if (i_2 != ebx)
        do
            if (i_3[5] u>= 0x10)
                j__free(*i_3)
            
            i_3[5] = 0xf
            i_3[4] = 0
            *i_3 = nullptr
            i_3 = &i_3[6]
        while (i_3 != ebx)
    
    result = j__free(i_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
