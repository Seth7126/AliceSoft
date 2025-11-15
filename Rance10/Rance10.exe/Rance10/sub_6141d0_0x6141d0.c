// 函数: sub_6141d0
// 地址: 0x6141d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_743a58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
int32_t* var_6c = ebx
void** edi = arg2
char var_60 = 0
int32_t var_90 = var_60.d
void** var_64 = arg3
char* result_1 = nullptr
int32_t var_78 = 0
int32_t var_74 = 0
sub_452440(&result_1, arg4, arg5)
int32_t var_8_1 = 0
void* var_5c
sub_609e30(ebx + 0x44, &var_5c, edi, &result_1)
var_8_1.b = 2
char* result_3 = result_1

if (result_3 != 0)
    sub_403160(result_3, (var_74 - result_3) s>> 2, 4)

sub_60c2a0(ebx + 0xf8, &var_60, &var_5c)
void* eax_7 = var_60.d
void** var_70
char var_44
char var_2c
char* var_18
void** eax_42

if (eax_7 == *(ebx + 0xfc))
    if (edi[5] u>= 0x10)
        edi = *edi
    
    var_70 = edi
    var_18 = 0xf
    int32_t var_1c_3 = 0
    var_2c = 0
    sub_403490(&var_2c, 0x76bc00, 0x24)
    var_8_1.b = 3
    eax_42 = sub_409240(&var_70, &var_2c, &var_44, &var_70)
    var_8_1.b = 4
    goto label_614606

var_60.d = *(eax_7 + 0x20)
int32_t eax_9
int32_t edx
edx:eax_9 = muls.dp.d(0x4bda12f7, *(ebx + 0x7c) - *(ebx + 0x78))
int32_t ecx_5 = var_60.d
int32_t edx_1 = edx s>> 5

if (ecx_5 u>= (edx_1 u>> 0x1f) + edx_1)
    goto label_614585

int32_t ebx_1 = ecx_5 * 0x6c
int32_t temp2_1 = *(ebx + 0x78)
ebx = ebx_1 + *(ebx + 0x78)
void* var_68 = ebx
char* result
int32_t var_30

if (ebx_1 == neg.d(temp2_1))
    ebx = var_6c
label_614585:
    
    if (edi[5] u>= 0x10)
        edi = *edi
    
    var_70 = edi
    sub_403360(&var_2c, 0x76bb3c)
    var_8_1.b = 5
    eax_42 = sub_61bb40(&var_70, &var_2c, &var_44, &var_70, var_60.d)
    var_8_1.b = 6
label_614606:
    ebx.b = sub_612320(ebx, eax_42)
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    var_44 = 0
    int32_t var_34_2 = 0
    int32_t var_30_2 = 0xf
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, &var_18[1], 1)
else
    void** esi_1 = var_64
    
    if (*(ebx + 0x38) == esi_1)
        char* result_2 = nullptr
        int32_t edx_3 = 0
        result_1 = nullptr
        int32_t var_78_1 = 0
        var_60.d = 0
        int32_t var_74_1 = 0
        var_8_1.b = 9
        char* esi_2 = arg4
        
        if (esi_2 != arg5)
            do
                sub_42ca30(&result_1, esi_2)
                
                switch (*esi_2 - 0x12)
                    case 0, 1, 0x21, 0x47, 0x4b
                        var_64 = nullptr
                        sub_42ca30(&result_1, &var_64)
                
                esi_2 = &esi_2[4]
            while (esi_2 != arg5)
            
            edx_3 = var_78_1
            ebx = var_68
            result_2 = result_1
            var_60.d = var_74_1
        
        int32_t esi_5 = (edx_3 - result_2) s>> 2
        
        if (*(ebx + 0x4c) == esi_5)
            ebx = nullptr
            char* result_4 = result_2
            
            if (result_2 == edx_3)
            label_614454:
                void** ecx_20 = &var_68
                int32_t eax_28 = var_6c[0x78]
                
                if (&var_68 u< eax_28)
                    ecx_20 = var_6c[0x77]
                
                void** ecx_27
                
                if (&var_68 u>= eax_28 || ecx_20 u> &var_68)
                    if (eax_28 == var_6c[0x79])
                        void** var_90_12 = ecx_20
                        sub_42cd50(&var_6c[0x77])
                    
                    ecx_27 = var_6c[0x78]
                    
                    if (ecx_27 != 0)
                        *ecx_27 = var_68
                else
                    if (eax_28 == var_6c[0x79])
                        void** var_90_9 = ecx_20
                        sub_42cd50(&var_6c[0x77])
                    
                    ecx_27 = var_6c[0x78]
                    
                    if (ecx_27 != 0)
                        *ecx_27 = *(var_6c[0x77] + ((&var_68 - ecx_20) s>> 2 << 2))
                var_6c[0x78] += 4
                ebx.b = 1
            else
                int32_t* ecx_19 = *(var_68 + 0x60) + 0x34
                
                while (*ecx_19 == *result_4)
                    result_4 = &result_4[4]
                    ebx += 1
                    ecx_19 = &ecx_19[0x1c]
                    
                    if (result_4 == edx_3)
                        goto label_614454
                
                if (edi[5] u>= 0x10)
                    edi = *edi
                
                var_70 = edi
                int32_t var_18_2 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                sub_403490(&var_2c, 0x76bb70, 0x41)
                var_8_1.b = 0xc
                var_8_1.b = 0xd
                ebx.b = sub_612320(var_6c, 
                    sub_61bd60(&var_70, &var_2c, &var_44, &var_70, ebx + 1, *result_4, 
                        *(ebx * 0x70 + *(var_68 + 0x60) + 0x34)))
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44.d, var_30 + 1, 1)
                
                int32_t var_30_1 = 0xf
                int32_t var_34_1 = 0
                var_44 = 0
                
                if (var_18_2 u>= 0x10)
                    sub_403160(var_2c.d, var_18_2 + 1, 1)
        else
            if (edi[5] u>= 0x10)
                edi = *edi
            
            var_64 = edi
            sub_403360(&var_44, 0x76bafc)
            var_8_1.b = 0xa
            var_8_1.b = 0xb
            ebx.b = sub_612320(var_6c, 
                sub_61bc50(&var_64, &var_44, &var_2c, &var_64, esi_5, *(ebx + 0x4c)))
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c.d, &var_18[1], 1)
            
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            
            if (var_30 u>= 0x10)
                sub_403160(var_44.d, var_30 + 1, 1)
        
        result = result_1
        
        if (result != 0)
            sub_403160(result, (var_60.d - result) s>> 2, 4)
    else
        if (edi[5] u>= 0x10)
            edi = *edi
        
        var_64 = edi
        sub_403360(&var_44, 0x76bbc0)
        var_8_1.b = 7
        var_8_1.b = 8
        ebx.b =
            sub_612320(var_6c, sub_5a6600(&var_64, &var_44, &var_2c, &var_64, esi_1, *(ebx + 0x38)))
        sub_403320(&var_2c)
        sub_403320(&var_44)
int32_t var_48

if (var_48 u>= 0x10)
    sub_403160(var_5c, var_48 + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
