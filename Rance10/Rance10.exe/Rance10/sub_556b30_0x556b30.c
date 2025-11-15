// 函数: sub_556b30
// 地址: 0x556b30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ae80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403490(&var_30, 0x7674c8, 0xc)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg3 + 4)
int32_t eax_3

if (ecx_1 != 0)
    char* edx_1 = &var_30
    
    if (var_1c u>= 0x10)
        edx_1 = var_30.d
    
    eax_3 = (*(*ecx_1 + 8))(edx_1, 0)
else
    eax_3 = 0

int32_t var_8_2 = 0xffffffff
eax_3.b = eax_3 == 1
*(arg1 + 0x70) = eax_3.b

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

void* edx_2 = *(arg1 + 0x98)
void arg_8
void* var_6c = &arg_8
void* var_68 = arg3
void* ecx_2 = *(edx_2 + 0x7c)
char eax_7

if (ecx_2 != 0)
    void* var_8c_1 = ecx_2
    eax_7, edx_2 = sub_4ee280(ecx_2)

char var_64

if (ecx_2 == 0 || eax_7 == 0)
    var_64 = *(edx_2 + 0x23c)
else
    var_64 = 1

char* var_1c_1 = 0xf
int32_t var_20_1 = 0
var_30 = 0
sub_403490(&var_30, 0x7674b0, 0x15)
int32_t var_8_3 = 1
sub_555e00(arg1, sub_556eb0(&var_6c, &var_30), 1)
int32_t* ebx = *(arg1 + 0x80)
int32_t var_8_4 = 0xffffffff

if (var_1c_1 u>= 0x10)
    sub_403160(var_30.d, &var_1c_1[1], 1)

int32_t var_1c_2 = 0xf
int32_t var_20_2 = 0
var_30 = 0
char* result

if (ebx != 0)
    char* var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    sub_403490(&var_48, 0x7674a4, 8)
    int32_t var_8_5 = 2
    int32_t* ecx_7 = *(arg3 + 4)
    int32_t eax_10
    
    if (ecx_7 != 0)
        char* edx_3 = &var_48
        
        if (var_34_1 u>= 0x10)
            edx_3 = var_48.d
        
        eax_10 = (*(*ecx_7 + 0x24))(edx_3)
    else
        eax_10 = 0
    
    struct common::CEXTreeReader::VTable* const var_74 = &common::CEXTreeReader::`vftable'
    int32_t var_70_1 = eax_10
    var_8_5.b = 3
    int32_t var_8_6 = 0xffffffff
    ebx.b = (*(*ebx + 0x4c))(arg2, &var_74, var_64.d) == 0
    var_74 = &common::CEXTreeReader::`vftable'
    
    if (var_34_1 u>= 0x10)
        sub_403160(var_48.d, &var_34_1[1], 1)
    
    if (ebx.b != 0)
        result.b = 0
    else
        sub_403360(&var_48, 0x7675bc)
        int32_t var_8_7 = 4
        sub_555e00(arg1, sub_556eb0(&var_6c, &var_48), 2)
        int32_t* ebx_1 = *(arg1 + 0x84)
        int32_t var_8_8 = 0xffffffff
        
        if (var_34_1 u>= 0x10)
            sub_403160(var_48.d, &var_34_1[1], 1)
        
        int32_t var_34_2 = 0xf
        int32_t var_38_2 = 0
        var_48 = 0
        
        if (ebx_1 == 0)
            result.b = 0
        else
            sub_403360(&var_30, 0x7675a8)
            int32_t var_8_9 = 5
            int32_t* ecx_13 = *(arg3 + 4)
            int32_t eax_18
            
            if (ecx_13 != 0)
                char* edx_4 = &var_30
                
                if (var_1c_2 u>= 0x10)
                    edx_4 = var_30.d
                
                eax_18 = (*(*ecx_13 + 0x24))(edx_4)
            else
                eax_18 = 0
            
            var_74 = &common::CEXTreeReader::`vftable'
            int32_t var_70_2 = eax_18
            var_8_9.b = 6
            bool cond:5_1 = (*(*ebx_1 + 0x4c))(arg2, &var_74, var_64.d) == 0
            var_74 = &common::CEXTreeReader::`vftable'
            int32_t var_8_10 = 0xffffffff
            ebx_1.b = cond:5_1
            sub_403320(&var_30)
            
            if (ebx_1.b != 0)
                result.b = 0
            else
                sub_403360(&var_48, 0x76758c)
                int32_t var_8_11 = 7
                sub_555e00(arg1, sub_556eb0(&var_6c, &var_48), 3)
                int32_t* esi_1 = *(arg1 + 0x88)
                int32_t var_8_12 = 0xffffffff
                sub_403320(&var_48)
                
                if (esi_1 == 0)
                    result.b = 0
                else
                    void var_60
                    sub_403360(&var_60, 0x76757c)
                    int32_t var_8_13 = 8
                    int32_t eax_24 = sub_403f40(arg3, &var_60)
                    var_6c = &common::CEXTreeReader::`vftable'
                    int32_t var_68_1 = eax_24
                    var_8_13.b = 9
                    bool cond:6_1 = (*(*esi_1 + 0x4c))(arg2, &var_6c, var_64.d) == 0
                    var_6c = &common::CEXTreeReader::`vftable'
                    ebx_1.b = cond:6_1
                    sub_403320(&var_60)
                    result.b = ebx_1.b == 0
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
