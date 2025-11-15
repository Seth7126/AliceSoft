// 函数: sub_4f2090
// 地址: 0x4f2090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_736168
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* const var_7c = arg2
int32_t* var_84 = nullptr
int32_t var_80 = 0
int32_t* eax_4
int32_t ecx
eax_4, ecx = sub_4f2cd0()
var_84 = eax_4
int32_t var_8_1 = 0
char* var_88
char* var_ac = var_88
int32_t* var_b0 = &var_7c
int32_t* var_8c
sub_4f2d40(&var_84, &var_8c, ecx)
int32_t var_90 = *(var_7c + 0x40)
int32_t var_64 = 0xf
int32_t var_68 = 0
char var_78 = 0
sub_403490(&var_78, 0x765428, 5)
var_8_1.b = 1
char var_60
sub_409350(&var_90, &var_78, &var_60, &var_90)
var_8_1.b = 3

if (var_64 u>= 0x10)
    sub_403160(var_78.d, var_64 + 1, 1)

void* const esi_1 = *(arg1 + 4)
int32_t var_64_1 = 0xf
int32_t var_68_1 = 0
var_78 = 0
var_7c = esi_1
int32_t var_4c
int32_t ebx

if (esi_1 == 0)
label_4f22af:
    ebx.b = 0
else
    char* edi_1 = var_88
    
    while (true)
        var_88 = *(esi_1 + 0x40)
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        sub_403490(&var_30, " -> %d", 6)
        var_8_1.b = 4
        var_8_1.b = 5
        char var_48
        sub_4055a0(&var_60, sub_409350(&var_88, &var_30, &var_48, &var_88), 0, 0xffffffff)
        int32_t var_34
        
        if (var_34 u>= 0x10)
            sub_403160(var_48.d, var_34 + 1, 1)
        
        var_8_1.b = 3
        var_34 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        
        if (var_1c_1 u>= 0x10)
            sub_403160(var_30.d, var_1c_1 + 1, 1)
        
        void** edx_2 = var_84
        void** ecx_7 = edx_2
        void** eax_17 = edx_2[1]
        
        if (*(eax_17 + 0xd) == 0)
            do
                if (eax_17[4] u>= esi_1)
                    ecx_7 = eax_17
                    eax_17 = *eax_17
                else
                    eax_17 = eax_17[2]
            while (*(eax_17 + 0xd) == 0)
            
            if (ecx_7 != edx_2 && esi_1 u>= ecx_7[4])
                sub_407430(&var_60, 0x765468, 3)
                char* eax_27 = &var_60
                
                if (var_4c u>= 0x10)
                    eax_27 = var_60.d
                
                var_88 = eax_27
                int32_t var_1c_2 = 0xf
                int32_t var_20_2 = 0
                var_30 = 0
                sub_403490(&var_30, 0x76543c, 0x29)
                var_8_1.b = 6
                var_8_1.b = 7
                sub_6c52e0(sub_409240(&var_88, &var_30, &var_48, &var_88))
                
                if (var_34 u>= 0x10)
                    sub_403160(var_48.d, var_34 + 1, 1)
                
                int32_t var_34_1 = 0xf
                int32_t var_38_2 = 0
                var_48 = 0
                
                if (var_1c_2 u>= 0x10)
                    sub_403160(var_30.d, var_1c_2 + 1, 1)
                
                ebx.b = 1
                break
        
        char* var_ac_3 = edi_1
        void** var_b0_4 = &var_7c
        int32_t* var_98
        sub_4f2d40(&var_84, &var_98, ecx_7)
        void* const ecx_9 = var_7c
        int32_t esi_2 = *(*(*(ecx_9 + 0x68) + 0x70) + 0xbc)
        
        if (esi_2 s<= 0)
            esi_1 = nullptr
        else
            int32_t var_ac_4 = esi_2
            void* eax_20 = sub_4f15e0(*(ecx_9 + 0x6c))
            
            if (eax_20 == 0)
                esi_1 = nullptr
            else
                int32_t edx_3 = *(eax_20 + 8)
                
                if (esi_2 s< edx_3 || *(eax_20 + 4) + edx_3 s<= esi_2)
                    esi_1 = nullptr
                else
                    esi_1 = *(*(eax_20 + 0xc) + ((esi_2 - edx_3) << 2))
        
        var_7c = esi_1
        
        if (esi_1 == 0)
            goto label_4f22af

if (var_4c u>= 0x10)
    sub_403160(var_60.d, var_4c + 1, 1)

int32_t** eax_26 = var_84
int32_t var_4c_1 = 0xf
int32_t var_50 = 0
var_60 = 0
sub_4f27c0(&var_84, &var_88, *eax_26, eax_26)
sub_403160(var_84, 1, 0x14)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
